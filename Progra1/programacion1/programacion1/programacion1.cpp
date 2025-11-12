/*Crear un Software en C++ que para los siguientes requerimientos. 

Comercio Electrónico 
• El sistema debe manejar archivos de texto para Productos, clientes, pedidos y pagos. 
• Debe haber un menú para poder seleccionar la opción requerida. 
• Se puede insertar, eliminar o buscar registros. 
• En clase se hará un ejercicio adicional. 

Entregables 
Debe entregarse el proyecto en Visual Studio(Preferiblemente en un repositorio GIT). 
Diagrama de Clases .*/

#include <iostream> 
#include <string> 
#include "Producto.h"
#include "Cliente.h"
#include "Pedido.h"
#include "Pago.h"

using namespace std;

int main() {
	// Crear objetos de las clases
    Producto producto;
	Cliente cliente;
	Pedido pedido;
	Pago pago;

	//variables para el menu
    bool continuar = true;
    int opc = 0;

	while (continuar) { // bucle del menu
        system("cls");
        cout << "---------------------------------------" << endl;
        cout << "\t COMERCIO ELECTRONICO " << endl;
        cout << "1) Productos " << endl;
        cout << "2) Clientes " << endl;
        cout << "3) Pedidos " << endl;
        cout << "4) Pago " << endl;
        cout << "0) Salir " << endl;
        cout << "---------------------------------------" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opc;

        system("cls");

		switch (opc) { // opciones del menu
        case 1:
            producto.agregarProducto();
            producto.mostrarProducto();
            break;
        case 2:
            cliente.agregarCliente(); 
            cliente.mostrarCliente(); 
			break;
        case 3:
            pedido.agregarPedido();
            pedido.mostrarPedido();
			break;
        case 4:
			pago.agregarPago();
            pago.mostrarPago();
			break;
        case 0:
            continuar = false;
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
            break;
        }

        cout << endl;
        system("pause");
    }

    return 0;
}