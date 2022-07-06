#include "genericovan.h"
#include <string>
using namespace std;
GenericoVAN::GenericoVAN(string nome, double preco, double deslocamento)
{

    this-> setNome( nome);
     this-> setPreco( preco);
    this->setDeslocamento(deslocamento);

}

void GenericoVAN::setNome(string nome){
    this->_nome = nome;
}

void GenericoVAN::setPreco(double  preco){
    this->_preco = preco;
}

void GenericoVAN::setDeslocamento(double deslocamento){
    this->_deslocamento = deslocamento;
}

string GenericoVAN::getNome(){
    return this->_nome;
}

double GenericoVAN::getPreco(){
    return this->_preco;
}

double GenericoVAN::getDeslocamento(){
    return this->_deslocamento;
}
