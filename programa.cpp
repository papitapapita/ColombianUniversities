#include "Programa.h"

Programa::Programa()
{
    nombre = area = "";
    semestres = 0;
}

Programa::Programa(string nombre, string area, int semestres)
{
    this->nombre = nombre;
    this->area = area;
    this->semestres = semestres;
}

Programa::~Programa()
{
    Estudiante *aux = this->getStart();
    Estudiante *aux2;
    while (aux)
    {
        aux2 = aux;
        delete aux2;
        aux = aux->getNext();
    }
}

string Programa::getNombre()
{
    return nombre;
}

string Programa::getArea()
{
    return area;
}

int Programa::getSemestres()
{
    return semestres;
}

Programa *Programa::getNext()
{
    return next;
}

Estudiante *Programa::getStart()
{
    return start;
}

void Programa::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Programa::setArea(string area)
{
    this->area = area;
}

void Programa::setSemestres(int semestres)
{
    this->semestres = semestres;
}

void Programa::setNext(Programa *next)
{
    this->next = next;
}

void Programa::setStart(Estudiante *start)
{
    this->start = start;
}