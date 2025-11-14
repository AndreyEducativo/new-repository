#pragma once
#include "NodoBase.h"
#include <iostream>
using namespace std;

class ListaBase
{
public:
    NodoBase* head;

    ListaBase();

    void Insertar(void* dato);
    void Mostrar(void (*mostrarFuncion)(void*));
    NodoBase* Buscar(int id, int (*getID)(void*));
    void Eliminar(int id, int (*getID)(void*));
};
