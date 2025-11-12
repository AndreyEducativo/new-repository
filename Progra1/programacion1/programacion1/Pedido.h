#pragma once
#include <string>
using namespace std; 

class Pedido
{
	public:
		// ATRIBUTOS
	int id;
	int idCliente;
	int idProducto;
	int cantidad;

	// CONSTRUCTORES
	Pedido(); 
	Pedido(int Id, int IdCliente, int IdProducto, int Cantidad); 

	// METODOS 
	void agregarPedido();
	void mostrarPedido();
};

