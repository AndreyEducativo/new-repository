#pragma once
#include <string>
using namespace std;

class Producto
{
public:
    int id;
    string nombre;
    double precio;

    Producto();
    void agregarProducto();
    void mostrarProducto();
    int getID();
};
