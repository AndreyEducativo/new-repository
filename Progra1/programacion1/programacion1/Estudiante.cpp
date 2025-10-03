#include "Estudiante.h"
#include <iostream>
using namespace std;

Estudiante::Estudiante(string nombre, string cedula, int edad, Carnet carnet, string carrera) :
    Persona(nombre, cedula, edad), pCarnet(carnet), Carrera(carrera) {
}

Estudiante::Estudiante() {}

void Estudiante::Mostrar() {
    cout << "Nombre del Estudiante: " << Nombre << endl;
    cout << "Cédula: " << Cedula << endl;
    cout << "Edad: " << Edad << endl;
    cout << "Carnet: " << pCarnet.Numero << endl;
    cout << "Carrera: " << Carrera << endl;
    cout << "-----------------------------" << endl;
}

Estudiante Estudiante::GetEstudiante(string nombre, string cedula, int edad, Carnet carnet, string carrera) {
    Estudiante est(nombre, cedula, edad, carnet, carrera);
    return est;
}

Estudiante Estudiante::SolicitarDatos() {
    string nombre, cedula, carnet, carrera;
    int edad;

    cout << "Digite el Nombre del Estudiante: ";
    cin >> nombre;
    cout << "Digite la Cédula del Estudiante: ";
    cin >> cedula;
    cout << "Digite la Edad del Estudiante: ";
    cin >> edad;
    cout << "Digite el Carnet del Estudiante: ";
    cin >> carnet;
    cout << "Digite la Carrera del Estudiante: ";
    cin >> carrera;

    Carnet objCarnet;
    objCarnet.Numero = carnet;

    Estudiante estudiante(nombre, cedula, edad, objCarnet, carrera);
    return estudiante;
}
