#pragma once
#include "Nodo.h"
class ListaEnlazada
{
private:
	Nodo* cabeza;
public:
	ListaEnlazada();
	void Insertar(int valor);
	void Mostrar();
	void Buscar(int valor);

};




