#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente() : id(0), nombre(""), email("") //CONSTRUCTOR
{
}

//METODO AGREGAR CLIENTE 
void Cliente::agregarCliente()
{
    cout << "Ingrese ID del cliente: ";
    cin >> id;
    cout << "Ingrese nombre del cliente: ";
    cin >> nombre;
    cout << "Ingrese email del cliente: ";
    cin >> email;
}

//METODO MOSTRAR CLIENTE 
void Cliente::mostrarCliente()
{
    cout << "----- CLIENTE -----\n";
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Email: " << email << endl;
}

//METODO GET ID 
int Cliente::getID()
{
    return id;
}
