#ifndef LIGACOES_H
#define LIGACOES_H

#include <iostream>
#include <list>
using namespace std;
class Ligacoes
{
public:
    Ligacoes();

    void addListaLigacoes(string s);
    void rmvListaLigacoes(string s);

    list<string> getListaLigacoes();
private:
    int id;
    list<string> listaligacoes;
};

#endif // LIGACOES_H
