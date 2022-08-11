#include "Multilist.h"
#include "list"

Multilist::Multilist()
{
    head = NULL;
}

Multilist::~Multilist()
{
}

Universidad *Multilist::getHead()
{
    return head;
}

void Multilist::setHead(Universidad *head)
{
    this->head = head;
}

void Multilist::insertarUniversidad(Universidad *uni)
{
    if (!this->getHead())
        this->setHead(uni);
    else
    {
        Universidad *aux = this->getHead();
        while (aux->getNext() && uni->getIdUniversidad() != aux->getIdUniversidad())
            aux = aux->getNext();
        if (aux->getIdUniversidad() != uni->getIdUniversidad())
            aux->setNext(uni);
        else
            cout << "Universidad ya existe\n";
    }
}
void Multilist::insertarUniversidadOrder(Universidad *uni)
{
    if (!this->getHead())
        this->setHead(uni);
    else
    {
        Universidad *aux = this->getHead();
        while (aux->getNext() && uni->getIdUniversidad() != aux->getIdUniversidad())
            aux = aux->getNext();
        if (aux->getIdUniversidad() != uni->getIdUniversidad())
            aux->setNext(uni);
        else
            cout << "Universidad ya existe\n";
    }
}
void Multilist::insertarSede(int universidad, Sede *sede)
{
}
void Multilist::insertarPrograma(int universidadId, int sedeId, Programa *programa)
{
}
void Multilist::insertarEstudiante(int universidadId, int sedeId, int programaId, Estudiante *estudianteId)
{
}
void Multilist::insertarNota(int universidadId, int sedeId, int programaId, int estudianteId, Nota *nota)
{
}
void Multilist::eliminarUniversidad(int universidadId)
{
}
void Multilist::eliminarSede(int universidadId, int sedeId, int programaId)
{
}
void Multilist::eliminarPrograma(int universidadId, int sedeId, int programaId)
{
}
void Multilist::eliminarEstudiante(int universidadId, int sedeId, int programaId, int estudianteId)
{
}
void Multilist::eliminarNota(int universidadId, int sedeId, int programaId, int estudianteId, int nota)
{
}

void Multilist::reportePersonalizado(string depa, string uni, string sed, string pro, Estudiante *estudiante)
{
    Nota *aux = estudiante->getStart();
    system("clear");

    cout << "Departamento: " << depa << endl
         << "Universidad: " << uni << endl
         << "Sede: " << sed << endl
         << "Programa: " << pro << endl
         << "Estudiante: " << estudiante->getNombres() << " " << estudiante->getApellidos() << endl
         << "Notas: " << endl;
    while (aux)
    {
        cout << "\t " << aux->getNota() << endl;
        aux = aux->getNext();
    }
}

void Multilist::reportePersonalizado(string depa, string uni, string sed, Programa *programa)
{
    Estudiante *aux = programa->getStart();
    Nota *aux2 = aux->getStart();
    system("clear");
    int i = 0;
    cout << "Departamento: " << depa << endl
         << "Universidad: " << uni << endl
         << "Sede: " << sed << endl
         << "Programa: " << programa->getNombre() << endl;
    while (aux)
    {

        cout << i + 1 << ". Estudiante: " << aux->getNombres() << " " << aux->getApellidos() << endl;
        while (aux2)
        {
            cout << "\t " << aux2->getNota() << endl;
            aux2 = aux2->getNext();
        }
        aux = aux->getNext();

        if (aux)
            aux2 = aux->getStart();
        i++;
    }
}

void Multilist::reportePersonalizado(string depa, string uni, Sede *sede)
{
    Programa *aux = sede->getStart();
    Estudiante *aux2 = aux->getStart();
    Nota *aux3 = aux2->getStart();
    system("clear");

    cout << "Departamento: " << depa << endl
         << "Universidad: " << uni << endl
         << "Sede: " << sede->getNombre() << endl;
    while (aux)
    {
        cout << "Programa: " << aux->getNombre() << endl;
        while (aux2)
        {
            cout << "\tEstudiante: " << aux2->getNombres() << " " << aux2->getApellidos() << endl;
            while (aux3)
            {
                cout << "\t\t " << aux3->getNota() << endl;
                aux3 = aux3->getNext();
            }
            aux2 = aux2->getNext();
            if (aux2)
                aux3 = aux2->getStart();
        }
        aux = aux->getNext();
        if (aux)
            aux2 = aux->getStart();
    }
}

