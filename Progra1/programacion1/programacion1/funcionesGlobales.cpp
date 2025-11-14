#include "funcionesGlobales.h"

// MOSTRAR
void mostrarCliente(void* dato) 
{ 
	((Cliente*)dato)->mostrarCliente(); 
}

void mostrarProducto(void* dato) 
{ 
	((Producto*)dato)->mostrarProducto(); 
}

void mostrarPedido(void* dato) 
{ 
	((Pedido*)dato)->mostrarPedido(); 
}

void mostrarPago(void* dato) 
{
	((Pago*)dato)->mostrarPago(); 
}

// OBTENER ID
int getIDCliente(void* dato) 
{ 
	return ((Cliente*)dato)->getID(); 
}

int getIDProducto(void* dato) 
{ 
	return ((Producto*)dato)->getID(); 
}

int getIDPedido(void* dato) 
{ 
	return ((Pedido*)dato)->getID(); 
}

int getIDPago(void* dato) 
{ 
	return ((Pago*)dato)->getID(); 
}
