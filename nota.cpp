#include "Nota.h"

Nota::~Nota()
{
}

Nota::Nota()
{
    nota = 0;
}

Nota::Nota(float nota)
{
    this->nota = nota;
    this->next = NULL;
}

float Nota::getNota()
{
    return nota;
}

Nota *Nota::getNext()
{
    return next;
}

void Nota::setNota(float nota)
{
    this->nota = nota;
}

void Nota::setNext(Nota *next)
{
    this->next = next;
}