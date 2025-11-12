#pragma once
#include <string> 
using namespace std; 

class Producto
{
public:
	// ATRUBUTOS
	int id;
	string nombre;
	double precio; 

	//CONSTRUCTORES
	Producto();
	Producto(int Id, string Nombre, double Precio);

protected: 
	// METODOS
	void agregarProducto();
	void mostrarProducto();

};