void Multilist::reportePersonalizado(string depa, Universidad *universidad)
{
    /*Sede *aux = universidad->getStart();
    Programa *aux2 = aux->getStart();
    Estudiante *aux3 = aux2->getStart();
    Nota *aux4 = aux3->getStart();
    system("clear");

    cout << "Departamento: " << depa << endl
         << "Universidad: " << universidad->getNombre() << endl;
    while (aux)
    {
        cout << "Sede: " << aux->getNombre() << endl;
        while (aux2)
        {
            cout << "Programa: " << aux2->getNombre() << endl;
            while (aux3)
            {
                cout << "Estudiante: " << aux3->getNombres() << " " << aux3->getApellidos() << endl;
                 while (aux4)
                 {
                     cout << "\t " << aux4->getNota() << endl;
                     aux4 = aux4->getNext();
                 }
                aux3 = aux3->getNext();
                aux4 = aux3->getStart();
            }
            aux2 = aux2->getNext();
            aux3 = aux2->getStart();
        }
        aux = aux->getNext();
        aux2 = aux->getStart();
    }*/
}

void Multilist::reportePersonalizado(vector<Universidad *> depaV, string depa)
{
    Universidad *aux = depaV[0];
    Sede *aux2 = aux->getStart();
    Programa *aux3 = aux2->getStart();
    Estudiante *aux4 = aux3->getStart();
    Nota *aux5 = aux4->getStart();
    system("clear");

    cout << "Departamento: " << depa << endl;
    while (aux)
    {
        cout << "Universidad: " << aux->getNombre() << endl;
        while (aux2)
        {

            cout << "Sede: " << aux2->getNombre() << endl;
            while (aux3)
            {
                cout << "Programa: " << aux3->getNombre() << endl;
                while (aux4)
                {
                    cout << "Estudiante: " << aux4->getNombres() << " " << aux4->getApellidos() << endl;
                    while (aux5)
                    {
                        cout << "\t " << aux5->getNota() << endl;
                        aux5 = aux5->getNext();
                    }
                    aux4 = aux4->getNext();
                    if (aux4)
                        aux5 = aux4->getStart();
                }
                aux3 = aux3->getNext();
                if (aux3)
                    aux4 = aux3->getStart();
            }
            aux2 = aux2->getNext();
            if (aux2)
                aux3 = aux2->getStart();
        }
        aux = aux->getNext();
        if (aux)
            aux2 = aux->getStart();
    }
}

void Multilist::reportePersonalizado(vector<vector<Universidad *>> departamentos, string departamentosName[])
{
    Universidad *aux = departamentos[0][0];
    Sede *aux2 = aux->getStart();
    Programa *aux3 = aux2->getStart();
    Estudiante *aux4 = aux3->getStart();
    Nota *aux5 = aux4->getStart();
    int i = 0;
    system("clear");

    while (aux)
    {
        cout << "Departamento: " << departamentosName[i] << endl;
        while (aux)
        {
            cout << "Universidad: " << aux->getNombre() << endl;
            while (aux2)
            {

                cout << "Sede: " << aux2->getNombre() << endl;
                while (aux3)
                {
                    cout << "Programa: " << aux3->getNombre() << endl;
                    while (aux4)
                    {
                        cout << "Estudiante: " << aux4->getNombres() << " " << aux4->getApellidos() << endl;
                        while (aux5)
                        {
                            cout << "\t " << aux5->getNota() << endl;
                            aux5 = aux5->getNext();
                        }
                        aux4 = aux4->getNext();
                        if (aux4)
                            aux5 = aux4->getStart();
                    }
                    aux3 = aux3->getNext();
                    if (aux3)
                        aux4 = aux3->getStart();
                }
                aux2 = aux2->getNext();
                if (aux2)
                    aux3 = aux2->getStart();
            }
            aux = aux->getNext();
            if (aux)
                aux2 = aux->getStart();
        }
        i++;
        aux = departamentos[i][0];
    }
}

