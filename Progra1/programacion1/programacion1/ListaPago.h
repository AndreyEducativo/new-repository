#pragma once
#include "NodoPago.h"
#include <string>

class ListaPago {
public:
    NodoPago* head;
    ListaPago();

    void Insertar(Pago p); 
    void Mostrar();

    NodoPago* Buscar(int id);

    void Eliminar(int id);
    void GuardarEnArchivo();
    void LeerArchivo();
    //segunda parte del proyecto
    void cantidadTotalPagos(); 
    void montoTotalPagos();
    void promedioPagos();
};
