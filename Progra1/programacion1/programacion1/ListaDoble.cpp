#include "ListaDoble.h"
#include <iostream>
#include <fstream>
using namespace std;


ListaDoble::ListaDoble() : head(nullptr)
{
}


void ListaDoble::Insertar(int valor) { // metodo para insertar al inicio de la lista
	NodoDoble* nuevo = new NodoDoble(valor);
	if (head != nullptr)
	{
		head->anterior = nuevo;
		nuevo->siguiente = head;
	}

	head = nuevo;

}



#pragma region Metodo Mostrar

void ListaDoble::Mostrar() { // metodo para mostrar la lista
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

void ListaDoble::MenorValor() // metodo para buscar el menor valor de la lista 
{
	if (head == nullptr) {
		cout << "La lista está vacía." << endl;
		return;
	}
	NodoDoble* actual = head;
	int posicion = 0;
	bool encontrado = false;

}

void ListaDoble::MayorValor() // metodo para buscar el mayor valor
{
	if (head == nullptr) {
		cout << "La lista está vacía." << endl;
		return;
	}
	NodoDoble* actual = head;
	int posicion = 0;
	bool encontrado = false;

	while (actual != nullptr)
	{
		if (actual->dato > 0)
		{
			cout << "El mayor valor de la lista se encuentra en la posicion: " << posicion << " con el valor: " << actual->dato << endl;
			encontrado = true;
			break;
		}
		actual = actual->siguiente;
		posicion++;
	}
}

void ListaDoble::ParesEImpares() // metodo para buscar numeros pares e impares 
{
	if (head == nullptr) {
		cout << "La lista está vacía." << endl;
		return;
	}
	NodoDoble* actual = head;
	int posicion = 0;
	cout << "Numeros pares en la lista: " << endl;
	while (actual != nullptr)
	{
		if (actual->dato % 2 == 0)
		{
			cout << "Posicion: " << posicion << ". Valor: " << actual->dato << endl;
		}
		actual = actual->siguiente;
		posicion++;
	}

	actual = head;
	posicion = 0;
	cout << "Numeros impares en la lista: " << endl;
	while (actual != nullptr)
	{
		if (actual->dato % 2 != 0)
		{
			cout << "Posicion: " << posicion << ". Valor: " << actual->dato << endl;
		}
		actual = actual->siguiente;
		posicion++;
	}
}
#pragma endregion