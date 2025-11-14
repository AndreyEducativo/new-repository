#include "ListaPago.h"
#include <iostream>
#include <fstream>
using namespace std;

ListaPago::ListaPago() : head(nullptr) 
{
}

void ListaPago::Insertar(Pago p) {
    NodoPago* nuevo = new NodoPago(p);
    if (head != nullptr) {
        head->anterior = nuevo;
        nuevo->siguiente = head;
    }
    head = nuevo;
}

void ListaPago::Mostrar() {
    NodoPago* actual = head;
    while (actual != nullptr) {
        actual->dato.mostrarPago();
        cout << "<---> ";
        actual = actual->siguiente;
    }
}

NodoPago* ListaPago::Buscar(int id) {
    NodoPago* actual = head;
    while (actual != nullptr) {
        if (actual->dato.getID() == id) return actual;
        actual = actual->siguiente;
    }
    return nullptr;
}

void ListaPago::Eliminar(int id) {
    NodoPago* actual = head;
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

void ListaPago::GuardarEnArchivo() {
    ofstream archivo("pagos.txt");
    if (!archivo) {
        cout << "No se pudo crear el archivo de pagos" << endl;
        return;
    }

    archivo << "Lista de Pagos" << endl;

    NodoPago* actual = head;
    while (actual != nullptr) {
        archivo << "ID Pago: " << actual->dato.id
            << " | ID Pedido: " << actual->dato.idPedido
            << " | Monto: " << actual->dato.monto
            << " | Fecha: " << actual->dato.fecha
            << endl;
        actual = actual->siguiente;
    }

    archivo.close();
    cout << "Pagos guardados en pagos.txt" << endl;
}

void ListaPago::LeerArchivo() {
    ifstream archivo("pagos.txt");
    if (!archivo) {
        cout << "No se pudo abrir el archivo de pagos" << endl;
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

// NUEVOS METODOS 
void ListaPago::cantidadTotalPagos()
{

}

void ListaPago::montoTotalPagos()
{

}

void ListaPago::promedioPagos()
{

}
