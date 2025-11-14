#pragma once
#include "Pedido.h"

class NodoPedido {
public:
    Pedido dato;
    NodoPedido* siguiente;
    NodoPedido* anterior;
    NodoPedido(Pedido p);
};
