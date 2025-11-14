#include "Pago.h"
#include <iostream>
using namespace std;

//CONSTRUCTOR
Pago::Pago() : id(0), idPedido(0), monto(0.0), fecha("")
{
}

//METODO AGREGAR PAGO 
void Pago::agregarPago()
{
    cout << "Ingrese ID del pago: ";
    cin >> id;

    cout << "Ingrese ID del pedido: ";
    cin >> idPedido;

    cout << "Ingrese monto: ";
    cin >> monto;

    cout << "Ingrese fecha (DD/MM/AAAA): ";
    cin >> fecha;
}

//METODOS MOSTRAR PAGO 
void Pago::mostrarPago()
{
    cout << "----- PAGO -----\n";
    cout << "ID Pago: " << id << endl;
    cout << "ID Pedido: " << idPedido << endl;
    cout << "Monto: " << monto << endl;
    cout << "Fecha: " << fecha << endl;
}

//METODO GET ID 
int Pago::getID()
{
    return id;
}
