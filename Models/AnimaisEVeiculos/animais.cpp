#include "animais.h"


Animais::Animais(GenericoVAN &_generico, double consumo)
{
    this-> setGenerico( _generico);
    this-> setConsumo(consumo);
}

void Animais::setGenerico(GenericoVAN &generico){
    this->_generico = &generico;
}

void Animais::setConsumo(double consumo){
    this->_consumo_diario_kg = consumo;
}

double  Animais::getConsumo(){
    return this->_consumo_diario_kg;
}

GenericoVAN* Animais::getGenerico(){
    return this->_generico;
}
