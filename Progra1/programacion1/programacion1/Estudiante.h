#pragma once
#include "Persona.h"
#include "Carnet.h"

class Estudiante : public Persona {
public:
    Carnet pCarnet;
    string Carrera;

    Estudiante(string nombre, string cedula, int edad, Carnet carnet, string carrera);
    Estudiante();
    void Mostrar();
    Estudiante GetEstudiante(string nombre, string cedula, int edad, Carnet carnet, string carrera);
    Estudiante SolicitarDatos();
};


