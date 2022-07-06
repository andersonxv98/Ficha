#include "mochila.h"
#include <iostream>

Mochila::Mochila(double capacidade_total)
{
    this->setCapacidadeTotal(capacidade_total);
    this->setCapacidadeAtual(0);

}

void Mochila::setCapacidadeTotal(double capacidade){
    this->capacidade_total = capacidade;
}

void Mochila::setCapacidadeAtual(double capacidade){
    this->capacidade_atual = capacidade;
}

void Mochila::addObjetoNaMochila(ObjetoEquipamento obj){
    this->_objetos.push_back(obj);
    this->capacidade_atual =obj.getPeso();
}

void Mochila::rmvObjetoDaMochila(ObjetoEquipamento obj){
    for(ObjetoEquipamento x : this->_objetos){
        if (x.getId() == obj.getId()){
            //this->_objetos.remove(x);
            std::cout<<"Funcionou remover objeto";
        }
    }
}

list<ObjetoEquipamento> Mochila::getTodosObjetosNaMochila(){
    return this->_objetos;
}
