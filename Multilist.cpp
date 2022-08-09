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
        // if (aux->getIdUniversidad() != uni->getIdUniversidad() &&)
    }
}
void Multilist::insertarSede(int universidad, Sede *sede)
{
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

void Multilist::reportePersonalizado(string departamento, string universidad, string sede, string programa, int idEstudiante)
{
    Estudiante *aux = buscarEstudiante(universidad, sede, programa, idEstudiante);
    Nota *aux2 = aux->getStart();
    while (aux2)
    {
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
    int cont=0;
    Universidad *auxUni = this->getHead();
    while(auxUni){
        Sede *auxSed = auxUni -> getStart();
        while(auxSed){
            auxSed = auxSed->getNext();
            cont++;
        }
        cout << auxUni->getNombre() << cont << endl ;
        auxUni = auxUni ->getNext();
        cont = 0;
    }
}

Universidad *Multilist::buscarUni(string nombreU)
{
    Universidad *aux=this->getHead();
    while(aux->getNombre()!=nombreU&&aux!=NULL){
        aux=aux->getNext();
    }
    return aux;
}

Sede *Multilist::buscarSede(string nombreU, string nombreSede)
{
    return NULL;
}

Programa *Multilist::buscarPrograma(string nombreU, string nombreSede, string nombrePrograma)
{
    return NULL;
}

Estudiante *Multilist::buscarEstudiante(string nombreU, string nombreSede, string nombrePrograma, int idEstudiante)
{
    Universidad *aux = buscarUni(nombreU);
    Sede *aux2 = buscarSede(nombreU, nombreSede);
    Programa *aux3 = buscarPrograma(nombreU, nombreSede, nombrePrograma);
    Estudiante *aux4 = aux3->getStart();
    while (aux4->getDocumento() != idEstudiante)
        aux4->getNext();
    if (aux4->getDocumento() == idEstudiante)
        return aux4;
    else
        return NULL;
}
