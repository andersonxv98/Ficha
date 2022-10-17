#ifndef IDEAIS_H
#define IDEAIS_H
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Ideais
{
public:
    Ideais();
    list<string> getListaIdeais();
    void addListaIdeais(string s);
    void rmvListaIdeais(string s);
private:
    int id;

    list<string> listaIdeais;
};

#endif // IDEAIS_H
