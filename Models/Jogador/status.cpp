#include "status.h"

#include <iostream>

using namespace std;
Status::Status(int armadura, int iniciativa, double deslocamento, int hp, int hp_total, string dadovida)
{
     this->setArmadura(armadura);
    this->setIniciativa(iniciativa);
   this->setDeslocamento(deslocamento);
   this->setHp(hp);
    this->setHPTemporario(0);
    this->setHPTOTAL(hp_total);
    this->setDadoVida(dadovida);
}

void Status::setDadoVida(string dadovida){
    this->dadovida = dadovida;
}

void Status::setArmadura(int armadura){
    this->_classe_armadura = armadura;
}

void Status::setIniciativa(int iniciativa){
    this->_iniciativa = iniciativa;
}

void Status::setDeslocamento(double deslocamento){
    this->_deslocamento = deslocamento;
}

void Status::setHp(int hp){
    this->_HP = hp;
}

void Status::setHPTemporario(int hp){
    this->_Hp_temporario = hp;
}

void Status::setHPTOTAL(int hp){
    this->_HPTotal = hp;
}

int Status::getArmadura(){
    return this->_classe_armadura;
}

int Status::getIniciativa(){
    return this->_iniciativa;
}

double Status::getDeslocamento( ){
   return  this->_deslocamento ;
}

int Status::getHp( ){
    cout<<"valor retorno hp atual: "<<this->_HP<<endl;
   return  this->_HP ;
}

int Status::getHPTemporario( ){
    cout<<"valor retorno hp temporario: "<<this->_Hp_temporario<<endl;
   return this->_Hp_temporario;
}

int Status::getHPTOTAL(){
    cout<<"valor retorno hp Total: "<<this->_HPTotal<<endl;
  return   this->_HPTotal;
}

string Status::getDadoVida(){
    return this->dadovida;
}
