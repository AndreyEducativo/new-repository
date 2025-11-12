#include "Pago.h"
#include <iostream>
using namespace std;

// CONTRUCTORES
Pago::Pago() 
{
}
Pago::Pago(int Id, int IdPedido, double Monto, string Fecha) 
{
	id = Id;
	idPedido = IdPedido;
	monto = Monto;
	fecha = Fecha;
}

// METODOS
void Pago::agregarPago()
{
	cout << "Ingrese el ID del pago: ";
	cin >> id;
	cout << "Ingrese el ID del pedido asociado: ";
	cin >> idPedido;
	cout << "Ingrese el monto del pago: ";
	cin >> monto;
	cout << "Ingrese la fecha del pago (DD/MM/AAAA): ";
	cin >> fecha;

	cout << "Pago cargado correctamente..." << endl;
}

void Pago::mostrarPago() 
{
	cout << "-------------------------" << endl;
	cout << "ID del pago: " << id << endl;
	cout << "ID del pedido asociado: " << idPedido << endl;
	cout << "Monto del pago: " << monto << endl;
	cout << "Fecha del pago: " << fecha << endl;
	cout << "-------------------------" << endl;
}
