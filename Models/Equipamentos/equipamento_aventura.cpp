#include "equipamento_aventura.h"

Equipamento_Aventura::Equipamento_Aventura(string nome, double preco, double peso)
{
    this-> setNome( nome);
     this-> setPreco( preco);
     this-> setPeso( peso);
}


void Equipamento_Aventura::setNome(string nome){
    this->_nome = nome;
}

void Equipamento_Aventura::setPreco(double  preco){
    this->_preco = preco;
}


void Equipamento_Aventura::setPeso(double  peso){
    this->_peso = peso;
}

string Equipamento_Aventura::getNome(){
    return this->_nome;

}

double Equipamento_Aventura::getPreco(){
    return this->_preco;
}

double Equipamento_Aventura::getPeso(){
    return this->_peso;
}
