#ifndef MULITLIST_H
#define MULITLIST_H
#include "universidad.cpp"

class Multilist
{
    Universidad *head;

public:
    Universidad *getHead();
    void setHead(Universidad *head);
    void insertarUniversidad();
    void insertarSede();
    void insertarPrograma();
    void insertarEstudiante();
    void insertarNota();
    void eliminarUniversidad();
    void eliminarSede();
    void eliminarPrograma();
    void eliminarEstudiante();
    void eliminarNota();
    void mostrar();
    void mostrarUniversidades();
    int estudiantesXGenero();
    int estudiantesXPrograma();
};

#endif