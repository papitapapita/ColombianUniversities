#include "Nota.h"

Nota::~Nota()
{
}

Nota::Nota()
{
    nota = 0;
}

float Nota::getNota() const
{
    return nota;
}

Nota *Nota::getNext() const
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