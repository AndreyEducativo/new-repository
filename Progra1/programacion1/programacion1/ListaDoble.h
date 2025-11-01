#pragma once
#include "NodoDoble.h"
class ListaDoble
{
public:
	NodoDoble* head;
	ListaDoble();

	//void Insertar(int valor);
	void Insertar(int valor);
	//void InsertarEnPosicion(int valorAnterior, int valorSiguiente, int nuevoValor);
	void Mostrar();
	//void Eliminar(int valor);
	void Promedio(); 
	//void GuardarEnArchivo();
	void BuscarMultiplos(int numero);

};