#include "Grupo.h"
#include <iostream>
using namespace std;

Grupo::Grupo(string Nombre, Profesor profe, Estudiante estudiantes[3]) {
    this->Nombre = Nombre;
    this->Profe = profe;
    for (int i = 0; i < 3; i++) {
        this->Estudiantes[i] = estudiantes[i];
    }
}

void Grupo::Mostrar() {
    cout << "\nNombre del Grupo: " << Nombre << endl;
    cout << "--- Lista de Estudiantes ---" << endl;
    for (int i = 0; i < 3; i++) {
        if (Estudiantes[i].pCarnet.Numero != "") { // usamos carnet para validar
            Estudiantes[i].Mostrar();
        }
    }
}

void Grupo::RegistrarEstudiantes() {
    int indice = 0;
    string Respuesta = "Si";
    bool Continuar = true;

    while (Continuar && indice < 3) {
        Estudiantes[indice] = Estudiantes[indice].SolicitarDatos();
        indice++;

        Mostrar();

        cout << "¿Desea continuar? Si/No: ";
        cin >> Respuesta;

        if (Respuesta == "No" || Respuesta == "no") {
            Continuar = false;
        }
    }
}
