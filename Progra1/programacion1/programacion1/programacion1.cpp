#include <iostream>

#include "Persona.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "Guarda.h"
#include "Carnet.h"
#include "Grupo.h"
#include "Nodo.h"
#include "ListaEnlazada.h"
#include "NodoDoble.h"
#include "ListaDoble.h"

using namespace std;

int main() {
    ListaDoble lista;
    bool continuar = true;
    string respuesta;
    int dato = 0;

    while (continuar) {
        system("cls");
		// PRIMER MÉTODO: Insertar al inicio 
        cout << "Ingrese un dato: ";
        cin >> dato;
        lista.Insertar(dato);

        lista.Mostrar();

        // SEGUNDO MÉTODO: Insertar entre dos nodos (sirve solo del reves)
        cout << "\nDesea insertar un dato entre dos existentes? (s/n): ";
        cin >> respuesta;

        if (respuesta == "s" || respuesta == "S") {
            int valorAnterior, valorSiguiente, nuevoValor;
            cout << "Ingrese el valor anterior: ";
            cin >> valorAnterior;
            cout << "Ingrese el valor siguiente: ";
            cin >> valorSiguiente;
            cout << "Ingrese el nuevo valor a insertar entre ellos: ";
            cin >> nuevoValor;

            lista.InsertarEnPosicion(valorAnterior, valorSiguiente, nuevoValor);
            lista.Mostrar();
        }
        else {
            cout << "No se insertara ningun dato nuevo entre nodos." << endl;
        }

        // TERCER MÉTODO: Eliminar nodo
        cout << "\nDesea eliminar algun dato? (s/n): ";
        cin >> respuesta;

        if (respuesta == "s" || respuesta == "S") {
            cout << "Ingrese el dato a eliminar: ";
            cin >> dato;
            lista.Eliminar(dato);
            lista.Mostrar();
        }

        // CONTINUAR O SALIR
        cout << "\nDesea continuar (s/n): ";
        cin >> respuesta;
        if (respuesta == "n" || respuesta == "N") {
            continuar = false;
        }

        system("pause");
    }

    system("cls");
    lista.Mostrar();

    cout << "\nEl promedio de los datos en la lista es: ";
    lista.Promedio();

    cout << endl;
    system("pause");

    return 0;
}