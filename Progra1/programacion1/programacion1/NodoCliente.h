#pragma once
#include "Cliente.h"

class NodoCliente {
public:
    Cliente dato;
    NodoCliente* siguiente;
    NodoCliente* anterior;

    NodoCliente(Cliente c);
};
