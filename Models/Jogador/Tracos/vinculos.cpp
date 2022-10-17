#include "vinculos.h"

Vinculos::Vinculos(string vinculo)
{
    this->setVinculos( vinculo);
}

void Vinculos::setVinculos(string vinculos){
    this->_vinculo = vinculos;
}

string Vinculos::getVinculos(){
    return this->_vinculo;
}
