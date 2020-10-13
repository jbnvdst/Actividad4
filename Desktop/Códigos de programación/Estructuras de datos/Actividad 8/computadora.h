#ifndef computadora_h
#define computadora_h

#include <iostream>

using namespace std;

class computadora
{
private:
    string sistema_operativo;
    string memoria_ram;
    string memoria_interna;
    string marca;

public:
    computadora(/* args */);
    computadora(const string &sistema_operativo, const string &memoria_ram, const string &memoria_interna, const string marca);

    void setSitema(const string &a);
    string getSistema();

    void setRam(const string &a);
    string getRam();

    void setMemoria(const string &a);
    string getMemoria();

    void setMarca(const string &a);
    string getMarca();
};


#endif computadora_h