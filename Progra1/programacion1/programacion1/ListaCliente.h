#pragma once
#include "NodoCliente.h"
#include <string>

class ListaCliente {
public:
    NodoCliente* head;

    ListaCliente();

    void Insertar(Cliente c);
    void Mostrar();
    NodoCliente* Buscar(int id);
    void Eliminar(int id);
    void GuardarEnArchivo();
    void LeerArchivo();
};
