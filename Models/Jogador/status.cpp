#include "status.h"

Status::Status(int armadura, int iniciativa, double deslocamento, int hp, int hptemporario)
{
     this->setArmadura( armadura);
    this->setIniciativa( iniciativa);
   this->setDeslocamento( deslocamento);
   this->setHp(  hp);
    this->setHPTemporario( hptemporario);
    this->setHPTOTAL( hp,  hptemporario);
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

void Status::setHp(int HP){
    this->_HP = HP;
}

void Status::setHPTemporario(int HPtemporario){
    this->_Hp_temporario = HPtemporario;
}

void Status::setHPTOTAL(int HP,int HPtemporario){
    this->_HPTotal = HP + HPtemporario;
}

