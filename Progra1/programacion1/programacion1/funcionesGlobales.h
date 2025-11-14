#pragma once
#include "Cliente.h"
#include "Producto.h"
#include "Pedido.h"
#include "Pago.h"

// MOSTRAR
void mostrarCliente(void* dato);
void mostrarProducto(void* dato);
void mostrarPedido(void* dato);
void mostrarPago(void* dato);

// OBTENER ID
int getIDCliente(void* dato);
int getIDProducto(void* dato);
int getIDPedido(void* dato);
int getIDPago(void* dato);
