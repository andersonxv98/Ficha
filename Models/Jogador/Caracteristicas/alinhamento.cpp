#include "alinhamento.h"

Alinhamento::Alinhamento(string alinhamento)
{
    this->setAlinhamento(alinhamento);
}

void Alinhamento::setAlinhamento(string alinhamento){
    this->alinhamento = alinhamento;
}

string Alinhamento::getAlinhamento(){
    return this->alinhamento;
}
