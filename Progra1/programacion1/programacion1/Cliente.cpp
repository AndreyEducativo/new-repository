#include "Cliente.h"
#include <iostream> 
using namespace std; 

// CONSTRUCTORES
Cliente::Cliente() 
{
}
Cliente::Cliente(int Id, string Nombre, string Email) 
{
	id = Id;
	nombre = Nombre;
	email = Email;
}

// METODOS
void Cliente::agregarCliente()
{
	cout << "Ingrese el ID del cliente: ";
	cin >> id;
	cout << "Ingrese el nombre del cliente: ";
	cin >> nombre; // nombre = string, sin espacios
	cout << "Ingrese el email del cliente: ";	
	cin >> email; // email = string, sin espacios

	cout << "Cliente cargado correctamente..." << endl;

}

void Cliente::mostrarCliente() 
{
	cout << "-------------------------" << endl;
	cout << "ID: " << id << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Email: " << email << endl;
	cout << "-------------------------" << endl;
}
