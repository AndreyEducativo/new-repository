#pragma once
#include "Producto.h"

class NodoProducto {
public:
    Producto dato;
    NodoProducto* siguiente;
    NodoProducto* anterior;
    NodoProducto(Producto p);
};
