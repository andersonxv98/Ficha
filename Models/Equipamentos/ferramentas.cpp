#include "ferramentas.h"

Ferramentas::Ferramentas(string nome, double preco, double peso)
{
    this-> setNome( nome);
     this-> setPreco( preco);
     this-> setPeso( peso);
}


void Ferramentas::setNome(string nome){
    this->_nome = nome;
}

void Ferramentas::setPreco(double  preco){
    this->_preco = preco;
}


void Ferramentas::setPeso(double  peso){
    this->_peso = peso;
}

string Ferramentas::getNome(){
    return this->_nome;

}

double Ferramentas::getPreco(){
    return this->_preco;
}

double Ferramentas::getPeso(){
    return this->_peso;
}
