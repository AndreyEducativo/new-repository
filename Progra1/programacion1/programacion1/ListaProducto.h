#pragma once
#include "NodoProducto.h"
#include <string>

class ListaProducto {
public:
    NodoProducto* head;
    ListaProducto();

    void Insertar(Producto p);
    void Mostrar();

    NodoProducto* Buscar(int id);

    void Eliminar(int id);
    void GuardarEnArchivo();
    void LeerArchivo();
};
