#pragma once

class Pedido
{
public:
    //ATRIBUTOS
    int id;
    int idCliente;
    int idProducto;
    int cantidad;

    //CONSTRUCTOR
    Pedido();

    //METODOS
    void agregarPedido();
    void mostrarPedido();
    int getID();
};
