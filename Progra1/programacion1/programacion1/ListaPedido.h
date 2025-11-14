#pragma once
#include "NodoPedido.h"
#include <string>

class ListaPedido {
public:
    NodoPedido* head;
    ListaPedido();

    void Insertar(Pedido p);
    void Mostrar();
    NodoPedido* Buscar(int id);
    void Eliminar(int id);
    void GuardarEnArchivo();
    void LeerArchivo();
};
