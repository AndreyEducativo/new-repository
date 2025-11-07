#pragma once
#include "NodoDoble.h"
class ListaDoble
{
public:
	NodoDoble* head;
	ListaDoble();

	void Insertar(int valor);
	void Mostrar();
	void MenorValor();
	void MayorValor();
	void ParesEImpares();

};