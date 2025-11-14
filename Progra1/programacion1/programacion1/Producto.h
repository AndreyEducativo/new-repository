#pragma once
#include <string>
using namespace std;

class Producto
{
public:
    //ATRIBUTOS
    int id;
    string nombre;
    double precio;

    //CONSTRUCTOR
    Producto();

    //METODOS
    void agregarProducto();
    void mostrarProducto();
    int getID();
};
