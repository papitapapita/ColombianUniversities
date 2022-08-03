#include "Programa.h"

Programa::Programa()
{
    nombre = area = "";
    semestres = idPrograma = 0;
    start = NULL;
    next = NULL;
}

Programa::Programa(string nombre, string area, int semestres, int idPrograma)
{
    this->nombre = nombre;
    this->area = area;
    this->semestres = semestres;
    this->idPrograma = idPrograma;
    start = NULL;
    next = NULL;
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

void Programa::insertarEstudiante(string nombres, string tipoDocumento, string apellidos, string genero, int edad, int documento)
{
    Estudiante *newEst = new Estudiante(nombres, tipoDocumento, apellidos, genero, edad, documento);

    if (!this->getStart())
        this->setStart(newEst);
    else
    {
        Estudiante *aux = this->getStart();
        while (aux->getDocumento() != documento && aux->getNext())
            aux = aux->getNext();
        if (aux->getDocumento() != documento)
            aux->setNext(newEst);
        else
            cout << "Estudiante ya existe";
    }
}

void Programa::mostrarEstudiante()
{
    Estudiante *aux = this->getStart();
    while (aux)
    {
        cout << aux->getNombres() << "\t";
        aux = aux->getNext();
    }
}

int Programa::cantEstudiante()
{
    Estudiante *aux = this->getStart();
    int cont = 0;
    while (aux)
    {
        cont++;
        aux = aux->getNext();
    }
    return cont;
}