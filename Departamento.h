#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include "Universidad.h"
class Departamento
{
    Universidad *uniStart;

public:
    Departamento();
    void eliminarUniversidad();
    int cantidadUniversidades();
    void mostrarUniversidades();
};

#endif