#include <iostream>
#include <stdlib.h>

#include "ListaBase.h"
#include "Cliente.h"
#include "Producto.h"
#include "Pedido.h"
#include "Pago.h"
#include "funcionesGlobales.h"

using namespace std;

int main()
{
    ListaBase listaClientes;
    ListaBase listaProductos;
    ListaBase listaPedidos;
    ListaBase listaPagos;

    bool continuar = true;
    int opc = 0;

    while (continuar)
    {
        system("cls");
        cout << "-----------------------------------\n"; 
        cout << "\tCOMERCIO ELECTRONICO\n";
        cout << "-----------------------------------\n";
        cout << "1) Productos\n";
        cout << "2) Clientes\n";
        cout << "3) Pedidos\n";
        cout << "4) Pagos\n";
        cout << "0) Salir\n";
        cout << "Seleccione: ";
        cin >> opc;
        system("cls");

        switch (opc)
        {
            //MENU PRODUCTOS
        case 1:
        {
            int op = 0;
            while (op != 5)
            {
                cout << "--- PRODUCTOS ---\n";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Volver\n";
                cin >> op;
                system("cls");

                switch (op)
                {
                case 1:
                {
                    Producto* p = new Producto();
                    p->agregarProducto();
                    listaProductos.Insertar(p);
                    break;
                }
                case 2:
                    listaProductos.Mostrar(mostrarProducto);
                    break;

                case 3:
                {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;

                    NodoBase* nodo = listaProductos.Buscar(id, getIDProducto);

                    if (nodo != nullptr) mostrarProducto(nodo->dato);
                    else cout << "No encontrado.\n";
                    break;
                }
                case 4:
                {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;

                    listaProductos.Eliminar(id, getIDProducto);
                    break;
                }
                }

                if (op != 5)
                {
                    cout << endl;
                    system("pause");
                }
            }
            break;
        }

        //MENU CLIENTES
        case 2:
        {
            int op = 0;
            while (op != 5)
            {
                cout << "--- CLIENTES ---\n";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Volver\n";
                cin >> op;
                system("cls");

                switch (op)
                {
                case 1:
                {
                    Cliente* c = new Cliente();
                    c->agregarCliente();
                    listaClientes.Insertar(c);
                    break;
                }
                case 2:
                    listaClientes.Mostrar(mostrarCliente);
                    break;

                case 3:
                {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;

                    NodoBase* nodo = listaClientes.Buscar(id, getIDCliente);

                    if (nodo != nullptr) mostrarCliente(nodo->dato);
                    else cout << "Cliente no encontrado.\n";
                    break;
                }
                case 4:
                {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;

                    listaClientes.Eliminar(id, getIDCliente);
                    break;
                }
                }

                if (op != 5)
                {
                    cout << endl;
                    system("pause");
                }
            }
            break;
        }

        //MENU PEDIDOS
        case 3:
        {
            int op = 0;
            while (op != 5)
            {
                cout << "--- PEDIDOS ---\n";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Volver\n";
                cin >> op;
                system("cls");

                switch (op)
                {
                case 1:
                {
                    Pedido* p = new Pedido();
                    p->agregarPedido();
                    listaPedidos.Insertar(p);
                    break;
                }
                case 2:
                    listaPedidos.Mostrar(mostrarPedido);
                    break;

                case 3:
                {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;

                    NodoBase* nodo = listaPedidos.Buscar(id, getIDPedido);

                    if (nodo != nullptr) mostrarPedido(nodo->dato);
                    else cout << "Pedido no encontrado.\n";
                    break;
                }
                case 4:
                {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;

                    listaPedidos.Eliminar(id, getIDPedido);
                    break;
                }
                }

                if (op != 5)
                {
                    cout << endl;
                    system("pause");
                }
            }
        }
        } //switch principal 
    } //while principal