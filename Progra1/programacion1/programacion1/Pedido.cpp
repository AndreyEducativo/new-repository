#include "Pedido.h"
#include <iostream>
using namespace std;

//CONSTRUCTOR 
Pedido::Pedido() : id(0), idCliente(0), idProducto(0), cantidad(0)
{
}

//METODO AGREGAR PEDIDO 
void Pedido::agregarPedido()
{
    cout << "Ingrese ID del pedido: ";
    cin >> id;

    cout << "Ingrese ID del cliente: ";
    cin >> idCliente;

    cout << "Ingrese ID del producto: ";
    cin >> idProducto;

    cout << "Ingrese cantidad: ";
    cin >> cantidad;
}

// METODO MOSTRAR PEDIDO 
void Pedido::mostrarPedido()
{
    cout << "----- PEDIDO -----\n";
    cout << "ID Pedido: " << id << endl;
    cout << "ID Cliente: " << idCliente << endl;
    cout << "ID Producto: " << idProducto << endl;
    cout << "Cantidad: " << cantidad << endl;
}

//METODO GET ID 
int Pedido::getID()
{
    return id;
}
