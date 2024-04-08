#include <iostream> //entrada y salida de datos por teclado
#include <vector>

using namespace std; //espacio de trabajo 

class juegos//clase juegos
{

private:
    string nombre;//atributos de la clase
    string desarrollador;
    int anio_lanzamiento;
    int cant_jugadores;
    int calificacion;

public:
    juegos() {}//constructor vacio

    // --------------------------------------------- setters

    void setNombre(string nombre)
    {

        this->nombre = nombre;
    }

    void setDesarrollador(string desarrollador)
    {

        this->desarrollador = desarrollador;
    }

    void setLanzamiento(int lanzamiento)
    {

        this->anio_lanzamiento = lanzamiento;
    }
    void setJugadores(int jugadores)
    {

        this->cant_jugadores = jugadores;
    }

      void setCalificacion(int calificacion)
    {

        this->calificacion = calificacion;
    }

    //---------------------------------------- getters

    string getNombre()
    {
        return nombre;
    }

    string getDesarrollador()
    {
        return desarrollador;
    }

    int getLanzamiento()
    {
        return anio_lanzamiento;
    }

    int getJugadores()
    {
        return cant_jugadores;
    }

     int getCalificacion()
    {
        return cant_jugadores;
    }
};