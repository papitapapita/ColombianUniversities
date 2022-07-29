#include "Estudiante.h"

Estudiante::Estudiante()
{
    nombres = "";
    tipoDocumento = "";
    apellidos = "";
    genero = "";
    edad = 0;
    documento = 0;
    next = NULL;
    start = NULL;
}

Estudiante::Estudiante(string nombres, string tipoDocumento, string apellidos, string genero, int edad, int documento)
{
    this->nombres = nombres;
    this->tipoDocumento = tipoDocumento;
    this->apellidos = apellidos;
    this->genero = genero;
    this->edad = edad;
    this->documento = documento;
    this->next = next;
    this->start = start;
}

Estudiante::~Estudiante()
{
    Nota *aux = this->getStart();
    Nota *aux2;
    while (aux)
    {
        aux2 = aux;
        aux = aux->getNext();
        delete aux2;
    }
}

string Estudiante::getNombres()
{
    return nombres;
}

string Estudiante::getTipoDocumento()
{
    return tipoDocumento;
}

string Estudiante::getApellidos()
{
    return apellidos;
}

string Estudiante::getGenero()
{
    return genero;
}

int Estudiante::getEdad()
{
    return edad;
}

int Estudiante::getDocumento()
{
    return documento;
}

Estudiante *Estudiante::getNext()
{
    return next;
}

Nota *Estudiante::getStart()
{
    return start;
}

void Estudiante::setNombres(string nombres)
{
    this->nombres = nombres;
}

void Estudiante::setTipoDocumento(string tipoDocumento)
{
    this->tipoDocumento = tipoDocumento;
}

void Estudiante::setApellidos(string apellidos)
{
    this->apellidos = apellidos;
}

void Estudiante::setGenero(string genero)
{
    this->genero = genero;
}

void Estudiante::setEdad(int edad)
{
    this->edad = edad;
}

void Estudiante::setDocumento(int documento)
{
    this->documento = documento;
}

void Estudiante::setNext(Estudiante *next)
{
    this->next = next;
}

void Estudiante::setStart(Nota *start)
{
    this->start = start;
}