#pragma once
#include <string>
using namespace std;

class Pago
{
public:
    int id;
    int idPedido;
    double monto;
    string fecha;

    Pago();
    void agregarPago();
    void mostrarPago();
    int getID();
};
