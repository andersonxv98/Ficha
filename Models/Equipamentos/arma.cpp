#include "arma.h"
#include <iostream>
Arma::Arma(double peso, string nome_arma, string dano, double preco, string propriedade, string lmp)
{
    this-> setPeso(peso);
    this-> setNome( nome_arma);
    this-> setDano( dano);
    this-> setPreco( preco);
    this->setTipo(lmp);
    this-> addPropriedades( propriedade);
    std::cout<<"finalizou a construçãodo objeto arma"<<std::endl;
    this->setId(this->contador);
    this->contador++;
}
int Arma::contador = 0;

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

void Arma::addPropriedades(string propriedade){
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

string Arma::getTipo()
{
    return this->_tipo_LMP;
}

int Arma::getId()
{   return this->id;

}
list<string> Arma::getPropriedades(){
    return this-> _propriedades;
}

void Arma::setId(int id)
{
this->id = id;
}

void Arma::setTipo(string lmp)
{
    this->_tipo_LMP = lmp;
}
