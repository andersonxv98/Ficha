#ifndef CARACTERISTICASEHABILIDADES_H
#define CARACTERISTICASEHABILIDADES_H
#include <iostream>
#include <string>
#include <list>

using namespace std;

class CaracteristicasEHabilidades
{
public:
    CaracteristicasEHabilidades();

    void addCaracteristicaEHabilidade(string s);
    void rmvCaracteristicaEHabilidade(string s);
    list<string> getListCaracteristicas();

private:
    int id;

    list<string> list_caracteristicaehabilidades;


};

#endif // CARACTERISTICASEHABILIDADES_H
