#include "veiculos.h"

Veiculos::Veiculos(GenericoVAN &generico)
{
    this-> setGenerico( generico);

}

void Veiculos::setGenerico(GenericoVAN &generico){
    this->_generico = &generico;
}

GenericoVAN* Veiculos::getGenerico(){
    return this->_generico;
}


