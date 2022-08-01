#include "Universidad.h"

Universidad::Universidad()
{
    nombre = "";
    idUniversidad = 0;
}

Universidad::Universidad(string nombre, int idUniversidad)
{
    this->nombre = nombre;
    this->idUniversidad = idUniversidad;
}

Universidad::~Universidad()
{
    Sede *aux = this->getStart();
    Sede *aux2;
    while (aux)
    {
        aux2 = aux;
        aux = aux->getNext();
        delete aux2;
    }
}

string Universidad::getNombre()
{
    return nombre;
}

int Universidad::getIdUniversidad()
{
    return idUniversidad;
}

Sede *Universidad::getStart()
{
    return start;
}

Universidad *Universidad::getNext()
{
    return next;
}

void Universidad::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Universidad::setIdUniverisdad(int idUniversidad)
{
    this->idUniversidad = idUniversidad;
}

void Universidad::setStart(Sede *start)
{
    this->start = start;
}

void Universidad::setNext(Universidad *next)
{
    this->next = next;
}

void Universidad::insertarSede(string nombre, int idSede)
{
    Sede *newSede = new Sede(nombre, idSede);
    if (!this->getStart())
        this->setStart(newSede);
    else
    {
        Sede *aux = this->getStart();
        while (aux->getNext())
            aux = aux->getNext();
        aux->setNext(newSede);
    }
}

void Universidad::eliminarSede(int idSede)
{
    Sede *aux = this->getStart();
    Sede *aux2 = NULL;
    while (aux && aux->getIdSede() != idSede)
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

void Universidad::mostrarSedes()
{
    Sede *aux = this->getStart();
    while (aux)
    {
        cout << aux->getNombre() << "\t";
        aux = aux->getNext();
    }
}

int Universidad::cantidadSedes()
{
    Sede *aux = this->getStart();
    int cantidad = 0;
    while (aux)
    {
        cantidad++;
        aux = aux->getNext();
    }
    return cantidad;
}
