#ifndef SEDE_H
#define SEDE_H
#include "programa.cpp"
class Sede
{
    Sede *next;
    Programa *start;
    string nombre;
    string departamento;
    int idSede;

public:
    Sede();
    Sede(string, string, int);
    ~Sede();
    Sede *getNext();
    void setNext(Sede *);
    Programa *getStart();
    void setStart(Programa *);
    string getNombre();
    void setNombre(string);
    int getIdSede();
    void setIdSede(int idSede);
    string getDepartamento();
    void setDepartamento(string);
    void insertarPrograma(Programa *);
    void eliminarPrograma(int);
    void mostrarProgramas();
    void mostrarNombresProgramas();
    int cantidadProgramas();
    Programa *buscarPrograma(int indice);
};

#endif