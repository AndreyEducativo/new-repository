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
        cout << "---------------------------";
        cout << "\tCOMERCIO ELECTRONICO\n";
        cout << "---------------------------";
        cout << "1) Productos\n";
        cout << "2) Clientes\n";
        cout << "3) Pedidos\n";
        cout << "4) Pagos\n";
        cout << "0) Salir\n";
        cout << "Seleccione: ";
        cin >> opc;

        system("cls");

        // PRODUCTOS
        if (opc == 1)
        {
            int op = 0;
            while (op != 5)
            {
                cout << "--------------------";
                cout << "\tPRODUCTOS \n";
                cout << "--------------------";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Volver\n";
                cin >> op;
                system("cls");

                if (op == 1)
                {
                    Producto* p = new Producto();
                    p->agregarProducto();
                    listaProductos.Insertar(p);
                }
                else if (op == 2)
                {
                    listaProductos.Mostrar(mostrarProducto);
                }
                else if (op == 3)
                {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;

                    NodoBase* nodo = listaProductos.Buscar(id, getIDProducto);

                    if (nodo != nullptr)
                        mostrarProducto(nodo->dato);
                    else
                        cout << "No encontrado.\n";
                }
                else if (op == 4)
                {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;

                    listaProductos.Eliminar(id, getIDProducto);
                }

                if (op != 5)
                {
                    cout << endl;
                    system("pause");
                }
            }
        }



        // CLIENTES
        if (opc == 2)
        {
            int op = 0;
            while (op != 5)
            {
                cout << "--------------------";
                cout << "\tCLIENTES \n";
                cout << "--------------------";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Volver\n";
                cin >> op;
                system("cls");

                if (op == 1)
                {
                    Cliente* c = new Cliente();
                    c->agregarCliente();
                    listaClientes.Insertar(c);
                }
                else if (op == 2)
                {
                    listaClientes.Mostrar(mostrarCliente);
                }
                else if (op == 3)
                {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;

                    NodoBase* nodo = listaClientes.Buscar(id, getIDCliente);

                    if (nodo != nullptr)
                        mostrarCliente(nodo->dato);
                    else
                        cout << "Cliente no encontrado.\n";
                }
                else if (op == 4)
                {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;

                    listaClientes.Eliminar(id, getIDCliente);
                }

                if (op != 5)
                {
                    cout << endl;
                    system("pause");
                }
            }
        }



        // PEDIDOS
        if (opc == 3)
        {
            int op = 0;
            while (op != 5)
            {
                cout << "--------------------";
                cout << "\tPEDIDOS \n";
                cout << "--------------------";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Volver\n";
                cin >> op;
                system("cls");

                if (op == 1)
                {
                    Pedido* p = new Pedido();
                    p->agregarPedido();
                    listaPedidos.Insertar(p);
                }
                else if (op == 2)
                {
                    listaPedidos.Mostrar(mostrarPedido);
                }
                else if (op == 3)
                {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;

                    NodoBase* nodo = listaPedidos.Buscar(id, getIDPedido);

                    if (nodo != nullptr)
                        mostrarPedido(nodo->dato);
                    else
                        cout << "Pedido no encontrado.\n";
                }
                else if (op == 4)
                {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;

                    listaPedidos.Eliminar(id, getIDPedido);
                }

                if (op != 5)
                {
                    cout << endl;
                    system("pause");
                }
            }
        }



        // PAGOS
        if (opc == 4)
        {
            int op = 0;
            while (op != 5)
            {
                cout << "--------------------";
                cout << "\tPAGOS \n";
                cout << "--------------------";
                cout << "1) Insertar\n";
                cout << "2) Mostrar\n";
                cout << "3) Buscar\n";
                cout << "4) Eliminar\n";
                cout << "5) Volver\n";
                cin >> op;
                system("cls");

                if (op == 1)
                {
                    Pago* p = new Pago();
                    p->agregarPago();
                    listaPagos.Insertar(p);
                }
                else if (op == 2)
                {
                    listaPagos.Mostrar(mostrarPago);
                }
                else if (op == 3)
                {
                    int id;
                    cout << "ID a buscar: ";
                    cin >> id;

                    NodoBase* nodo = listaPagos.Buscar(id, getIDPago);

                    if (nodo != nullptr)
                        mostrarPago(nodo->dato);
                    else
                        cout << "Pago no encontrado.\n";
                }
                else if (op == 4)
                {
                    int id;
                    cout << "ID a eliminar: ";
                    cin >> id;

                    listaPagos.Eliminar(id, getIDPago);
                }

                if (op != 5)
                {
                    cout << endl;
                    system("pause");
                }
            }
        }





        if (opc == 0)
            continuar = false;
    }

    return 0;
}
