#ifndef SEDE_H
#define SEDE_H
#include "Programa.h"
class Sede
{
    Sede *next;
    Programa *start;
    string nombre;
    int idSede;

public:
    Sede();
    Sede(string, int);
    ~Sede();
    Sede *getNext();
    void setNext(Sede *);
    Programa *getStart();
    void setStart(Programa *);
    string getNombre();
    void setNombre(string);
    int getIdSede();
    void setIdSede(int idSede);
    void insertarPrograma(string, string, int, int);
    void eliminarPrograma(int);
    void mostrarProgramas();
    int cantidadProgramas();
};

#endif