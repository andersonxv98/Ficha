#include "tracos.h"

Tracos::Tracos(Personalidade _personalidade, Ideais _ideia, Vinculos _vinculo, Fraquezas _fraqueza)
{
    this-> addPersonalidade( _personalidade);
    this-> addIdeais( _ideia);
    this-> addVinculos( _vinculo);
    this-> addFraquezas( _fraqueza);
}

list<Personalidade> Tracos::getPersonalidades(){
    return this->_personalidades;
}
list<Ideais> Tracos::getIdeais(){
    return this->_ideais;
}
list<Vinculos> Tracos::getVinculos(){
    return this->_vinculos;
}
list<Fraquezas> Tracos::getFraquezas(){
    return this->_fraquezas;
}

void Tracos::addPersonalidade(Personalidade personalidade){
    this->_personalidades.push_back(personalidade);
}

void Tracos::addIdeais(Ideais ideais){
    this->_ideais.push_back(ideais);
}

void Tracos::addVinculos(Vinculos vinculo){
    this->_vinculos.push_back(vinculo);
}

void Tracos::addFraquezas(Fraquezas fraqueza){
    this->_fraquezas.push_back(fraqueza);
}
