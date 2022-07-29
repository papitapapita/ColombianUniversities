#include <iostream>
#include "estudiante.cpp"

using namespace std;

int main()
{
    Estudiante *pedro = new Estudiante("Pedro", "C.C", "Gutierrez", "M", 20, 1010204);
    pedro->insertarNota(5); /*
     pedro->insertarNota(2);
     pedro->insertarNota(4.5);*/
    return 0;
}