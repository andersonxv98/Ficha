#include "raca.h"

Raca::Raca(string raca)
{
    this->setRaca(raca);

}

void Raca::setRaca(string raca){
    this->raca = raca;
}

string Raca::getRaca(){
    return this->raca;
}
