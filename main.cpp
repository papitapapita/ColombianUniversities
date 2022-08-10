#include "llenado.cpp"

int main()
{
    llenado();

    int opcion = 0;
    int opcionDepa = 0;
    int i = 0;
    int size = 0;
    string depa, uni, sed, pro;
    cout << "---------------ColombianUniversities---------------" << endl;
    cout << "1. Reporte global" << endl;
    cout << "2. Reporte departamental" << endl;
    cout << "3. Reporte personalizadao" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Reporte global: " << endl;

        break;
    case 2:
        cout << "Reporte departamental: " << endl;
        cout << "1.Meta" << endl;
        cout << "2.Cundinamarca" << endl;
        cout << "3.Boyaca" << endl;
        cout << "4.Antioquia" << endl;
        cout << "5.Narino" << endl;
        cout << "6.Bolivar" << endl;
        cin >> opcionDepa;
        if (opcionDepa == 1)
        {
            cout << "Meta: " << endl;
            cout << "Top 5 carreras con mejor promedio" << endl;
            cout << "Top  5 universidades con mejor promedio " << endl;
            cout << "Porcentaje de estudiantes por edades" << endl;
            cout << "Top 5 carreras con mas demanda" << endl;
            cout << "Porcentaje de hombres y mujeres" << endl;
            cout << "Area con mas demanda" << endl;
        }
        else if (opcionDepa == 2)
        {
            cout << "Cundinamarca: " << endl;
            cout << "Top 5 carreras con mejor promedio" << endl;
            cout << "Top  5 universidades con mejor promedio " << endl;
            cout << "Porcentaje de estudiantes por edades" << endl;
            cout << "Top 5 carreras con mas demanda" << endl;
            cout << "Porcentaje de hombres y mujeres" << endl;
            cout << "Area con mas demanda" << endl;
        }
        else if (opcionDepa == 3)
        {
            cout << "Boyaca: " << endl;
            cout << "Top 5 carreras con mejor promedio" << endl;
            cout << "Top  5 universidades con mejor promedio " << endl;
            cout << "Porcentaje de estudiantes por edades" << endl;
            cout << "Top 5 carreras con mas demanda" << endl;
            cout << "Porcentaje de hombres y mujeres" << endl;
            cout << "Area con mas demanda" << endl;
        }
        else if (opcionDepa == 4)
        {
            cout << "Antioquia: " << endl;
            cout << "Top 5 carreras con mejor promedio" << endl;
            cout << "Top  5 universidades con mejor promedio " << endl;
            cout << "Porcentaje de estudiantes por edades" << endl;
            cout << "Top 5 carreras con mas demanda" << endl;
            cout << "Porcentaje de hombres y mujeres" << endl;
            cout << "Area con mas demanda" << endl;
        }
        else if (opcionDepa == 5)
        {
            cout << "Narino: " << endl;
            cout << "Top 5 carreras con mejor promedio" << endl;
            cout << "Top  5 universidades con mejor promedio " << endl;
            cout << "Porcentaje de estudiantes por edades" << endl;
            cout << "Top 5 carreras con mas demanda" << endl;
            cout << "Porcentaje de hombres y mujeres" << endl;
            cout << "Area con mas demanda" << endl;
        }
        else if (opcionDepa == 6)
        {
            cout << "Bolivar: " << endl;
            cout << "Top 5 carreras con mejor promedio" << endl;
            cout << "Top  5 universidades con mejor promedio " << endl;
            cout << "Porcentaje de estudiantes por edades" << endl;
            cout << "Top 5 carreras con mas demanda" << endl;
            cout << "Porcentaje de hombres y mujeres" << endl;
            cout << "Area con mas demanda" << endl;
        }
        break;
    case 3:
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
            if (opcion > 0 && opcion <= i + 1)
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
                    cout << aux->getNombre() << endl;
                    sed = aux->getNombre();
                    aux->mostrarNombresProgramas();
                    size = aux->cantidadProgramas();
                    cout << size + 1 << " .Mostrar todos\n"
                         << ">> ";
                    cin >> opcion;
                    if (opcion > 0 && opcion <= size + 1)
                    {
                        system("clear");
                        Programa *aux2 = aux->buscarPrograma(opcion - 1);
                        cout << aux2->getNombre() << endl;
                        pro = aux2->getNombre();
                        aux2->mostrarNombresEstudiante();
                        size = aux2->cantidadEstudiantes();
                        cout << size + 1 << ". Mostrar todos\n"
                             << ">> ";
                        cin >> opcion;
                        if (opcion > 0 && opcion <= size + 1)
                        {
                            Estudiante *aux3 = aux2->buscarEstudiante(opcion - 1);
                            m->reportePersonalizado(depa, uni, sed, pro, aux3);
                        }
                    }
                }
                else
                    cout << "Opción Incorrecta\n";
            }
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
