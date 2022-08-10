#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include <iostream>
#include "sede.cpp"

using namespace std;
class Universidad
{
    Universidad *next;
    Sede *start;
    string nombre;
    int idUniversidad;

public:
    Universidad();
    Universidad(string, int);
    ~Universidad();
    string getNombre();
    int getIdUniversidad();
    Sede *getStart();
    Universidad *getNext();
    void setNombre(string);
    void setIdUniverisdad(int);
    void setStart(Sede *);
    void setNext(Universidad *);
    void insertarSede(Sede *);
    void eliminarSede(int);
    void mostrarSedes();
    void mostrarNombreSedes();
    int cantidadSedes();
    Sede *buscarSedeInd(int indice);
};

#endif