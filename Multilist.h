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
    void insertarUniversidad();                                                                                          // Jonathan
    void insertarSede();                                                                                                 // Jonathan
    void insertarPrograma();                                                                                             // Miguel
    void insertarEstudiante();                                                                                           // Santiago
    void insertarNota();                                                                                                 // Jhon
    void eliminarUniversidad();                                                                                          // Jonathan
    void eliminarSede();                                                                                                 // Jonathan
    void eliminarPrograma();                                                                                             // Miguel
    void eliminarEstudiante();                                                                                           // Santiago
    void eliminarNota();                                                                                                 // Jhon
    void reportePersonalizado(string departamento, string universidad, string sede, string programa, string estudiante); // Jonathan
    void reportePersonalizado(string departamento, string universidad, string sede, string programa);                    // Miguel
    void reportePersonalizado(string departamento, string universidad, string sede);                                     // Santiago
    void reportePersonalizado(string departamento, string universidad);                                                  // Jhon
    void reportePersonalizado(string departamento);                                                                      // Santiago
    void reportePersonalizado();                                                                                         // Miguel
    void topCarreraPromedio();                                                                                           // Santiago        top carreras por promedio
    void uniPromedio();                                                                                                  // Jhon        Universidad con mejor promedio top
    void porcenEdades();                                                                                                 // Jhon        Porcentaje de estudiantes por edades
    void demandaCarr();                                                                                                  // Miguel   Carreras mas demandas
    void porcentGenero();                                                                                                // Santiago        Porcentaje de estudiantes por genero
    void demandaArea();                                                                                                  // Jhon        Area con mas demanda
    void sedesUniversidad();                                                                                             // Miguel        Universidades con mas sedes
};

#endif