void Multilist::topCarreraPromedio()
{
    float prom=0.0;
    int cont=0;
    Universidad *aux=this->getHead();
    Sede *aux1=NULL;
    Programa *aux2=NULL;
    Programa *mayor=NULL;
    Programa *progra=NULL;
    Estudiante *aux3=NULL;
    Nota *aux4=NULL;
    vector<Programa *>top;
    while(aux){
        aux1=aux->getStart();
        while(aux1){
            aux2=aux1->getStart();
            while(aux2){
                aux3=aux2->getStart();
                while(aux3){
                    aux4=aux3->getStart();
                    while(aux4->getNext()){
                        cont++;
                        prom=(prom+aux4->getNota());
                        aux4=aux4->getNext();
                    }
                    aux3=aux3->getNext();
                }
                aux2->setPromedio(prom/cont);
                aux2=aux2->getNext();
            }
            aux1=aux1->getNext();
        }
        aux=aux->getNext();
    }
    aux=this->getHead();
    aux1=NULL;
    aux2=NULL;
    while(aux){
        aux1=aux->getStart();
        while(aux1){
            aux2=aux1->getStart();
            mayor=aux2;
            while(aux2){
                if(aux2->getPromedio()>mayor->getPromedio()){
                    mayor=aux2;
                    aux2=aux2->getNext();
                }else{
                    aux2=aux2->getNext();
                }
            }
            top.push_back(new Programa(mayor->getNombre(),mayor->getArea(), mayor->getSemestres(),mayor->getIdPrograma()));
            aux1=aux1->getNext();
        }
        aux=aux->getNext();
    }
    for(int i=0;i<top.size();i++){
        cout<<top[i]<<endl;
    }
}

void Multilist::uniPromedioGlobal()
{
    float promedioo = 0.0;
    float numeroEst = 0.0;
    Universidad *universidad = this->getHead();
    while (universidad)
    {
        cout << universidad->getNombre() << endl;
        Sede *sede = universidad->getStart();
        while (sede)
        {
            Programa *programas = sede->getStart();
            while (programas)
            {
                Estudiante *estudiantes = programas->getStart();
                while (estudiantes)
                {
                    // cout << estudiantes->getNombres() << endl;
                    Nota *nota = estudiantes->getStart();
                    while (nota)
                    {
                        promedioo = promedioo + nota->getNota() / 3;
                        nota = nota->getNext();
                    }
                    numeroEst++;
                    estudiantes = estudiantes->getNext();
                }
                programas = programas->getNext();
            }
            sede = sede->getNext();
        }
        cout << promedioo << endl;
        cout << numeroEst++ << endl;
        cout << promedioo / numeroEst << endl;
        universidad = universidad->getNext();
    }
}

void Multilist::porcenEdadesGlobal()
{
    float rango1 = 0.0;
    float rango2 = 0.0;
    float rango3 = 0.0;
    float mayores = 0.0;
    float total = 0.0;
    Universidad *universidad = this->getHead();
    while (universidad)
    {
        cout << "\n\n\nNombre: " << universidad->getNombre() << endl;
        Sede *sede = universidad->getStart();
        while (sede)
        {
            Programa *programas = sede->getStart();
            while (programas)
            {
                Estudiante *estudiantes = programas->getStart();
                while (estudiantes)
                {
                    Nota *nota = estudiantes->getStart();
                    while (nota)
                    {

                        nota = nota->getNext();
                    }
                    if (estudiantes->getEdad() > 18 && estudiantes->getEdad() <= 28)
                        rango1++;
                    else if (estudiantes->getEdad() > 28 && estudiantes->getEdad() <= 38)
                        rango2++;
                    else if (estudiantes->getEdad() > 38 && estudiantes->getEdad() <= 48)
                        rango3++;
                    else if (estudiantes->getEdad() > 48)
                        mayores++;
                    estudiantes = estudiantes->getNext();
                }
                programas = programas->getNext();
            }
            sede = sede->getNext();
        }
        total = rango1 + rango2 + rango3 + mayores;

        cout << "Total de estudiantes en la universidad: "
             << " " << total << endl;
        cout << "------------Estudiantes entre 18-28 ------------- " << endl;
        cout << "Cantidad: "
             << " " << rango1 << endl;
        cout << "Porcentaje: "
             << " " << rango1 * 100 / total << "%" << endl;
        cout << "------------Estudiantes entre 28-38 ------------- " << endl;
        cout << "Cantidad: "
             << " " << rango2 << endl;
        cout << "Porcentaje: "
             << " " << rango2 * 100 / total << "%" << endl;
        cout << "------------Estudiantes entre 38-48 ------------- " << endl;
        cout << "Cantidad: "
             << " " << rango3 << endl;
        cout << "Porcentaje: "
             << " " << rango3 * 100 / total << "%" << endl;
        cout << "------------Estudiantes mayores a 48 ------------- " << endl;
        cout << "Cantidad: "
             << " " << mayores << endl;
        cout << "Porcentaje: "
             << " " << mayores * 100 / total << "%" << endl;

        universidad = universidad->getNext();
    }
}

