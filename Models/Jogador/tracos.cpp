#include "tracos.h"

Tracos::Tracos()
{
}

list<string> Tracos::getTracos()
{
    return this->_personalidades;
}

void Tracos::addTracos(string s)
{   this->_personalidades.push_back(s);

}

void Tracos::rmvTracos(string s)
{
    this->_personalidades.remove(s);
}

