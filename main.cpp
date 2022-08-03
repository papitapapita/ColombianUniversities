#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "programa.cpp"

using namespace std;

int main()
{
    srand(time(NULL));
    int aux2, aux;
    float nota;
    string const nombres[50] = {
        "Hugo", "Martín", "Lucas", "Mateo", "Leo", "Daniel", "Alejandro", "Pablo", "Manuel", "Álvaro", "Adrian", "David", "Mario", "Enzo", "Diego", "Marcos", "Izan", "Javier", "Marco", "Alex", "Bruno", "Oliver", "Miguel", "Thiago", "Antonio", "Lucía", "Sofía", "Martina", "María", "Julia", "Paula", "Valeria", "Emma", "Daniela", "Carla", "Alba", "Noa", "Alma", "Sara", "Carmen", "Lara", "Mia", "Valentina", "Olivia", "Claudia", "Jimena", "Lola", "Chloe", "Aitana", "Abril"};
    string const apellidos[50] = {
        "Álvarez", "Andrade", "Benitez", "Castillo", "Castro", "Contreras", "De León", "Díaz", "Duarte", "Espinoza", "Fernández", "Flores", "García", "Giménez", "Gómez", "Gonzáles", "Gutiérrez", "Hernández", "Jiménez", "López", "Mamani", "Mártinez", "Mejía", "Mora", "Morales", "Moreno", "Muñoz", "Pereira", "Pérez", "Pineda", "Portillo", "Ramírez", "Reyes", "Rivas", "Rivera", "Rodríguez", "Rojas", "Salazar", "Sánchez", "Santana", "Santos", "Silva", "Sosa", "Soto", "Torres", "Vargas", "Vera", "Villalba", "Zambrano", "Olivos"};
    string const generos[2] = {
        "Masculino", "Femenino"};
    string const programasTecnologia[5] = {
        "Ingeniería de Sistemas", "Ingeniería Informática", "Ingeniería de Telecomunicaciones", "Ingeniería de Software", "Ingeniería Eléctrica"};
    string const programasMedicina[5] = {
        "Odontología", "Veterinaria", "Medicina", "Fisioterapia", "Enfermería"};
    string const programasAdministracion[5] = {
        "Mercadeo", "Administración de empresas", "Contaduría", "Administración pública", "Economía"};

    // Crear vector de estudiantes
    vector<Estudiante *> estudiantes;
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            aux = 18 + rand() % (50 - 18);
            aux2 = 100000 + rand() % (999999 - 100000);
            if (i > 24)
                estudiantes.push_back(new Estudiante(nombres[i], "C.C.", apellidos[j], generos[1], aux, aux2));
            else
                estudiantes.push_back(new Estudiante(nombres[i], "C.C.", apellidos[j], generos[0], aux, aux2));
        }
    }

    for (int i = 0; i < estudiantes.size() - 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            nota = static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (5)));
            estudiantes[i]->insertarNota(nota);
        }
        cout << estudiantes[i]->getNombres() << endl;
        estudiantes[i]->mostrarNotas();
    }

    vector<Programa *> programas;
    for (int i = 0; i < 15; i++)
    {
        aux = 6 + rand() % (11 - 6);
        aux2 = 1000 + rand() % (9999 - 1000);
        if (i < 5)
            programas.push_back(new Programa(programasTecnologia[i], "Tecnología", aux, aux2));
        else if (i < 10)
            programas.push_back(new Programa(programasMedicina[i], "Medicina", aux, aux2));
        else
            programas.push_back(new Programa(programasAdministracion[i], "Administración", aux, aux2));
    }
    /*
        for (int i = 0; i < programas.size(); i++)
        {
            for (int j = 0; j < (estudiantes.size() / programas.size()); i++)
            {
            }
        }*/
}
