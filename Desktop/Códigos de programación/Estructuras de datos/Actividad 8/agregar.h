#ifndef AGREGAR_H
#define AGREGAR_H

#include "computadora.h"

class Agregar
{
    computadora arreglo [5];
    size_t cont;
public:
    Agregar();
    void agregarComputadora(const computadora &z);
    void mostrar();
};


#endif