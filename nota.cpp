#include "Nota.h"

Nota::~Nota()
{
}

Nota::Nota()
{
    nota = 0;
}

Nota::Nota(int nota)
{
    this->nota = nota;
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