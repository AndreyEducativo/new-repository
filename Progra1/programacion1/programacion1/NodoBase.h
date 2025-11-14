#pragma once

class NodoBase
{
public:
    void* dato;
    NodoBase* siguiente;
    NodoBase* anterior;

    NodoBase(void* d);
};
