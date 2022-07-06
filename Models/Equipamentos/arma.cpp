#include "arma.h"

Arma::Arma(double peso, string nome_arma, string dano, double preco, Propriedades_Arma propriedade)
{
    this-> setPeso( peso);
    this-> setNome( nome_arma);
    this-> setDano( dano);
    this-> setPreco( preco);
    this-> addPropriedades( propriedade);
}

void Arma::setPeso(double peso){
     this->_peso = peso;
}

void Arma::setNome(string nome){
     this->_nome_da_arma = nome;
}

void Arma::setDano(string dano){
     this->_dano = dano;
}

void Arma::setPreco(double  preco){
     this->_preco = preco;
}

void Arma::addPropriedades(Propriedades_Arma propriedade){
     this->_propriedades.push_back(propriedade);
}

double Arma::getPeso(){
    return this->_peso;
}
string Arma::getNome(){
    return this->_nome_da_arma;
}
string Arma::getDano(){
    return this->_dano;
}
double Arma::getPreco(){
    return this->_preco;
}
list<Propriedades_Arma> Arma::getPropriedades(){
    return this-> _propriedades;
}
