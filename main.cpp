#include "llenado.cpp"

int main()
{
    llenado();

    int opcion = 0;
    int opcionDepa = 0;
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
        cout << "Reporte personalizado: " << endl;
        break;
    default:
        break;
    }
    return 0;
}
