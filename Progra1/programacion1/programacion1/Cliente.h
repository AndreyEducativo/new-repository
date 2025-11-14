#pragma once
#include <string>
using namespace std;

class Cliente
{
public: 
    //ATRIBUTOS
    int id;
    string nombre;
    string email;

    //CONSTRUCTOR
    Cliente();

    //METODOS
    void agregarCliente();
    void mostrarCliente();
    int getID();
};
