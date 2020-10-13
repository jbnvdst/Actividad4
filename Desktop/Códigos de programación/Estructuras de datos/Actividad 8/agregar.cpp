#include "agregar.h"

Agregar::Agregar()
{
    cont = 0;
}

void Agregar::agregarComputadora(const computadora &z)
{
    if (cont < 5)
    {
        arreglo[cont] = z;
        cont++;
    }
    else
    {
        cout << "El arreglo está lleno" << endl;
    }
    
}

void Agregar::mostrar()
{
    for (size_t i = 0; i < cont; i++)
    {
        computadora &a = arreglo[i];

        cout <<"Sistema Operativo: " << a.getSistema() << endl;
        cout <<"Memoria RAM: " << a.getSistema() << endl;
        cout <<"Sistema Operativo: " << a.getSistema() << endl;
        cout <<"Sistema Operativo: " << a.getSistema() << endl;
    }
    
}   