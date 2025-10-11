#include <iostream>
//semana 8,9,10
#include "Persona.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "Guarda.h"
#include "Carnet.h"
#include "Grupo.h"
//semana 11
#include "Nodo.h"
#include "ListaEnlazada.h"
//semana 12
#include "ListaDoble.h"
#include "NodoDoble.h"
using namespace std;

int main() {

    ListaDoble lista;

    bool Continuar = true;
    string Respuesta = "Si";
    int dato = 0;

    while (Continuar)
    {
        cout << "Ingrese Dato" << endl;
        cin >> dato;
        lista.Insertar(dato);
        cout << "Desea continuar? Si/No" << endl;
        cin >> Respuesta;

        if (Respuesta == "No" || Respuesta == "no")
        {
            Continuar = false;
        }
        else
        {
            Continuar = true;
        }

    }
    lista.Mostrar();

    int valorUsuario; 
    cout << "Ingrese el valor para ver la posicion del nodo. " << endl; 
    cin >> valorUsuario; 
    lista.Buscar(valorUsuario); 
	/*
    //llamar a todas las clases 
    Persona persona;
    Estudiante estudiante;
    Profesor profesor;
    Guarda guarda;
    Carnet carnet;
    Grupo grup;
    // Mostrar la logica de las clases 
	cout << "Demostracion de clases y herencia en C++" << endl;
	persona.Mostrar();
	estudiante.Mostrar();
	profesor.Mostrar();
	guarda.Mostrar(); // No tiene metodo Mostrar
	carnet.Mostrar(); // No tiene metodo Mostrar
	grup.Mostrar(); // No tiene metodo Mostrar
 

	// Crear un grupo con estudiantes y un profesor
    Estudiante estudiantes[3]; // arreglo vacío
    Profesor profe;            // profesor vacío
    Grupo grupo("TI", profe, estudiantes);

    grupo.RegistrarEstudiantes();


    //punteros 
    int i = 10;
    int* x = &i; //puntero x guarda la direccion de i
	cout << "Valor de i: " << i << endl;
	cout << "Direccion de i: " << &i << endl;
	cout << "Valor de x (direccion de i): " << x << endl;
	cout << "Valor apuntado por x (valor de i): " << *x << endl << endl;
    


    ListaEnlazada lista;

    bool Continuar = true;

    while (Continuar)
    {
		system("cls"); // Limpiar la consola (funciona en Windows)
        int opcion;
        cout << "------------------Menu de opciones-------------------" << endl;
        cout << "0. Salir" << endl;
        cout << "1. Insertar valores" << endl;
        cout << "2. Mostrar la lista y posicion" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        {
            if (opcion == 0) {
            Continuar = false;
            system("pause");
            }
			else if (opcion == 1) {
            int valor; 
            cout << "Ingrese un valor entero para insertar: ";
            cin >> valor;
            lista.Insertar(valor);
            }
			else if (opcion == 2){
                lista.Mostrar();
				cout << "Desea buscar un valor en la lista? (1 Si, 0 No): ";
				int buscar;
				cin >> buscar;
                if (buscar == 1) {
                    lista.Buscar();
				} 
                else {
                    cout << "No se realizara la busqueda." << endl;
				}
			system("pause");
            }
            else {
            cout << "Opcion no valida. Intente de nuevo." << endl;
            }
		}
        
    }
    */
    return 0;
}
