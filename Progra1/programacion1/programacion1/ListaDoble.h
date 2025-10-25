#pragma once
#include "NodoDoble.h"
class ListaDoble
{
public:
	NodoDoble* head;
	ListaDoble();

	//void Insertar(int valor);
	void InsertarEnPosicion(int valor, int valorNodo);
	void Mostrar();
	void Eliminar(int valor);
	void Promedio(); 
	void GuardarEnArchivo();

};