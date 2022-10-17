#include "ideais.h"

Ideais::Ideais()
{

}

list<string> Ideais::getListaIdeais()
{
    return this->listaIdeais;
}

void Ideais::addListaIdeais(string s)
{this->listaIdeais.push_back(s);

}

void Ideais::rmvListaIdeais(string s)
{this->listaIdeais.remove(s);

}
