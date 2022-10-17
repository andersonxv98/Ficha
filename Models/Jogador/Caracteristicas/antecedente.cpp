#include "antecedente.h"

Antecedente::Antecedente(string antecedente)
{
    this->setAntecedente(antecedente);
}

void Antecedente::setAntecedente(string antecedente){
    this->antecedente = antecedente;
}

string Antecedente::getAntecedente(){
    return this->antecedente;
}
