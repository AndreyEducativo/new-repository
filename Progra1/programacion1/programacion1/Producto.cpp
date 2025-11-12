#include "Producto.h"
#include <iostream>
using namespace std; 

// CONSTRUCTORES
Producto::Producto() 
{
}
Producto::Producto(int Id, string Nombre, double Precio) 
{
	id = Id;
	nombre = Nombre;
	precio = Precio;
}

// METODOS
void Producto::agregarProducto()
{
	cout << "Ingrese el ID del producto: ";
	cin >> id;

	cout << "Ingrese el nombre del producto: ";
	cin >> nombre; // nombre = string, sin espacios

	cout << "Ingrese el precio del producto: ";
	cin >> precio;

	cout << "Producto cargado correctamente..." << endl;
}

void Producto::mostrarProducto()
{
	cout << "-------------------------" << endl;
	cout << "ID: " << id << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Precio: " << precio << endl;
	cout << "-------------------------" << endl;
}
