#include <iostream>
#include "agregar.h"

using namespace std;

int main()
{
    computadora c01;
    c01.setSitema("Windows");
    c01.setRam("8GB");
    c01.setMemoria("512GB");
    c01.setMarca("DELL");

    computadora c02;
    c02.setSitema("Linux");
    c02.setRam("4GB");
    c02.setMemoria("1TB");
    c02.setMarca("HP");

    computadora c03;
    c03.setSitema("IOS");
    c03.setRam("12GB");
    c03.setMemoria("2TB");
    c03.setMarca("APPLE");

    computadora c04;
    c04.setSitema("Windows");
    c04.setRam("12GB");
    c04.setMemoria("1TB");
    c04.setMarca("LENOVO"); 

    computadora c05;
    c05.setSitema("Windows");
    c05.setRam("16GB");
    c05.setMemoria("2TB");
    c05.setMarca("HUAWEI");

    Agregar ag;
    ag.agregarComputadora(c01);
    ag.agregarComputadora(c02);
    ag.agregarComputadora(c03);
    ag.agregarComputadora(c04);
    ag.agregarComputadora(c05);

    ag.mostrar();
}
