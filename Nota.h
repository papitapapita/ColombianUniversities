#ifndef NOTA_H
#define NOTA_H

class Nota
{
    float nota;
    Nota *next;

public:
    ~Nota();
    Nota();
    Nota(float);
    float getNota();
    Nota *getNext();
    void setNota(float);
    void setNext(Nota *);
};

#endif