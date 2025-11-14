#pragma once

class Pedido
{
public:
    int id;
    int idCliente;
    int idProducto;
    int cantidad;

    Pedido();
    void agregarPedido();
    void mostrarPedido();
    int getID();
};
