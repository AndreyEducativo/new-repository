#include "ListaEnlazada.h"
#include <iostream>
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

	cout << endl << "INICIO DE LA LISTA" << endl;
	while (actual != nullptr)
	{
		cout << actual->dato << endl;
		actual = actual->siguiente;
	}
	cout << "FINAL DE LA LISTA" << endl << endl;

	cout << "POSICION DE LA LISTA: " << endl; 
	actual = cabeza;
	int contador = 0;
	while (actual != nullptr)
	{
		cout << "Posicion " << contador << endl << endl;
		actual = actual->siguiente;
		contador++;
	}
}

void ListaEnlazada::Buscar()
{
	int valor; 

	Nodo* actual = cabeza;
	cout << "Cual valor desea busca?" << endl;
	cin >> valor;
	int contador = 0;
	while (actual != nullptr)
	{
		if (actual->dato == valor)
		{
			cout << "El valor " << valor << " fue encontrado en la lista en la posicion " << contador << endl;
			return;
		}
		actual = actual->siguiente;
	}
	
}

