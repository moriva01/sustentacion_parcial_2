#include "juegos.cpp" //incluir la clase juegos

vector<juegos> lista_main;//lista de todos los juegos
vector<juegos> lista_persona;//lista de juegos favoritos

void imprimir_lista(vector<juegos> aux)//metodo que imprime listas (se le pas ala lista por parametro)
{

    cout << "nombre ------ desarrollador ----------- jugadores ----------------------- lanzamiento--------" << endl;
    for (juegos p : aux)
    {

        cout << p.getNombre() << "---- " << p.getDesarrollador() << "---- " << p.getJugadores() << "---- " << p.getLanzamiento() << endl;
    }
}

void agregar_juegos_listas(string juego)//grega juegos a las listas
{

    string desarrollador;//pedir datos para agregar a las listas
    int lanzamiento;
    int jugadores;

    for (juegos p : lista_main)
    {
        if (p.getNombre() == juego)//revisas si el juego ya esta en la lista
        {

            juegos aux;//objeto auxiliar si el juego existe en la lista

            aux.setNombre(p.getNombre());//pasa los datos del p (de la lsita) al objeto aux
            aux.setDesarrollador(p.getDesarrollador());
            aux.setLanzamiento(p.getLanzamiento());
            aux.setJugadores(p.getJugadores());
            aux.setCalificacion(p.getCalificacion());
            lista_persona.push_back(aux);//pasa el objeto aux a la lista favoritos
            cout << "juego " << juego << " agregado correctamente a la lista" << endl;
            return;
        }
    }//si el juego no existe: 

    cout << "juego no existe en la lista principal lo agregaremos :" << endl;

    juegos aux2;//objeto juego auxiliar si no existe el juego
    cout << "nombre del juego agregado -- nombre: " << juego << endl;
    aux2.setNombre(juego);//pas anombre de juego
    cout << "digite desarrollador: " << endl;
    cin >> desarrollador;
    cout << "digite año de lanzamiento: " << endl;//pide el resto de atributos del juego
    cin >> lanzamiento;
    cout << "digite cantidad jugadores: " << endl;
    cin >> jugadores;

    aux2.setDesarrollador(desarrollador);//los pasa al objeto auxliliar
    aux2.setLanzamiento(lanzamiento);
    aux2.setJugadores(jugadores);
    aux2.setCalificacion(0);

    lista_main.push_back(aux2);//objeto auxiliar a lista de todos los juegos
    lista_persona.push_back(aux2);//objeto auxiliar a lista de favoritos
}

void calificar_juego()//metodo califica juego
{

    string juego;
    int calificacion;

    cout << "------------------------- lista completa de juegos ------------------------------- " << endl;
    imprimir_lista(lista_main);//imprime la lista completa de juegos
    cout << "digite el nombre del juego a calificar: " << endl;
    cin >> juego;//selecciona el juego por noombre

    for (juegos p : lista_main)
    {
        if (p.getNombre() == juego)//lo busca en la lista
        {

            cout << "seleccione una calificaicion para el juego" << p.getNombre() << endl;
            cout << "1- malo" << endl
                 << "2- regular" << endl
                 << "3- bueno" << endl;
            cin >> calificacion;//le d anua calificacion
            p.setCalificacion(calificacion);//la actualiza en el objeto
            cout << "calificacion puesta correctamente" << endl;
        }
    }
}

void imprimir_calificaion()//imprime calificaciones
{

    cout << "-----------------juegos califados malos: " << endl;

    for (juegos p : lista_main)//cerorre la lista y la filtra por su calificacion
    {
        if (p.getCalificacion() == 1)//calificacion malos
        {

            cout << p.getNombre() << "---- " << p.getDesarrollador() << "---- " << p.getJugadores() << "---- " << p.getLanzamiento() << endl;
        }
    }
    cout << endl;

    cout << "-----------------juegos califados regulares: " << endl;

    for (juegos p : lista_main)
    {
        if (p.getCalificacion() == 2)//calificacion regulares
        {

            cout << p.getNombre() << "---- " << p.getDesarrollador() << "---- " << p.getJugadores() << "---- " << p.getLanzamiento() << endl;
        }
    }
    cout << endl;
    cout << "-----------------juegos califados buenos: " << endl;

    for (juegos p : lista_main)
    {
        if (p.getCalificacion() == 3)//calificacion buenos
        {

            cout << p.getNombre() << "---- " << p.getDesarrollador() << "---- " << p.getJugadores() << "---- " << p.getLanzamiento() << endl;
        }
    }
}
