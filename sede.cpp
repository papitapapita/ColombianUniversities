#include "iostream"
#include "Sede.h"

using namespace std;

Sede::Sede()
{
    nombre = "";
    next = NULL;
    start = NULL;
    idSede = 0;
}

Sede::Sede(string nombre, int idSede)
{
    this->nombre = nombre;
    this->idSede = idSede;
    next = NULL;
    start = NULL;
}

Sede::~Sede()
{
    Programa *aux = this->getStart();
    Programa *aux2;
    while (aux)
    {
        aux2 = aux;
        aux = aux->getNext();
        delete aux2;
    }
}

Sede *Sede::getNext()
{
    return next;
}

Programa *Sede::getStart()
{
    return start;
}

string Sede::getNombre()
{
    return nombre;
}

int Sede::getIdSede()
{
    return idSede;
}

void Sede::setNext(Sede *next)
{
    this->next = next;
}

void Sede::setStart(Programa *start)
{
    this->start = start;
}

void Sede::setNombre(string nonbre)
{
    this->nombre = nombre;
}

void Sede::setIdSede(int idSede)
{
    this->idSede = idSede;
}

void Sede::insertarPrograma(string nombre, string area, int semestres, int idPrograma)
{
    Programa *newPrograma = new Programa(nombre, area, semestres, idPrograma);
    if (!this->getStart())
        this->setStart(newPrograma);
    else
    {
        Programa *aux = this->getStart();
        while (aux->getNext())
            aux = aux->getNext();
        aux->setNext(newPrograma);
    }
}

void Sede::eliminarPrograma(int idPrograma)
{
    Programa *aux = this->getStart();
    Programa *aux2 = NULL;
    while (aux && aux->getIdPrograma() != idPrograma)
    {
        aux2 = aux;
        aux = aux->getNext();
    }
    if (aux)
    {
        if (!aux2)
            this->setStart(aux->getNext());
        else
            aux2->setNext(aux->getNext());
        delete aux;
    }
    else
        cout << "Dato no encontrado";
}

void Sede::mostrarProgramas()
{
    Programa *aux = this->getStart();
    while (aux)
    {
        cout << aux->getNombre() << "\t";
        aux = aux->getNext();
    }
}

int Sede::cantidadProgramas()
{
    Programa *aux = this->getStart();
    int cantidad = 0;
    while (aux)
    {
        cantidad++;
        aux = aux->getNext();
    }
    return cantidad;
}
