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
    //METODOS NUEVOS 14/11/2025
    void cantidadTotalPagos(); 
    void montoTotalPagos();
    void promedioPagos();
};
