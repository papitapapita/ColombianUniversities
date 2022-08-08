#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Multilist.cpp"

using namespace std;

int main()
{
    srand(time(NULL));
    int aux2, aux;
    float nota;
    const string nombres[50] = {
        "Hugo", "Martín", "Lucas", "Mateo", "Leo", "Daniel", "Alejandro", "Pablo", "Manuel", "Álvaro", "Adrian", "David", "Mario", "Enzo", "Diego", "Marcos", "Izan", "Javier", "Marco", "Alex", "Bruno", "Oliver", "Miguel", "Thiago", "Antonio", "Lucía", "Sofía", "Martina", "María", "Julia", "Paula", "Valeria", "Emma", "Daniela", "Carla", "Alba", "Noa", "Alma", "Sara", "Carmen", "Lara", "Mia", "Valentina", "Olivia", "Claudia", "Jimena", "Lola", "Chloe", "Aitana", "Abril"};
    const string apellidos[50] = {
        "Álvarez", "Andrade", "Benitez", "Castillo", "Castro", "Contreras", "De León", "Díaz", "Duarte", "Espinoza", "Fernández", "Flores", "García", "Giménez", "Gómez", "Gonzáles", "Gutiérrez", "Hernández", "Jiménez", "López", "Mamani", "Mártinez", "Mejía", "Mora", "Morales", "Moreno", "Muñoz", "Pereira", "Pérez", "Pineda", "Portillo", "Ramírez", "Reyes", "Rivas", "Rivera", "Rodríguez", "Rojas", "Salazar", "Sánchez", "Santana", "Santos", "Silva", "Sosa", "Soto", "Torres", "Vargas", "Vera", "Villalba", "Zambrano", "Olivos"};
    const string generos[2] = {
        "Masculino", "Femenino"};
    const string programasTecnologia[5] = {
        "Ingeniería de Sistemas", "Ingeniería Informática", "Ingeniería de Telecomunicaciones", "Ingeniería de Software", "Ingeniería Eléctrica"};
    const string programasMedicina[5] = {
        "Odontología", "Veterinaria", "Medicina", "Fisioterapia", "Enfermería"};
    const string programasAdministracion[5] = {
        "Mercadeo", "Administración de empresas", "Contaduría", "Administración pública", "Economía"};
    const string departamentos[5] = {
        "Cundinamarca", "Meta", "Boyacá", "Antioquia", "Nariño"};
    const string nombresSedes[5] = {
        "Sede Cundinamarca", "Sede Meta", "Sede Boyacá", "Sede Antioquia", "Sede Nariño"};
    const string nombresUniversidades[5] = {
        "Universidad de los Andes", "Universidad de los Llanos", "Universidad Nacional", "Universidad Cooperativa", "Universidad Javeriana"};

    // Crear vector de estudiantes
    vector<Estudiante *>
        estudiantes;
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
        // cout << estudiantes[i]->getNombres() << endl;
        //  estudiantes[i]->mostrarNotas();
    }

    vector<Programa *> programas;
    for (int i = 0; i <= 15; i++) // i = 0
    {
        aux = 6 + rand() % (11 - 6);
        aux2 = 1000 + rand() % (9999 - 1000);
        if (i < 5)
            programas.push_back(new Programa(programasTecnologia[i], "Tecnología", aux, aux2));
        else if (i < 10)
            programas.push_back(new Programa(programasMedicina[i - 5], "Salud", aux, aux2));
        else
            programas.push_back(new Programa(programasAdministracion[i - 10], "Administración", aux, aux2));
    }

    int cont = 0;

    for (int i = 0; i < programas.size(); i++)
    {
        for (int j = 0; j < (estudiantes.size() / programas.size()); j++)
        {
            programas[i]->insertarEstudiante(estudiantes[cont]);
            cont++;
        }
        // programas[i]->mostrarEstudiante();
    }

    vector<Sede *> sedes;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            aux = 1000 + rand() % (9999 - 1000);
            sedes.push_back(new Sede(nombresSedes[i], departamentos[i], aux));
        }
    }

    cont = 0;
    for (int i = 0; i < sedes.size(); i++)
    {
        if (cont == 15)
            cont = 0;
        for (int j = 0; j < 3; j++)
        {
            sedes[i]->insertarPrograma(programas[cont]);
            cont++;
        }
        cout << sedes[i]->getNombre() << endl;
        sedes[i]->mostrarProgramas();
    }
    /*
        vector<Universidad *> universidades;

        for (int i = 0; i < 5; i++)
        {
            aux = 1000 % rand() % (9999 - 1000);
            universidades.push_back(new Universidad(nombresUniversidades[i], aux));
        }

        for (int i = 0; i < universidades.size(); i++)
        {
            cont = 0;
            for (int j = 0; j < sedes.size() / universidades.size(); j++)
            {
                universidades[i]->insertarSede(sedes[cont + 3]);
                cont++;
            }
            cout << universidades[i]->getNombre() << endl;
            universidades[i]->mostrarSedes();
        }
    */
    //  cout << "Cantidad mujeres en Ingenieríe de Sistemas: " << cantidadPersonas();
} //hi mio
