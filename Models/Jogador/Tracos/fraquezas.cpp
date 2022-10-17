#include "fraquezas.h"

Fraquezas::Fraquezas(string fraqueza)
{
    this->setFraqueza(fraqueza);

}

void Fraquezas::setFraqueza(string fraqueza){
    this->_fraqueza = fraqueza;
}

string Fraquezas::getFraqueza(){
    return this->_fraqueza;
}
