#include "ListaPedido.h"
#include <iostream>
#include <fstream>
using namespace std;

ListaPedido::ListaPedido() : head(nullptr) 
{
}

void ListaPedido::Insertar(Pedido p) {
    NodoPedido* nuevo = new NodoPedido(p);
    if (head != nullptr) {
        head->anterior = nuevo;
        nuevo->siguiente = head;
    }
    head = nuevo;
}

void ListaPedido::Mostrar() {
    NodoPedido* actual = head;
    while (actual != nullptr) {
        actual->dato.mostrarPedido();
        cout << "<---> ";
        actual = actual->siguiente;
    }
}

NodoPedido* ListaPedido::Buscar(int id) {
    NodoPedido* actual = head;
    while (actual != nullptr) {
        if (actual->dato.getID() == id) return actual;
        actual = actual->siguiente;
    }
    return nullptr;
}

void ListaPedido::Eliminar(int id) {
    NodoPedido* actual = head;
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

void ListaPedido::GuardarEnArchivo() {
    ofstream archivo("pedidos.txt");
    if (!archivo) {
        cout << "No se pudo crear el archivo de pedidos" << endl;
        return;
    }

    archivo << "Lista de Pedidos" << endl;

    NodoPedido* actual = head;
    while (actual != nullptr) {
        archivo << "ID Pedido: " << actual->dato.id
            << " | ID Cliente: " << actual->dato.idCliente
            << " | ID Producto: " << actual->dato.idProducto
            << " | Cantidad: " << actual->dato.cantidad
            << endl;
        actual = actual->siguiente;
    }

    archivo.close();
    cout << "Pedidos guardados en pedidos.txt" << endl;
}

void ListaPedido::LeerArchivo() {
    ifstream archivo("pedidos.txt");
    if (!archivo) {
        cout << "No se pudo abrir el archivo de pedidos" << endl;
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}
