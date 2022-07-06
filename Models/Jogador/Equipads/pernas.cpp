#include "pernas.h"

Pernas::Pernas(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade)
{
    this->setObjetoEquipamento(Obj_equipamento_equipavel);
    this->setDurabilidade(durabilidade);
}


void Pernas::setObjetoEquipamento(ObjetoEquipamento obj){
    this->_obj_equipamento = &obj;
}
void Pernas::setDurabilidade(int durabilidade){
    this->durabilidade = durabilidade;
}

int Pernas::getDurabilidade(){
    return this->durabilidade;
}
