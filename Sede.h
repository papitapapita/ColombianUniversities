#ifndef SEDE_H
#define SEDE_H
#include "Programa.h"
class Sede
{
    Programa *programa;
    Sede *siguiente;
    string info;
public:
    Sede(string);
    ~Sede();
    Sede *getSiguiente();
    void setSiguiente(Sede *);
    Programa *getPrograma();
    void setPrograma(Programa *);
    void setInfo(string);
    void insertarPrograma(string);
    void eliminarPrograma(string);
};

#endif