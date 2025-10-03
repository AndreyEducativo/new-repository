#include "Persona.h"
using namespace std;
#include <iostream>





Persona::Persona(string nombre, string cedula, int edad) : Nombre(nombre), Cedula(cedula), Edad(edad)
{
}

void Persona::Mostrar()
{
	cout << "Nombre:" << Nombre;
}

Persona::Persona()
{
}