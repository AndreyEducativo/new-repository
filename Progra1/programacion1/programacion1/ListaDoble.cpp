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

void ListaDoble::MenorValor() // método para buscar el menor valor de la lista
{
	if (head == nullptr)
	{
		cout << "La lista está vacía." << endl;
		return;
	}

	NodoDoble* actual = head;
	int posicion = 0;
	int posicionMenor = 0;
	int menor = actual->dato;

	while (actual != nullptr)
	{
		if (actual->dato < menor)
		{
			menor = actual->dato;
			posicionMenor = posicion;
		}
		actual = actual->siguiente;
		posicion++;
	}

	cout << "El menor valor se encuentra en la posicion: " << posicionMenor << ", con el valor: " << menor << endl;
}


void ListaDoble::MayorValor() // método para buscar el mayor valor de la lista
{
	if (head == nullptr)
	{
		cout << "La lista está vacía." << endl;
		return;
	}

	NodoDoble* actual = head;
	int posicion = 0;
	int posicionMayor = 0;
	int mayor = actual->dato;

	while (actual != nullptr)
	{
		if (actual->dato > mayor)
		{
			mayor = actual->dato;
			posicionMayor = posicion;
		}
		actual = actual->siguiente;
		posicion++;
	}

	cout << "El mayor valor se encuentra en la posicion: " << posicionMayor << ", con el valor: " << mayor << endl;
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
	cout << "\nNumeros impares en la lista: " << endl;
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