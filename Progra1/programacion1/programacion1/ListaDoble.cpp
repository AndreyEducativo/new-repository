#include "ListaDoble.h"
#include <iostream>
#include <fstream>
using namespace std;


ListaDoble::ListaDoble() : head(nullptr)
{
}

/*
void ListaDoble::Insertar(int valor) { // Insertar al inicio de la lista
	NodoDoble* nuevo = new NodoDoble(valor);
	if (head != nullptr)
	{
		head->anterior = nuevo;
		nuevo->siguiente = head;
	}

	head = nuevo;

}
*/
void ListaDoble::InsertarEnPosicion(int valor, int valorNodo) // Insertar en una posición específica
{
	NodoDoble* nuevo = new NodoDoble(valor);
	// incertar al inicio 
	if (valorNodo <= 0 || head == nullptr)
	{
		if (head != nullptr)
		{
			head->anterior = nuevo;
			nuevo->siguiente = head;
			return;
		}
	}
	NodoDoble* actual = head;

	// recorrer la lista hasta la posicion deseada
	while (actual->siguiente != nullptr)
	{

	}

#pragma region Metodo Mostrar
void ListaDoble::Mostrar() { // Mostrar la lista desde el head
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

void ListaDoble::Eliminar(int valor) // Eliminar un nodo por valor
{
	NodoDoble* actual = head;
	while (actual != nullptr)
	{
		if (actual->dato == valor)
		{
			if (actual->anterior != nullptr) 
			{
				actual->anterior->siguiente = actual->siguiente;
			}
			else 
			{
				head = actual->siguiente;
			}
			if (actual->siguiente != nullptr) 
			{
				actual->siguiente->anterior = actual->anterior;
			}
			delete actual;
			return;
		}
		actual = actual->siguiente;
	}
}

void ListaDoble::Promedio() // Nuevo método para calcular el promedio
{
	NodoDoble* actual = head;
	int suma = 0;
	int contador = 0;
	while (actual != nullptr)
	{
		suma += actual->dato;
		contador++;
		actual = actual->siguiente;
	}
	if (contador > 0)
	{
		double promedio = suma / contador;
		cout << "El promedio de los valores en la lista es: " << promedio << endl;
	}
	else
	{
		cout << "La lista está vacía. No se puede calcular el promedio." << endl;
	}
}

void ListaDoble::GuardarEnArchivo()
{
	ofstream archivo("datos.txt");
	if (!archivo)
	{
		cout << "No se pudo crear el archivo" << endl;
	}

	archivo << "Lista Doble" << endl;
	NodoDoble* actual = head;
	while (actual != nullptr)
	{
		archivo << actual->dato << "<---> ";
		/*cout << "Direc actual" << actual << " ";
		cout << "Direc anterior" << actual->anterior << " ";
		cout << "Direc siguiente" << actual->siguiente << " ";
		cout << endl;*/
		actual = actual->siguiente;
	}
	archivo.close();

}
#pragma endregion