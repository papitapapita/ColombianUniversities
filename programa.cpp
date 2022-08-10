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

int Programa::getIdPrograma()
{
    return idPrograma;
}

void Programa::setIdPrograma(int idPrograma)
{
    this->idPrograma = idPrograma;
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

void Programa::insertarEstudiante(Estudiante *newEst)
{

    if (!this->getStart())
        this->setStart(newEst);
    else
    {
        Estudiante *aux = this->getStart();
        while (aux->getDocumento() != newEst->getDocumento() && aux->getNext())
            aux = aux->getNext();
        if (aux->getDocumento() != newEst->getDocumento())
            aux->setNext(newEst);
        else
            cout << "Estudiante ya existe\n";
    }
}

void Programa::mostrarEstudiante()
{
    Estudiante *aux = this->getStart();
    while (aux)
    {
        cout << aux->getDocumento() << "\t\t" << aux->getApellidos() << "\t\t" << aux->getNombres() << endl;
        aux = aux->getNext();
    }
}

void Programa::mostrarNombresEstudiante()
{
    Estudiante *aux = this->getStart();
    for (int i = 0; aux; i++)
    {
        cout << i + 1 << ". " << aux->getNombres() << " " << aux->getApellidos() << endl;
        aux = aux->getNext();
    }
}

Estudiante *Programa::buscarEstudiante(int indice)
{
    Estudiante *aux = this->getStart();
    for (int i = 0; i < indice; i++)
        aux = aux->getNext();
    return aux;
}

int Programa::cantidadEstudiantes()
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