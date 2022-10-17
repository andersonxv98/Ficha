#ifndef LISTAATAQUESEMAGIAS_H
#define LISTAATAQUESEMAGIAS_H

#include "ataquesemagia.h"

#include <list>
#include <iostream>

using namespace std;



class ListaAtaquesEMagias
{
public:
    ListaAtaquesEMagias();
    void addAtaqueMagiaNaLista(AtaquesEMagia * AM);
    void rmvAtaqueMagiaNaLista(int id_am);
    list<AtaquesEMagia *> getListaAtaquesEMagia();
private:
    int id();
    list<AtaquesEMagia *> _listaAtaqueseMagias;
};

#endif // LISTAATAQUESEMAGIAS_H
