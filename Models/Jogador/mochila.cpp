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

void Mochila::addObjetoNaMochila(Arma * obj){
    this->_objetos.push_back(obj);
    this->capacidade_atual =obj->getPeso();
}

void Mochila::rmvObjetoDaMochila(int id_item){
    for(Arma *x : this->_objetos){
        if (x->getId() ==id_item){
            cout<<"VALOR: "<<x->getId()<<endl;
            cout<<"ID_ITEM: "<<id_item<<endl;
            this->_objetos.remove(x);
            std::cout<<"Funcionou remover objeto"<<endl;
            break;
        }
    }
}

list<Arma * > Mochila::getTodosObjetosNaMochila(){
    return this->_objetos;
}
