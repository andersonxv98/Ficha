#include "armadura.h"

Armadura::Armadura(string nome, double preco, int ca, string furtividade, double peso, string tipo)
{
    this->setNome( nome);
     this->setPreco( preco);
    this->setCa( ca);
    this->setFurtividade( furtividade);
    this->setPeso( peso);
    this->setTipo(tipo);
}

void Armadura::setNome(string nome){
    this->_nome = nome;
}
//SETS E GETS
void Armadura::setPreco(double preco){
    this->_preco = preco;
}

void Armadura::setCa(int ca){
    this->_CA = ca;
}

void Armadura::setFurtividade(string furtividade){
    this->_furtividade = furtividade;
}

void Armadura::setPeso(double  peso){
    this->_peso = peso;
}

void Armadura::setTipo(string tipo){
    this->_tipo_LMP = tipo;
}

string Armadura::getNome(){
    return this->_nome;
}

double Armadura::getPreco(){
    return this->_preco;
}

int Armadura::getCa(){
    return this->_CA;
}

string Armadura::getFurtividade(){
    return this->_furtividade;
}

double Armadura::getPeso(){
    return this->_peso;
}
