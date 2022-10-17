#include "personalidade.h"

Personalidade::Personalidade(string personalite)
{
    this->setPersonalidade(personalite);

}

void Personalidade::setPersonalidade(string person){
    this->_traco_personalidade = person;
}

string Personalidade::getPersonalidade(){
    return this->_traco_personalidade;
}
