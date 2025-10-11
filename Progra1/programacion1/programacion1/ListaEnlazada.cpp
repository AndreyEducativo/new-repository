#include "ListaEnlazada.h"
#include <iostream>
#include "ListaDoble.h"
using namespace std;

ListaEnlazada::ListaEnlazada()
{
	cabeza = nullptr;
}



void ListaEnlazada::Insertar(int valor)
{
	Nodo* nuevo = new Nodo(valor);
	nuevo->siguiente = cabeza;
	cabeza = nuevo;

}

void ListaEnlazada::Mostrar() {

	Nodo* actual = cabeza;
	while (actual != nullptr)
	{
		cout << actual->dato << endl;
		actual = actual->siguiente;
	}
	cout << "FINAL DE LA LISTA" << endl;
}

void ListaEnlazada::Buscar(int valor)
{
	int posicion = 1;
	Nodo* actual = cabeza;
	while (actual != nullptr)
	{
		if (actual->dato == valor)
		{
			cout << "EL dato se encuentra en el nodo:" << posicion << endl;
		}
		//cout << actual->dato << endl;
		actual = actual->siguiente;
		posicion++;
	}
	cout << "FINAL DE LA LISTA" << endl;
}
