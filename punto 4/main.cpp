/*

--------------------------- IVAN DAVID MORENO VARGAS ---------------------------------------

Implementar un mecanismo que permita agregar en una lista los juegos favoritos de
cada jugador


usuario califia juego de 1 a 3

*/

#include "operadores.cpp" //incluir la clase juegos

int main() // clase ejecutadora (la main pues)
{

    juegos j1, j2, j3, j4, j5; // objetos de juego (para que la cosa no inicie en 0)

    //-------------------------- instanciar objetos

    j1.setNombre("mariokart");
    j1.setDesarrollador("nintendo");
    j1.setLanzamiento(2017);
    j1.setJugadores(4);
    j1.setCalificacion(0);

    lista_main.push_back(j1); // agregar a la lista

    j2.setNombre("marioparty");
    j2.setDesarrollador("nintendo");
    j2.setLanzamiento(2021);
    j2.setJugadores(4);
    j2.setCalificacion(0);

    lista_main.push_back(j2); // agregar a la lista

    j3.setNombre("animalcrossing");
    j3.setDesarrollador("nintendo");
    j3.setLanzamiento(2020);
    j3.setJugadores(1);
    j3.setCalificacion(0);

    lista_main.push_back(j3); // agregar a la lista

    j4.setNombre("marioodisey");
    j4.setDesarrollador("nintendo");
    j4.setLanzamiento(2017);
    j4.setJugadores(4);
    j4.setCalificacion(0);

    lista_main.push_back(j4); // agregar a la lista

    j5.setNombre("zelda");
    j5.setDesarrollador("nintendo");
    j5.setLanzamiento(2005);
    j5.setJugadores(4);
    j5.setCalificacion(0);

    lista_main.push_back(j5); // agregar a la lista
    // -----------------------------------------------

    int eleccion, eleccion2, eleccion3;//elegir dentro de los menus switch
    string nombre_juego;

    while (true)
    {

        cout << "--------- Buenvenido al sistema de juegos ----------------" << endl;//menu iniciak
        cout << "1- agregar juegos a tu lista de juegos como favoritos" << endl;
        cout << "2- calificar juegos" << endl;
        cout << "3- salir" << endl;
        cin >> eleccion;
        switch (eleccion)
        {
        case 1:

            cout << "---------------------- juegos favoritos" << endl;//menu de juegos favoritos
            cout << "1- agregar juegos a favoritos" << endl;
            cout << "2- ver favoritos" << endl;
            cout << "3- ver lista completa de juegos" << endl;
            cout << "4- salir" << endl;
            cin >> eleccion2;

            switch (eleccion2)
            {
            case 1:

                cout << "digite nombre del juego: " << endl;
                cin >> nombre_juego;
                agregar_juegos_listas(nombre_juego);//agregar un juego a la lista
                break;

            case 2:
                cout << "---------- lista de favoritos" << endl;
                imprimir_lista(lista_persona);//imprime la lista de juegos favoritos
                break;

            case 3:
                cout << "---------- lista de todos los juegos" << endl;
                imprimir_lista(lista_main);//imprime lista de todos los juegos
                break;

            case 4:
                return 0;//salir
                break;

            default:
                break;
            }

            break;

        case 2:

            cout << "----------------calificacion de juegos" << endl;//menu de calificacion de juegos
            cout << "1- calificar juegos" << endl;
            cout << "2- ver juegos calificados" << endl;
            cout << "3- salir" << endl;
            cin >> eleccion3;

            switch (eleccion3)
            {
            case 1:
                calificar_juego();//califica juego
                break;

            case 2:
                imprimir_calificaion();//imprime lista de calificaciones
                break;

            case 3:
                return 0;
                break;

            default:
                break;
            }
            break;

        case 3:
            return 0;
            break;

        default:
            break;
        }
    }

    return 0;
}