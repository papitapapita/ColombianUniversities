#ifndef MULITLIST_H
#define MULITLIST_H
#include "universidad.cpp"

class Multilist
{
    Universidad *head;

public:
    Universidad *getHead();
    Multilist();
    ~Multilist(); // Jhon
    void setHead(Universidad *head);
    Universidad *buscarUniversidad(string nombreU); //
    Sede *buscarSede(string nombreU, string nombreSede);
    Programa *buscarPrograma(string nombreU, string nombreSede, string nombrePrograma);
    Estudiante *buscarEstudiante(string nombreU, string nombreSede, string nombrePrograma, int idEstudiante);
    void mostrarUniversidades();
    void insertarUniversidad(Universidad *);                                                          // Jonathan
    void insertarUniversidadOrder(Universidad *);                                                     // Jonathan
    void insertarSede(int universidad, Sede *sede);                                                   // Jonathan
    void insertarPrograma(int universidadId, int sedeId, Programa *programa);                         // Miguel
    void insertarEstudiante(int universidadId, int sedeId, int programaId, Estudiante *estudianteId); // Santiago
    void insertarNota(int universidadId, int sedeId, int programaId, int estudianteId, Nota *nota);   // Jhon
    void eliminarUniversidad(int universidadId);                                                      // Jonathan
    void eliminarSede(int universidadId, int sedeId, int programaId);                                 // Jonathan
    void eliminarPrograma(int universidadId, int sedeId, int programaId);                             // Miguel
    void eliminarEstudiante(int universidadId, int sedeId, int programaId, int estudianteId);         // Santiago
    void eliminarNota(int universidadId, int sedeId, int programaId, int estudianteId, int nota);     // Jhon
    void reportePersonalizado(string departamento, string universidad, string sede, string programa, Estudiante *estudiante);
    void reportePersonalizado(string departamento, string universidad, string sede, Programa *programa); // Miguel
    void reportePersonalizado(string departamento, string universidad, Sede *sede);                      // Santiago
    void reportePersonalizado(string departamento, Universidad *universidad);                            // Jhon
    void reportePersonalizado(vector<Universidad *> departamentoVector, string departamento);            // Santiago
    void reportePersonalizado(vector<vector<Universidad *>> departamentos, string departamentosName[]);  // Miguel
    void topCarreraPromedio();                                                                           // Santiago        top carreras por promedio
    void uniPromedioGlobal();                                                                            // Jhon        Universidad con mejor promedio top -
    void porcenEdadesGlobal();                                                                           // Jhon        Porcentaje de estudiantes por edades -
    void demandaCarr();                                                                                  // Miguel   Carreras mas demandas -
    void porcentGeneroGlobal();                                                                          // Santiago        Porcentaje de estudiantes por genero -
    void demandaArea();                                                                                  // Jhon        Area con mas demanda
    void sedesUniversidad();                                                                             // Miguel        Universidades con mas sedes -
};

#endif