void Multilist::demandaCarr()
{
    Universidad *uniX = this->getHead();
    while (uniX)
    {
        cout << "------" << uniX->getNombre() << "------" << endl;
        Sede *sedeX = uniX->getStart();
        while (sedeX)
        {
            Programa *progX = sedeX->getStart();

            while (progX)
            {

                cout << progX->getNombre() << " Demanda de " << progX->cantidadEstudiantes() << endl;
                progX = progX->getNext();
            }
            sedeX = sedeX->getNext();
        }
        uniX = uniX->getNext();
    }
}

void Multilist::porcentGeneroGlobal()
{
    float hombres = 0.0;
    float mujeres = 0.0;
    float numeroTotal = 0.0;
    Universidad *universidad = this->getHead();
    while (universidad)
    {
        cout << "\n\n\nNombre: " << universidad->getNombre() << endl;
        Sede *sede = universidad->getStart();
        while (sede)
        {
            Programa *programas = sede->getStart();
            while (programas)
            {
                Estudiante *estudiantes = programas->getStart();
                while (estudiantes)
                {
                    Nota *nota = estudiantes->getStart();
                    while (nota)
                    {

                        nota = nota->getNext();
                    }
                    numeroTotal++;
                    if (estudiantes->getGenero() == "Masculino")
                        hombres++;
                    else
                        mujeres++;
                    estudiantes = estudiantes->getNext();
                }
                programas = programas->getNext();
            }
            sede = sede->getNext();
        }

        cout << "Cantidad total de estudiantes: " << numeroTotal << endl;
        cout << "Hombres: " << hombres << "  Porcentaje: " << hombres * 100 / numeroTotal << "%" << endl;
        cout << "Mujeres: " << mujeres << "  Porcentaje: " << mujeres * 100 / numeroTotal << "%" << endl;
        universidad = universidad->getNext();
    }
}

void Multilist::demandaArea()
{
}

void Multilist::sedesUniversidad()
{
    int cont = 0;
    Universidad *auxUni = this->getHead();
    while (auxUni)
    {
        Sede *auxSed = auxUni->getStart();
        while (auxSed)
        {
            auxSed = auxSed->getNext();
            cont++;
        }
        cont = 0;
    }
}

Universidad *Multilist::buscarUniversidad(string nombreU)
{
    Universidad *aux = this->getHead();
    while (aux->getNombre() != nombreU && aux != NULL)
    {
        aux = aux->getNext();
    }
    return aux;
}

Sede *Multilist::buscarSede(string nombreU, string nombreSede)
{
    Sede *aux = buscarUniversidad(nombreU)->getStart();
    while (aux->getNombre() != nombreSede && aux != NULL)
    {
        aux = aux->getNext();
    }
    return aux;
}

Programa *Multilist::buscarPrograma(string nombreU, string nombreSede, string nombrePrograma)
{
    Programa *actual = buscarSede(nombreSede, nombreU)->getStart();
    while (actual->getNombre() != nombrePrograma && actual != NULL)
    {
        actual = actual->getNext();
    }
    return actual;
}

Estudiante *Multilist::buscarEstudiante(string nombreU, string nombreSede, string nombrePrograma, int idEstudiante)
{
    Universidad *aux = buscarUniversidad(nombreU);
    Sede *aux2 = buscarSede(nombreU, nombreSede);
    Programa *aux3 = buscarPrograma(nombreU, nombreSede, nombrePrograma);
    Estudiante *aux4 = aux3->getStart();
    while (aux4->getDocumento() != idEstudiante)
        aux4->getNext();
    if (aux4->getDocumento() == idEstudiante)
        return aux4;
    else
        return NULL;
}

void Multilist::mostrarUniversidades()
{
    Universidad *aux = this->getHead();
    while (aux)
    {
        cout << aux->getNombre() << "\t " << aux->getIdUniversidad() << endl;
        aux = aux->getNext();
    }
}