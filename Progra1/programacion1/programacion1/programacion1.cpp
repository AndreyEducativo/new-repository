#include <iostream>

//#include "Persona.h"
//#include "Estudiante.h"
//#include "Profesor.h"
//#include "Guarda.h"
//#include "Carnet.h"
//#include "Grupo.h"
//#include "Nodo.h"
//#include "ListaEnlazada.h"
#include "NodoDoble.h"
#include "ListaDoble.h"

using namespace std;

int main() {
/*
Agregar un método a la lista doblemente enlazada para que Busque la posición de los nodos que contienen números
que son múltiplos del número seleccionado por el Usuario.
*/ 

//Agregar otro médoto para extraer el promedio de los valores de los nodos.

    ListaDoble lista;
    bool continuar = true;
    int opcion;
    int dato;

    while (continuar) {
        system("cls");
        cout << "---------------------------------------" << endl;
        cout << "\t MENU LISTA DOBLEMENTE ENLAZADA " << endl;
        cout << "1) Insertar datos" << endl;
        cout << "2) Buscar multiplos" << endl;
        cout << "3) Promedio" << endl;
        cout << "4) Mostrar lista" << endl;
        cout << "0) Salir" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        system("cls");

        switch (opcion) {
        case 1:
            cout << "Ingrese un dato: ";
            cin >> dato;
            lista.Insertar(dato);
            cout << "Dato insertado correctamente." << endl;
            break;

        case 2: {
            int numero;
            cout << "Ingrese un numero para buscar sus multiplos: ";
            cin >> numero;
            cout << endl; 
            lista.BuscarMultiplos(numero);
            break;
        }

        case 3:
            lista.Promedio();
            break;

        case 4:
            lista.Mostrar();
            break;

        case 0:
            continuar = false;
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
            break;
        }

        cout << endl;
        system("pause");
    }

    return 0;
}