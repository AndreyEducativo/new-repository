#pragma once
#include <string>
using namespace std;

class Cliente
{
	public:
		// ATRIBUTOS
	int id;
	string nombre;
	string email;

	// CONSTRUCTORES
	Cliente(); 
	Cliente(int Id, string Nombre, string Email); 

	// METODOS
	void agregarCliente();
	void mostrarCliente();

};

