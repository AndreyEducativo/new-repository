#include "Pago.h"
#include <iostream>
using namespace std;

Pago::Pago() : id(0), idPedido(0), monto(0.0), fecha("")
{
}

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

void Pago::mostrarPago()
{
    cout << "----- PAGO -----\n";
    cout << "ID Pago: " << id << endl;
    cout << "ID Pedido: " << idPedido << endl;
    cout << "Monto: " << monto << endl;
    cout << "Fecha: " << fecha << endl;
}

int Pago::getID()
{
    return id;
}
