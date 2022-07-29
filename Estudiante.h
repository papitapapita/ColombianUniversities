#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include "Nota.h"
using namespace std;

class Estudiante
{
    string nombres;
    string tipoDocumento;
    string apellidos;
    string genero;
    int edad;
    int documento;
    Estudiante *next;
    Nota *start;

public:
    Estudiante();
    Estudiante(string nombres, string tipoDocumento, string apellidos, string genero, int edad, int documento);
    string getNombres();
    string getTipoDocumento();
    string getApellidos();
    string getGenero();
    int getEdad();
    int getDocumento();
    Estudiante *getNext();
    Nota *getStart();
    void setNombres(string);
    void setTipoDocumento(string);
    void setApellidos(string);
    void setGenero(string);
    void setEdad(int);
    void setDocumento(int);
    void setNext(Estudiante *);
    void setStart(Nota *);
    void insertarNota(int);
};

#endif