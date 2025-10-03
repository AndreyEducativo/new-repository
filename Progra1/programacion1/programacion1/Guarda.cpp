#include "Guarda.h"

Guarda::Guarda(string nombre, string cedula, int edad, bool tieneArma, string horario) :
	Persona(nombre, cedula, edad), //Clase Padre
	TieneArma(tieneArma), Horario(horario) // Atributos propios de la clase
{

}