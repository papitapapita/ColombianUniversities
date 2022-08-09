#include "Multilist.h"

Universidad *Multilist::getHead()
{
    return head;
}

void Multilist::setHead(Universidad *head)
{
    this->head = head;
}

void Multilist::insertarUniversidad(Universidad *uni)
{
    if (!this->getHead())
        this->setHead(uni);
    else
    {
        Universidad *aux = this->getHead();
        while (aux->getNext() && aux->getIdUniversidad() != uni->getIdUniversidad() && aux->getNombre() != aux->getNombre())
            aux = aux->getNext();
        if (aux->getIdUniversidad() != uni->getIdUniversidad() &&)
    }
}
void Multilist::insertarSede(int universidad, Sede *sede)
{

    while (aux)
}
void Multilist::insertarPrograma(int universidadId, int sedeId, Programa *programa)
{
}
void Multilist::insertarEstudiante(int universidadId, int sedeId, int programaId, Estudiante *estudianteId)
{
}
void Multilist::insertarNota(int universidadId, int sedeId, int programaId, int estudianteId, Nota *nota)
{
}
void Multilist::eliminarUniversidad(int universidadId)
{
}
void Multilist::eliminarSede(int universidadId, int sedeId, int programaId)
{
}
void Multilist::eliminarPrograma(int universidadId, int sedeId, int programaId)
{
}
void Multilist::eliminarEstudiante(int universidadId, int sedeId, int programaId, int estudianteId)
{
}
void Multilist::eliminarNota(int universidadId, int sedeId, int programaId, int estudianteId, int nota)
{
}

void Multilist::reportePersonalizado(string departamento, string universidad, string sede, string programa, string estudiante)
{
    Universidad *aux = this->getHead();
    Sede *aux2 = aux->getStart();
    Programa *aux3 = aux2->getStart();
    Estudiante *aux4 = aux3->getStart();
    Nota *while (aux)
    {
        while (aux2)
        {
            while (aux3)
            {
                while (aux4)
                {
                }
            }
        }
    }
}

void Multilist::reportePersonalizado(string departamento, string universidad, string sede, string programa)
{
}

void Multilist::reportePersonalizado(string departamento, string universidad, string sede)
{
}

void Multilist::reportePersonalizado(string departamento, string universidad)
{
}

void Multilist::reportePersonalizado(string departamento)
{
}

void Multilist::reportePersonalizado()
{
}

void Multilist::topCarreraPromedio()
{
}

void Multilist::uniPromedio()
{
}

void Multilist::porcenEdades()
{
}

void Multilist::demandaCarr()
{
}

void Multilist::porcentGenero()
{
}

void Multilist::demandaArea()
{
}

void Multilist::sedesUniversidad()
{
}

Universidad *Multilist::buscarUni(string nombreU)
{
}
Universidad *Multilist::buscarSede(string nombreU, string nombreSede)
{
}

Programa *Multilist::buscarPrograma(string nombreU, string nombreSede, string nombrePrograma)
{
}

Estudiante *Multilist::buscarEstudiante(string nombreU, string nombreSede, string nombrePrograma, int idEstudiante)
{
    Universidad *aux = buscarUni(nombreU);
    Sede *aux2 = buscarSede(nombreU, nombreSedde);
    Programa *aux3 = buscarPrograma(nombreU, o rnombreSede, nombrePrograma);
    Estudiante *aux = aux3->getStart();
    while (aux3->getId() != idEstudiante)
        aux3->getNext();
    if (aux3->getId() == idEstudiante)
        return aux3;
    else
        return NULL;
}
