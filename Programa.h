#ifndef PROGRAMA_H
#define PROGRAMA_H
#include <iostream>
#include "estudiante.cpp"

using namespace std;
class Programa
{
    string nombre;
    string area;
    int idPrograma;
    int semestres;
    Programa *next;
    Estudiante *start;

public:
    Programa();
    Programa(string nombre, string area, int idPrograma, int semestres);
    ~Programa();
    string getNombre();
    string getArea();
    int getSemestres();
    Programa *getNext();
    Estudiante *getStart();
    int getIdPrograma();
    void setNombre(string);
    void setArea(string);
    void setSemestres(int);
    void setNext(Programa *);
    void setStart(Estudiante *);
    void setIdPrograma(int);
    void insertarEstudiante(Estudiante *);
    void mostrarEstudiante();
    int cantEstudiante();
};

#endif