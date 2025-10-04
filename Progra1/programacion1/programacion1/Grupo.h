#pragma once
#include <iostream>
#include "Profesor.h"
#include "Estudiante.h"
using namespace std;

class Grupo {
public:
    string Nombre;
    Profesor Profe;
    Estudiante Estudiantes[3];

    Grupo(string Nombre, Profesor profe, Estudiante estudiantes[3]);

    void Mostrar();
    void RegistrarEstudiantes();
};


