#pragma once

using namespace std;
#include <iostream>
class Persona
{
protected:
	string Nombre;
	string Cedula;
	int Edad;

public:
	Persona(string nombre, string cedula, int edad);
	void Mostrar();
	Persona();

};

