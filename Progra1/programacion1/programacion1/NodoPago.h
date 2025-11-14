#pragma once
#include "Pago.h"

class NodoPago {
public:
    Pago dato;
    NodoPago* siguiente;
    NodoPago* anterior;
    NodoPago(Pago p);
};
