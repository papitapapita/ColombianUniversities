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
    Universidad *buscarUni(string nombreU); //
    Sede *buscarSede(string nombreU, string nombreSede);
    Programa *buscarPrograma(string nombreU, string nombreSede, string nombrePrograma);
    Estudiante *buscarEstudiante(string nombreU, string nombreSede, string nombrePrograma, int idEstudiante);
    void insertarUniversidad(Universidad *);                                                                            // Jonathan
    void insertarSede(int universidad, Sede *sede);                                                                     // Jonathan
    void insertarPrograma(int universidadId, int sedeId, Programa *programa);                                           // Miguel
    void insertarEstudiante(int universidadId, int sedeId, int programaId, Estudiante *estudianteId);                   // Santiago
    void insertarNota(int universidadId, int sedeId, int programaId, int estudianteId, Nota *nota);                     // Jhon
    void eliminarUniversidad(int universidadId);                                                                        // Jonathan
    void eliminarSede(int universidadId, int sedeId, int programaId);                                                   // Jonathan
    void eliminarPrograma(int universidadId, int sedeId, int programaId);                                               // Miguel
    void eliminarEstudiante(int universidadId, int sedeId, int programaId, int estudianteId);                           // Santiago
    void eliminarNota(int universidadId, int sedeId, int programaId, int estudianteId, int nota);                       // Jhon
    void reportePersonalizado(string departamento, string universidad, string sede, string programa, int idEstudiante); // Jonathan
    void reportePersonalizado(string departamento, string universidad, string sede, string programa);                   // Miguel
    void reportePersonalizado(string departamento, string universidad, string sede);                                    // Santiago
    void reportePersonalizado(string departamento, string universidad);                                                 // Jhon
    void reportePersonalizado(string departamento);                                                                     // Santiago
    void reportePersonalizado();                                                                                        // Miguel
    void topCarreraPromedio();                                                                                          // Santiago        top carreras por promedio
    void uniPromedio();                                                                                                 // Jhon        Universidad con mejor promedio top
    void porcenEdades();                                                                                                // Jhon        Porcentaje de estudiantes por edades
    void demandaCarr();                                                                                                 // Miguel   Carreras mas demandas
    void porcentGenero();                                                                                               // Santiago        Porcentaje de estudiantes por genero
    void demandaArea();                                                                                                 // Jhon        Area con mas demanda
    void sedesUniversidad();                                                                                            // Miguel        Universidades con mas sedes
};

#endif