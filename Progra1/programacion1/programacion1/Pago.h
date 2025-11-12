#pragma once
#include <string> 
using namespace std; 

class Pago
{
	public:
		// ATRIBUTOS
	int id;
	int idPedido;
	double monto;
	string fecha;

	// CONSTRUCTORES
	Pago(); 
	Pago(int Id, int IdPedido, double Monto, string Fecha); 

	// METODOS
	void agregarPago();
	void mostrarPago();
};

