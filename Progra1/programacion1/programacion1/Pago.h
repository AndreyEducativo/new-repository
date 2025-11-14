#pragma once
#include <string>
using namespace std;

class Pago
{
public:
    //ATRIBUTOS
    int id;
    int idPedido;
    double monto;
    string fecha;

    //CONSTRUCTOR
    Pago();

    //METODOS
    void agregarPago();
    void mostrarPago();
    int getID();
};
