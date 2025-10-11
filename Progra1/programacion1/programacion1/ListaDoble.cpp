#include "ListaDoble.h"
#include <iostream>
using namespace std;


ListaDoble::ListaDoble() : head(nullptr)
{
}


void ListaDoble::Insertar(int valor) {

	if (Existe(valor)) {
		cout << "El valor" << valor << "ya existe en la lista." << endl; 
		return; 
	}

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
		cout << "Direc actual" << actual << " ";
		cout << "Direc anterior" << actual->anterior << " ";
		cout << "Direc siguiente" << actual->siguiente << " ";
		cout << endl;
		actual = actual->siguiente;
	}


}
void ListaDoble::Buscar(int valor)
{
	NodoDoble* actual = head;
	int posicion = 1;
	while (actual != nullptr) {
		if (actual->dato == valor) {
			cout << "EL dato se encuentra en el nodo:" << posicion << endl;
		}
		actual = actual->siguiente;
		posicion++;
	}
	cout << "FINAL DE LA LISTA" << endl;
}
bool ListaDoble::Existe(int valor) {
	NodoDoble* actual = head;
	while (actual != nullptr) {
		if (actual->dato == valor) {
			return true; 
		}
		actual = actual->siguiente; 
	}
	return false;
}
#pragma endregion

