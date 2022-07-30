#ifndef PROGRAMA_H
#define PROGRAMA_H
#include <iostream>
#include "estudiante.cpp"

using namespace std;
class Programa
{
    string nombre;
    string area;
    int semestres;
    Programa *next;
    Estudiante *start;

public:
    Programa();
    Programa(string, string, int);
    ~Programa();
    string getNombre();
    string getArea();
    int getSemestres();
    Programa *getNext();
    Estudiante *getStart();
    void setNombre(string);
    void setArea(string);
    void setSemestres(int);
    void setNext(Programa *);
    void setStart(Estudiante *);
    void insertarEstudiante();
};

#endif