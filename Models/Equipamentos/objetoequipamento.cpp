#include "objetoequipamento.h"

using namespace std;
ObjetoEquipamento::ObjetoEquipamento(Armadura &armadura, Arma &arma, Equipamento_Aventura &equipamento_aventura, Ferramentas &ferramenta, Outros &outro)
    : _armadura(armadura), _arma(arma), _equipamento_aventura(equipamento_aventura), _ferramentas(ferramenta), _outros(outro)
{
    /*this->_armadura =  &armadura;
     this->_arma = &arma;
     this-> _equipamento_aventura =  &equipamento_aventura;
     this->_ferramentas = &ferramenta;
     this->_outros = &outro;
    if(_armadura != NULL){
       this->peso = _armadura->getPeso();
    }
    else if(_arma != NULL){
       this->peso = _arma->getPeso();
    }
    else if(_equipamento_aventura != NULL){
       this->peso = _equipamento_aventura->getPeso();
    }
    else if(_ferramentas != NULL){
       this->peso = _ferramentas->getPeso();
    }
    else if(_outros != NULL){
       this->peso = 0;
    }*/

}


int ObjetoEquipamento::getId(){
    return this->id;
}

Armadura ObjetoEquipamento::getArmadura()
{

}

double ObjetoEquipamento::getPeso(){
    return this->peso;
}
