#include <iostream>
#include <stdlib.h>
#include "ListaCliente.h"
#include "ListaProducto.h"
#include "ListaPedido.h"
#include "ListaPago.h"

using namespace std;

int main() {
    ListaCliente listaClientes;
    ListaProducto listaProductos;
    ListaPedido listaPedidos;
    ListaPago listaPagos;

    bool continuar = true;
    int opc = 0;

    while (continuar) {
        system("cls");
        cout << "---------------------------------\n";
        cout << "\tCOMERCIO ELECTRONICO\n";
        cout << "---------------------------------\n";
        cout << "1) Productos\n";
        cout << "2) Clientes\n";
        cout << "3) Pedidos\n";
        cout << "4) Pagos\n";
        cout << "0) Salir\n";
        cout << "Seleccione: ";
        cin >> opc;
        system("cls");

        switch (opc) {
            // MENU PRODUCTOS
        case 1: {
            int op = 0;
            while (op != 7) {
                cout << "--- PRODUCTOS ---\n";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Guardar en archivo\n";
                cout << "6) Leer archivo\n";
                cout << "7) Volver\n";
                cout << "Seleccione: ";
                cin >> op;
                system("cls");

                switch (op) {
                case 1: {
                    Producto p;
                    p.agregarProducto();
                    listaProductos.Insertar(p);
                    break;
                }
                case 2:
                    listaProductos.Mostrar();
                    break;
                case 3: {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;
                    NodoProducto* nodo = listaProductos.Buscar(id);
                    if (nodo != nullptr) nodo->dato.mostrarProducto();
                    else cout << "No encontrado.\n";
                    break;
                }
                case 4: {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;
                    listaProductos.Eliminar(id);
                    break;
                }
                case 5:
                    listaProductos.GuardarEnArchivo("productos.txt");
                    break;
                case 6:
                    listaProductos.LeerArchivo("productos.txt");
                    break;
                }
                if (op != 7) { cout << endl; system("pause"); }
            }
            break;
        }

              // MENU CLIENTES
        case 2: {
            int op = 0;
            while (op != 7) {
                cout << "--- CLIENTES ---\n";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Guardar en archivo\n";
                cout << "6) Leer archivo\n";
                cout << "7) Volver\n";
                cout << "Seleccione: ";
                cin >> op;
                system("cls");

                switch (op) {
                case 1: {
                    Cliente c;
                    c.agregarCliente();
                    listaClientes.Insertar(c);
                    break;
                }
                case 2:
                    listaClientes.Mostrar();
                    break;
                case 3: {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;
                    NodoCliente* nodo = listaClientes.Buscar(id);
                    if (nodo != nullptr) nodo->dato.mostrarCliente();
                    else cout << "Cliente no encontrado.\n";
                    break;
                }
                case 4: {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;
                    listaClientes.Eliminar(id);
                    break;
                }
                case 5:
                    listaClientes.GuardarEnArchivo("clientes.txt");
                    break;
                case 6:
                    listaClientes.LeerArchivo("clientes.txt");
                    break;
                }
                if (op != 7) { cout << endl; system("pause"); }
            }
            break;
        }

              // MENU PEDIDOS
        case 3: {
            int op = 0;
            while (op != 7) {
                cout << "--- PEDIDOS ---\n";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Guardar en archivo\n";
                cout << "6) Leer archivo\n";
                cout << "7) Volver\n";
                cout << "Seleccione: ";
                cin >> op;
                system("cls");

                switch (op) {
                case 1: {
                    Pedido p;
                    p.agregarPedido();
                    listaPedidos.Insertar(p);
                    break;
                }
                case 2:
                    listaPedidos.Mostrar();
                    break;
                case 3: {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;
                    NodoPedido* nodo = listaPedidos.Buscar(id);
                    if (nodo != nullptr) nodo->dato.mostrarPedido();
                    else cout << "Pedido no encontrado.\n";
                    break;
                }
                case 4: {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;
                    listaPedidos.Eliminar(id);
                    break;
                }
                case 5:
                    listaPedidos.GuardarEnArchivo("pedidos.txt");
                    break;
                case 6:
                    listaPedidos.LeerArchivo("pedidos.txt");
                    break;
                }
                if (op != 7) { cout << endl; system("pause"); }
            }
            break;
        }

              // MENU PAGOS
        case 4: {
            int op = 0;
            while (op != 7) {
                cout << "--- PAGOS ---\n";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Guardar en archivo\n";
                cout << "6) Leer archivo\n";
                cout << "7) Volver\n";
                cout << "Seleccione: ";
                cin >> op;
                system("cls");

                switch (op) {
                case 1: {
                    Pago p;
                    p.agregarPago();
                    listaPagos.Insertar(p);
                    break;
                }
                case 2:
                    listaPagos.Mostrar();
                    break;
                case 3: {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;
                    NodoPago* nodo = listaPagos.Buscar(id);
                    if (nodo != nullptr) nodo->dato.mostrarPago();
                    else cout << "Pago no encontrado.\n";
                    break;
                }
                case 4: {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;
                    listaPagos.Eliminar(id);
                    break;
                }
                case 5:
                    listaPagos.GuardarEnArchivo("pagos.txt");
                    break;
                case 6:
                    listaPagos.LeerArchivo("pagos.txt");
                    break;
                }
                if (op != 7) { cout << endl; system("pause"); }
            }
            break;
        }

        case 0:
            continuar = false;
            break;

        default:
            cout << "Opción inválida.\n";
            system("pause");
            break;
        }
    }
    return 0;
}
