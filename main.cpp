#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "estudiante.cpp"

using namespace std;

int main()
{
    srand(time(NULL));
    int doc, edad;
    float nota;
    string const nombres[50] = {
        "Hugo", "Martín", "Lucas", "Mateo", "Leo", "Daniel", "Alejandro", "Pablo", "Manuel", "Álvaro", "Adrian", "David", "Mario", "Enzo", "Diego", "Marcos", "Izan", "Javier", "Marco", "Alex", "Bruno", "Oliver", "Miguel", "Thiago", "Antonio", "Lucía", "Sofía", "Martina", "María", "Julia", "Paula", "Valeria", "Emma", "Daniela", "Carla", "Alba", "Noa", "Alma", "Sara", "Carmen", "Lara", "Mia", "Valentina", "Olivia", "Claudia", "Jimena", "Lola", "Chloe", "Aitana", "Abril"};
    string const apellidos[50] = {
        "Álvarez", "Andrade", "Benitez", "Castillo", "Castro", "Contreras", "De León", "Díaz", "Duarte", "Espinoza", "Fernández", "Flores", "García", "Giménez", "Gómez", "Gonzáles", "Gutiérrez", "Hernández", "Jiménez", "López", "Mamani", "Mártinez", "Mejía", "Mora", "Morales", "Moreno", "Muñoz", "Pereira", "Pérez", "Pineda", "Portillo", "Ramírez", "Reyes", "Rivas", "Rivera", "Rodríguez", "Rojas", "Salazar", "Sánchez", "Santana", "Santos", "Silva", "Sosa", "Soto", "Torres", "Vargas", "Vera", "Villalba", "Zambrano", "Olivos"};
    string const generos[2] = {
        "Masculino", "Femenino"};
    string const nombreProgramas[15] = {
        "Ingeniería de Sistemas", "Ingeniería Electrónica", "Veterinaria", "Medicina", "Contabilidad", "Licenciatura en Matemáticas", "Agronomía", "Ingeniería Civil", "Diseño Gráfico", "Producción Audiovisual", "Ingeniería de Telecomunicaciones", "Ingeniería Agroindustrial", "Ingeniería de Minas", "Ingeniería en Ciberseguridad", "Ingeniería Informática"};
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
            edad = 18 + rand() % (50 - 18);
            doc = 100000 + rand() % (999999 - 100000);
            if (i > 24)
                estudiantes.push_back(new Estudiante(nombres[i], "C.C.", apellidos[j], generos[1], edad, doc));
            else
                estudiantes.push_back(new Estudiante(nombres[i], "C.C.", apellidos[j], generos[0], edad, doc));
        }
    }
    /*
        for (int i = 0; i < estudiantes.size(); i++)
        {
            cout << estudiantes[i]->getNombres() << " " << estudiantes[i]->getApellidos() << endl;
        }*/

    nota = static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (5)));
    cout << nota << endl;
    estudiantes[0]->insertarNota(nota);
    nota = static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (5)));
    cout << nota << endl;
    estudiantes[0]->insertarNota(nota);
    nota = static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (5)));
    cout << nota << endl;
    estudiantes[0]->insertarNota(nota);
    estudiantes[0]->printNotas();
    /*
    cout << estudiantes[0]->getNombres();

    for (int i = 0; i < estudiantes.size() - 1; i++)
    {
        nota = static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (5)));
        //  estudiantes[i]->insertarNota(5);
        // estudiantes[i]->mostrarNotas();
        for (int j = 0; j < 3; j++)
        {
        }
    }

    vector<Programa *> programas;
    /*for (int i = 0; i < 15; i++)
         programas.push_back(new Programa(nombreProgramas[i], ));*/
}
