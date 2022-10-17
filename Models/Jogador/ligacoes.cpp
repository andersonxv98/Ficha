#include "ligacoes.h"

Ligacoes::Ligacoes()
{

}

void Ligacoes::addListaLigacoes(string s)
{
    this->listaligacoes.push_back(s);
}

void Ligacoes::rmvListaLigacoes(string t)
{
    this->listaligacoes.remove(t);
}

list<string> Ligacoes::getListaLigacoes()
{
    return this->listaligacoes;
}
