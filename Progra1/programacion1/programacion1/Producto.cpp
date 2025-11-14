#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto() : id(0), nombre(""), precio(0.0)
{
}

void Producto::agregarProducto()
{
    cout << "Ingrese ID del producto: ";
    cin >> id;

    cout << "Ingrese nombre del producto: ";
    cin >> nombre;

    cout << "Ingrese precio del producto: ";
    cin >> precio;
}

void Producto::mostrarProducto()
{
    cout << "----- PRODUCTO -----\n";
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: " << precio << endl;
}

int Producto::getID()
{
    return id;
}
