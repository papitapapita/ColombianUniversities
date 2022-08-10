#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Multilist.cpp"

Multilist *m = new Multilist();
vector<Sede *> meta;
vector<Sede *> cundinamarca;
vector<Sede *> boyaca;
vector<Sede *> antioquia;
vector<Sede *> bolivar;
vector<Sede *> sedes;
vector<Universidad *> unisMeta;
vector<Universidad *> unisCundinamarca;
vector<Universidad *> unisBoyaca;
vector<Universidad *> unisBolivar;
vector<Universidad *> unisAntioquia;

using namespace std;
void llenado()
{
    srand(time(NULL));
    int aux2, aux, cont2;
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
    const string nombresUniversidades[8] = {
        "Universidad de los Andes", "Universidad de los Llanos", "Universidad Nacional", "Universidad Cooperativa", "Universidad Distrital", "Universidad de Antioquia", "Universidad del Caribe", "Universidad de Boyaca"};

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
        // cout << estudiantes[i]->getNombres() << endl;
        //  estudiantes[i]->mostrarNotas();
    }

    vector<Programa *> programas;
    for (int i = 0; i < 4; i++) // i = 0
    {
        for (int j = 0; j < 15; j++)
        {
            aux = 6 + rand() % (11 - 6);
            aux2 = 1000 + rand() % (9999 - 1000);
            if (j < 5)
                programas.push_back(new Programa(programasTecnologia[j], "Tecnología", aux, aux2));
            else if (j < 10)
                programas.push_back(new Programa(programasMedicina[j - 5], "Salud", aux, aux2));
            else
                programas.push_back(new Programa(programasAdministracion[j - 10], "Administración", aux, aux2));
        }
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

    sedes.push_back(new Sede("Universidad de los Andes sede Cundinamarca", "Cundinamarca", 10510155));
    sedes.push_back(new Sede("Universidad Nacional sede Cundinamarca", "Cundinamarca", 54123412));
    sedes.push_back(new Sede("Universidad Distrital sede Cundinamarca", "Cundinamarca", 332312));
    sedes.push_back(new Sede("Universidad de los Llanos sede Meta", "Meta", 1231831));
    sedes.push_back(new Sede("Universidad Cooperativa sede Meta", "Meta", 519821));
    sedes.push_back(new Sede("Universidad Nacional sede Meta", "Meta", 45198));
    sedes.push_back(new Sede("Universidad Nacional sede Boyaca", "Boyaca", 1561781));
    sedes.push_back(new Sede("Universidad de Boyaca sede Boyaca", "Boyaca", 87410987));
    sedes.push_back(new Sede("Universidad de Cooperativa sede Boyaca", "Boyaca", 1987198));
    sedes.push_back(new Sede("Universidad de Antioquia sede Antioquia", "Antioquia", 4148189));
    sedes.push_back(new Sede("Universidad de Cooperativa sede Antioquia", "Antioquia", 6881289));
    sedes.push_back(new Sede("Universidad Nacional sede Antioquia", "Antioquia", 1787911));
    sedes.push_back(new Sede("Universidad del Caribe sede Bolivar", "Bolivar", 18976));
    sedes.push_back(new Sede("Universidad Nacional sede Bolivar", "Bolivar", 658412));
    sedes.push_back(new Sede("Universidad de Antioquia sede Bolivar", "Bolivar", 1981653));
    //"Universidad de los Andes", "Universidad de los Llanos", "Universidad Nacional", "Universidad Cooperativa", "Universidad Javeriana"
    cont = 0;
    for (int i = 0; i < sedes.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (i)
            {
            case 0:
                cundinamarca.push_back(sedes[cont]);
                break;
            case 1:
                meta.push_back(sedes[cont]);
                break;
            case 2:
                boyaca.push_back(sedes[cont]);
                break;
            case 3:
                antioquia.push_back(sedes[cont]);
                break;
            case 4:
                bolivar.push_back(sedes[cont]);
                break;
            }
            cont++;
        }
    }

    cout << "SEDES" << endl;
    for (int i = 0; i < sedes.size(); i++)
    {
        cout << i + 1 << ". " << sedes[i]->getNombre() << endl;
        // sedes[i]->mostrarProgramas();
    }
    cout << "FIN SEDES" << endl;

    cout << "SEDES CUNDINAMARCA\n";
    for (int i = 0; i < cundinamarca.size(); i++)
    {
        cout << i + 1 << ". " << cundinamarca[i]->getNombre() << "\t" << cundinamarca[i]->getIdSede() << endl;
    }
    cout << "FIN SEDES CUNDINAMARCA\n\n";

    cout << "SEDES META" << endl;
    for (int i = 0; i < meta.size(); i++)
    {
        cout << i + 1 << ". " << meta[i]->getNombre() << "\t" << meta[i]->getIdSede() << endl;
    }
    cout << "FIN SEDES META" << endl;

    cout << "SEDES BOYACA\n";
    for (int i = 0; i < boyaca.size(); i++)
    {
        cout << i + 1 << ". " << boyaca[i]->getNombre() << "\t" << boyaca[i]->getIdSede() << endl;
    }
    cout << "FIN SEDES BOYACA\n\n";

    cout << "SEDES antioquia\n";
    for (int i = 0; i < antioquia.size(); i++)
    {
        cout << i + 1 << ". " << antioquia[i]->getNombre() << "\t" << antioquia[i]->getIdSede() << endl;
    }
    cout << "FIN SEDES antioquia\n\n";

    cout << "SEDES bolivar\n";
    for (int i = 0; i < bolivar.size(); i++)
    {
        cout << i + 1 << ". " << bolivar[i]->getNombre() << "\t" << bolivar[i]->getIdSede() << endl;
    }
    cout << "FIN SEDES bolivar\n\n";
    /*
        for (int i = 0; i < programas.size(); i++)
        {
            cout << i << ". " << programas[i]->getNombre() << "\t" << programas[i]->getArea() << "\t" << programas[i]->getIdPrograma() << endl;
        }
    */
    cont = 0;
    for (int i = 0; i < sedes.size(); i++)
    {
        if (cont >= 45)
            cont = 0;
        for (int j = 0; j < 3; j++)
        {
            sedes[i]->insertarPrograma(programas[cont]);
            cont++;
        }
    }

    vector<Universidad *>
        universidades;

    for (int i = 0; i < 8; i++)
    {
        aux = 1000 % rand() % (9999 - 1000);
        universidades.push_back(new Universidad(nombresUniversidades[i], aux));
    }

    for (int i = 0; i < universidades.size(); i++)
    {
        cout << i + 1 << ". " << universidades[i]->getNombre() << endl;
    }

    universidades[0]->insertarSede(sedes[0]);
    universidades[1]->insertarSede(sedes[3]);
    universidades[2]->insertarSede(sedes[1]);
    universidades[2]->insertarSede(sedes[5]);
    universidades[2]->insertarSede(sedes[6]);
    universidades[2]->insertarSede(sedes[11]);
    universidades[2]->insertarSede(sedes[13]);
    universidades[3]->insertarSede(sedes[4]);
    universidades[3]->insertarSede(sedes[8]);
    universidades[3]->insertarSede(sedes[10]);
    universidades[4]->insertarSede(sedes[2]);
    universidades[5]->insertarSede(sedes[9]);
    universidades[5]->insertarSede(sedes[14]);
    universidades[6]->insertarSede(sedes[12]);
    universidades[7]->insertarSede(sedes[7]);

    for (int i = 0; i < universidades.size(); i++)
    {
        cout << universidades[i]->getNombre() << endl
             << "---------" << endl;
        universidades[i]->mostrarSedes();
        cout << "---------" << endl;
    }
    unisMeta.push_back(universidades[1]);
    unisMeta.push_back(universidades[2]);
    unisMeta.push_back(universidades[3]);
    unisCundinamarca.push_back(universidades[0]);
    unisCundinamarca.push_back(universidades[2]);
    unisCundinamarca.push_back(universidades[4]);
    unisBoyaca.push_back(universidades[2]);
    unisBoyaca.push_back(universidades[7]);
    unisBoyaca.push_back(universidades[3]);
    unisBolivar.push_back(universidades[6]);
    unisBolivar.push_back(universidades[5]);
    unisAntioquia.push_back(universidades[5]);
    unisAntioquia.push_back(universidades[3]);
    unisAntioquia.push_back(universidades[2]);

    m->setHead(universidades[0]);
    for (int i = 1; i < universidades.size(); i++)
        m->insertarUniversidad(universidades[i]);
}