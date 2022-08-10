#include "llenado.cpp"

int main()
{
    llenado();

    int opcion = 0;
    int opcionDepa = 0;
    int i = 0;
    int size = 0;
    string depa, uni, sed, pro;
    system("clear");
    cout << "---------------ColombianUniversities---------------" << endl;
    cout << "1. Reporte global" << endl;
    cout << "2. Reporte personalizadao" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        system("clear");
        cout << "Reporte global: " << endl;
        cout << "1. Top 5 Promedio Universidades\n"
             << "2. Porcentaje de estudiantes por edad\n"
             << "3. Porcentaje de estudiantes por género\n"
             << ">> ";
        cin >> opcion;
        system("clear");
        switch (opcion)
        {
        case 1:
            cout << "TOP PROMEDIO POR UNIVERSIDADES\n";
            m->uniPromedioGlobal();
            break;
        case 2:
            cout << "PORCENTAJE DE ESTUDIANTES POR EDAD\n";
            m->porcenEdadesGlobal();
        case 3:
            cout << "PORCENTAJE DE ESTUDIANTES POR GÉNDERO\n";
            m->porcentGeneroGlobal();
        default:
            break;
        }
        break;
    case 2:
        system("clear");
        cout << "REPORTE PERSONALIZADO" << endl;
        cout << "1. Cundinamarca\n"
             << "2. Meta\n"
             << "3. Boyaca\n"
             << "4. Antioquia\n"
             << "5. Bolivar\n"
             << "6. Mostrar todos\n"
             << ">> ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            system("clear");
            cout << "Cundinamarca\n";
            depa = "Cundinamarca";
            for (i = 0; i < unisCundinamarca.size(); i++)
                cout << i + 1 << ". " << unisCundinamarca[i]->getNombre() << endl;
            cout << i + 1 << ". Mostrar todos\n"
                 << ">> ";
            cin >> opcion;
            if (opcion > 0 && opcion < i + 1)
            {
                system("clear");
                cout << unisCundinamarca[opcion - 1]->getNombre() << endl;
                uni = unisCundinamarca[opcion - 1]->getNombre();
                unisCundinamarca[opcion - 1]->mostrarNombreSedes();
                size = unisCundinamarca[opcion - 1]->cantidadSedes();
                cout << size + 1 << ". Mostrar todos\n"
                     << ">> ";
                cin >> opcion;

                if (opcion > 0 && opcion <= size + 1)
                {
                    system("clear");
                    Sede *aux = unisCundinamarca[opcion - 1]->buscarSedeInd(opcion - 1);
                    if (opcion == size + 1)
                        m->reportePersonalizado(depa, unisCundinamarca[opcion]);
                    else
                    {
                        cout << aux->getNombre() << endl;
                        sed = aux->getNombre();
                        aux->mostrarNombresProgramas();
                        size = aux->cantidadProgramas();
                        cout << size + 1 << " .Mostrar todos\n"
                             << ">> ";
                        cin >> opcion;
                    }
                    if (opcion > 0 && opcion < size + 1)
                    {
                        Programa *aux2 = aux->buscarPrograma(opcion - 1);
                        system("clear");

                        cout << aux2->getNombre() << endl;
                        pro = aux2->getNombre();
                        aux2->mostrarNombresEstudiante();
                        size = aux2->cantidadEstudiantes();
                        cout << size + 1 << ". Mostrar todos\n"
                             << ">> ";
                        cin >> opcion;
                        if (opcion > 0 && opcion < size + 1)
                        {
                            Estudiante *aux3 = aux2->buscarEstudiante(opcion - 1);
                            m->reportePersonalizado(depa, uni, sed, pro, aux3);
                        }
                        else if (opcion == size + 1)
                        {
                            m->reportePersonalizado(depa, uni, sed, aux2);
                        }
                        else
                            cout << "Opción Incorrecta\n";
                    }
                    else if (opcion == size + 1)
                        m->reportePersonalizado(depa, uni, aux);
                    else
                        cout << "Opción Incorrecta\n";
                }
                else
                    cout << "Opción Incorrecta\n";
            }
            else if (opcion == i + 1)
                m->reportePersonalizado(unisCundinamarca, depa);
            else
                cout << "Opcion Incorrecta\n";

            break;

        default:
            break;
        }
    default:
        break;
    }
    return 0;
}
