#include "ListaProducto.h"
#include <iostream>
#include <fstream> 
using namespace std;

ListaProducto::ListaProducto() : head(nullptr) 
{
}

void ListaProducto::Insertar(Producto p) {
    NodoProducto* nuevo = new NodoProducto(p);
    if (head != nullptr) {
        head->anterior = nuevo;
        nuevo->siguiente = head;
    }
    head = nuevo;
}

void ListaProducto::Mostrar() {
    NodoProducto* actual = head;
    while (actual != nullptr) {
        actual->dato.mostrarProducto();
        cout << "<---> ";
        actual = actual->siguiente;
    }
}

NodoProducto* ListaProducto::Buscar(int id) {
    NodoProducto* actual = head;
    while (actual != nullptr) {
        if (actual->dato.getID() == id) return actual;
        actual = actual->siguiente;
    }
    return nullptr;
}

void ListaProducto::Eliminar(int id) {
    NodoProducto* actual = head;
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

void ListaProducto::GuardarEnArchivo() {
    ofstream archivo("productos.txt");
    if (!archivo) {
        cout << "No se pudo crear el archivo de productos" << endl;
        return;
    }

    archivo << "Lista de Productos" << endl;

    NodoProducto* actual = head;
    while (actual != nullptr) {
        archivo << "ID: " << actual->dato.id
            << " | Nombre: " << actual->dato.nombre
            << " | Precio: " << actual->dato.precio
            << endl;
        actual = actual->siguiente;
    }

    archivo.close();
    cout << "Productos guardados en productos.txt" << endl;
}

void ListaProducto::LeerArchivo() {
    ifstream archivo("productos.txt");
    if (!archivo) {
        cout << "No se pudo abrir el archivo de productos" << endl;
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}
