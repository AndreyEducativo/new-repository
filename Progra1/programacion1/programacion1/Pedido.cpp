#include "Pedido.h"
#include <iostream>
using namespace std;

// CONSTRUCTORES
Pedido::Pedido() 
{
}
Pedido::Pedido(int Id, int IdCliente, int IdProducto, int Cantidad)
{
	id = Id;
	idCliente = IdCliente;
	idProducto = IdProducto;
	cantidad = Cantidad;
}

// METODOS
void Pedido::agregarPedido()
{
	cout << "Ingrese el ID del pedido: ";
	cin >> id;
	cout << "Ingrese el ID del cliente: ";
	cin >> idCliente;
	cout << "Ingrese el ID del producto: ";
	cin >> idProducto;
	cout << "Ingrese la cantidad: ";
	cin >> cantidad;

	cout << "Pedido cargado correctamente..." << endl;
}

void Pedido::mostrarPedido() 
{
	cout << "-------------------------" << endl;
	cout << "ID del pedido: " << id << endl;
	cout << "ID del cliente: " << idCliente << endl;
	cout << "ID del producto: " << idProducto << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "-------------------------" << endl;
}

