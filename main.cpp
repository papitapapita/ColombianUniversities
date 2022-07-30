#include <iostream>
#include "programa.cpp"

using namespace std;

int main()
{
    /*Estudiante *pedro = new Estudiante("Pedro", "C.C", "Gutierrez", "M", 20, 1010204);
    pedro->insertarNota(5);g
    pedro->insertarNota(2);
    pedro->insertarNota(4.5);
    pedro->mostrarNotas();*/

    Programa *p1 = new Programa();
    p1->insertarEstudiante("Pedro", "C.C", "Gutierrez", "M", 20, 1010204);
    p1->mostrarEstudiante();
    cout << p1->cantEstudiante() << endl;

    return 0;
}