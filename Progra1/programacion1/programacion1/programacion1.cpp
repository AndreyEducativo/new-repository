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
    int opc = 0;
    int dato = 0;

    while (continuar) {
        system("cls");
        cout << "---------------------------------------" << endl;
        cout << "\t MENU LISTA DOBLEMENTE ENLAZADA " << endl;
        cout << "1) Insertar datos" << endl;
        cout << "2) Buscar menor valor" << endl;
        cout << "3) Buscar valor mayor" << endl;
        cout << "4) Buscar numeros pares e impares" << endl;
        cout << "5) Mostrar lista" << endl;
        cout << "0) Salir" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opc;

        system("cls");

        switch (opc) {
        case 1:
            cout << "Ingrese un dato: ";
            cin >> dato;
            lista.Insertar(dato);
            cout << "Dato insertado correctamente." << endl;
            break;

        case 2:
            lista.MenorValor();
            break;

        case 3:
            lista.MayorValor();
            break;

        case 4:
            lista.ParesEImpares();
            break;

        case 5:
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