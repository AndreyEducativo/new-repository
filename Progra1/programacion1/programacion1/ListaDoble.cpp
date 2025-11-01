#include "ListaDoble.h"
#include <iostream>
#include <fstream>
using namespace std;


ListaDoble::ListaDoble() : head(nullptr)
{
}


void ListaDoble::Insertar(int valor) { // Insertar al inicio de la lista
	NodoDoble* nuevo = new NodoDoble(valor);
	if (head != nullptr)
	{
		head->anterior = nuevo;
		nuevo->siguiente = head;
	}

	head = nuevo;

}



#pragma region Metodo Mostrar

/*
void ListaDoble::InsertarEnPosicion(int valorAnterior, int valorSiguiente, int nuevoValor)
{
	NodoDoble* actual = head;

	while (actual != nullptr) {
		if (actual->dato == valorAnterior) {
			NodoDoble* siguiente = actual->siguiente;

			// Avanzar hasta encontrar el valor siguiente
			while (siguiente != nullptr && siguiente->dato != valorSiguiente) {
				siguiente = siguiente->siguiente;
			}

			if (siguiente != nullptr) {
				NodoDoble* nuevo = new NodoDoble(nuevoValor);
				//unir los nodos 
				nuevo->siguiente = siguiente;
				nuevo->anterior = siguiente->anterior;
				siguiente->anterior->siguiente = nuevo;
				siguiente->anterior = nuevo;

				cout << "Nodo insertado entre " << valorAnterior << " y " << valorSiguiente << endl;
				return;
			}
		}
		actual = actual->siguiente;
	}

	cout << "No se pudieron encontrar los valores indicados en la lista." << endl;
}
*/ 

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
/*
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
*/

void ListaDoble::Promedio() // Nuevo método para calcular el promedio
{
	if (head == nullptr) {
		cout << "La lista está vacía." << endl;
		return;
	}

	NodoDoble* actual = head;
	int suma = 0;
	int contador = 0;

	while (actual != nullptr) {
		suma += actual->dato;
		contador++;
		actual = actual->siguiente;
	}

	double promedio = static_cast<double>(suma) / contador;
	cout << "Promedio de los valores: " << promedio << endl;
}

/*
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
		cout << endl;
		actual = actual->siguiente;
	}
	archivo.close();
}
*/

void ListaDoble::BuscarMultiplos(int numero)
{
	NodoDoble* actual = head;
	int posicion = 0;
	bool encontrado = false;
	while (actual != nullptr)
	{
		if (actual->dato % numero == 0)
		{
			cout << "El valor " << actual->dato << " en la posicion " << posicion << " es multiplo de " << numero << endl;
			encontrado = true;
		}
		actual = actual->siguiente;
		posicion++;
	}
	if (!encontrado)
	{
		cout << "No se encontraron multiplos de " << numero << " en la lista." << endl;
	}
}
#pragma endregion