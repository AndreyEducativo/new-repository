#pragma once
#include "Persona.h"

using namespace std;
#include <iostream>
class Guarda : public Persona
{
protected:
	bool TieneArma;
	string Horario;

public:
	Guarda(string nombre, string cedula, int edad, bool tieneArma, string horario);
	Guarda(); // Constructor por defecto



};

