#include "ListaDoble.h"
#include <iostream>
using namespace std;


ListaDoble::ListaDoble() : head(nullptr)
{
}


void ListaDoble::Insertar(int valor) {
	NodoDoble* nuevo = new NodoDoble(valor);
	if (head != nullptr)//LISTA CONTIENE ELEMENTOS
	{
		head->anterior = nuevo;
		nuevo->siguiente = head;
	}

	head = nuevo;

}

#pragma region Metodo Mostrar
void ListaDoble::Mostrar() {
	NodoDoble* actual = head;
	while (actual != nullptr)
	{
		cout << actual->dato << " ";
		cout << "Direc actual: " << actual << " ";
		cout << "Direc anterior: " << actual->anterior << " ";
		cout << "Direc siguiente: " << actual->siguiente << " ";
		cout << endl;
		actual = actual->siguiente;
	}


}

void ListaDoble::Buscar(int valor)
{
	NodoDoble* actual = head;
	int posicion = 1; // contador para saber en qué posición estamos

	while (actual != nullptr)
	{
		if (actual->dato == valor)
		{
			cout << "El valor " << valor << " fue encontrado en la posicion " << posicion << "." << endl;
		}
		actual = actual->siguiente;
		posicion++; // aumenta la posición al avanzar
		break;
	}

	cout << "El valor " << valor << " no fue encontrado en la lista." << endl;

}

void ListaDoble::Eliminar(int valor)
{
	NodoDoble* actual = head;
	while (actual != nullptr)
	{
		if (actual->dato == valor)
		{
			if (actual->anterior != nullptr) // NO ES EL PRIMERO
			{
				actual->anterior->siguiente = actual->siguiente;
			}
			else // ES EL PRIMERO
			{
				head = actual->siguiente;
			}
			if (actual->siguiente != nullptr) // NO ES EL ULTIMO
			{
				actual->siguiente->anterior = actual->anterior;
			}
			delete actual;
			return;
		}
		actual = actual->siguiente;
	}
}
#pragma endregion