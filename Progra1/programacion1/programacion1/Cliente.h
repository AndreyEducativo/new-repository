#pragma once
#include <string>
using namespace std;

class Cliente
{
public:
    int id;
    string nombre;
    string email;

    Cliente();
    void agregarCliente();
    void mostrarCliente();
    int getID();
};
