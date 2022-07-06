#include "propriedades_arma.h"

Propriedades_Arma::Propriedades_Arma(std::string descricao)
{
    this-> setDescricao(descricao);
}

void Propriedades_Arma::setDescricao(std::string descricao){
    this->_descricao = descricao;
}

std::string Propriedades_Arma::getDescricao(){
    return this->_descricao;
}
