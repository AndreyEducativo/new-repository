#include "ListaCliente.h"
#include <iostream>
#include <fstream>
using namespace std;

ListaCliente::ListaCliente() : head(nullptr) 
{
}

void ListaCliente::Insertar(Cliente c) {
    NodoCliente* nuevo = new NodoCliente(c);
    if (head != nullptr) {
        head->anterior = nuevo;
        nuevo->siguiente = head;
    }
    head = nuevo;
}

void ListaCliente::Mostrar() {
    NodoCliente* actual = head;
    while (actual != nullptr) {
        actual->dato.mostrarCliente();
        cout << "<---> ";
        actual = actual->siguiente;
    }
}

NodoCliente* ListaCliente::Buscar(int id) {
    NodoCliente* actual = head;
    while (actual != nullptr) {
        if (actual->dato.getID() == id) return actual;
        actual = actual->siguiente;
    }
    return nullptr;
}

void ListaCliente::Eliminar(int id) {
    NodoCliente* actual = head;
    while (actual != nullptr) {
        if (actual->dato.getID() == id) {
            if (actual->anterior != nullptr) {
                actual->anterior->siguiente = actual->siguiente;
                if (actual->siguiente != nullptr)
                    actual->siguiente->anterior = actual->anterior;
            }
            else {
                head = actual->siguiente;
                if (head != nullptr) head->anterior = nullptr;
            }
            delete actual;
            return;
        }
        actual = actual->siguiente;
    }
}

void ListaCliente::GuardarEnArchivo() {
    ofstream archivo("clientes.txt");
    if (!archivo) {
        cout << "No se pudo crear el archivo de clientes" << endl;
        return;
    }

    archivo << "Lista de Clientes" << endl;

    NodoCliente* actual = head;
    while (actual != nullptr) {
        archivo << "ID: " << actual->dato.id
            << " | Nombre: " << actual->dato.nombre
            << " | Email: " << actual->dato.email
            << endl;
        actual = actual->siguiente;
    }

    archivo.close();
    cout << "Clientes guardados en clientes.txt" << endl;
}

void ListaCliente::LeerArchivo() {
    ifstream archivo("clientes.txt");
    if (!archivo) {
        cout << "No se pudo abrir el archivo de clientes" << endl;
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}
