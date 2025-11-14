#include "ListaBase.h"

ListaBase::ListaBase() : head(nullptr)
{
}

void ListaBase::Insertar(void* dato)
{
    NodoBase* nuevo = new NodoBase(dato);

    if (head != nullptr)
    {
        head->anterior = nuevo;
        nuevo->siguiente = head;
    }

    head = nuevo;

    cout << "Registro agregado correctamente.\n";
}

void ListaBase::Mostrar(void (*mostrarFuncion)(void*))
{
    NodoBase* actual = head;

    while (actual != nullptr)
    {
        mostrarFuncion(actual->dato);

        cout << "Direc actual: " << actual << " ";
        cout << "Direc anterior: " << actual->anterior << " ";
        cout << "Direc siguiente: " << actual->siguiente << endl;
        cout << endl;

        actual = actual->siguiente;
    }
}

NodoBase* ListaBase::Buscar(int id, int (*getID)(void*))
{
    NodoBase* actual = head;

    while (actual != nullptr)
    {
        if (getID(actual->dato) == id)
            return actual;

        actual = actual->siguiente;
    }

    return nullptr;
}

void ListaBase::Eliminar(int id, int (*getID)(void*))
{
    NodoBase* actual = head;

    while (actual != nullptr)
    {
        if (getID(actual->dato) == id)
        {
            if (actual->anterior != nullptr)
                actual->anterior->siguiente = actual->siguiente;
            else
                head = actual->siguiente;

            if (actual->siguiente != nullptr)
                actual->siguiente->anterior = actual->anterior;

            delete actual->dato;
            delete actual;

            cout << "Registro eliminado correctamente.\n";
            return;
        }

        actual = actual->siguiente;
    }

    cout << "No se encontro el registro.\n";
}
