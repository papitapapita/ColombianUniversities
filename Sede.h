#ifndef SEDE_H
#define SEDE_H
#include "Programa.h"
class Sede
{
    Sede *next;
    Programa *start;
    string sede;
    int idSede;

public:
    Sede();
    Sede(string, int);
    ~Sede();
    Sede *getNext();
    void setNext(Sede *);
    Programa *getStart();
    void setStart(Programa *);
    string getSede();
    void setSede(string);
    int getIdSede();
    void setIdSede(int idSede);
    void insertarPrograma(string, string, int);
    void eliminarPrograma(int);
    void mostrarProgramas();
    int cantidadProgramas();
};

#endif