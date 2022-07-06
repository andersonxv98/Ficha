#include "outros.h"

Outros::Outros(string nome, double preco)
{
    this-> setNome( nome);
     this-> setPreco( preco);
}

void Outros::setNome(string nome){
    this->_nome = nome;
}

void Outros::setPreco(double  preco){
    this->_preco = preco;
}

string Outros::getNome(){
    return this->_nome;

}

double Outros::getPreco(){
    return this->_preco;
}



