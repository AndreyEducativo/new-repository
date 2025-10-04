#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "Guarda.h"
#include "Grupo.h"
using namespace std;

int main() {
    Estudiante estudiantes[3]; // arreglo vacío
    Profesor profe;            // profesor vacío
    Grupo grupo("TI", profe, estudiantes);

    grupo.RegistrarEstudiantes();

    return 0;
}
