#include "maoesquerda.h"

Maoesquerda::Maoesquerda(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade)
{
    this->setObjetoEquipamento(Obj_equipamento_equipavel);
    this->setDurabilidade(durabilidade);
}


void Maoesquerda::setObjetoEquipamento(ObjetoEquipamento obj){
    this->_obj_equipamento = &obj;
}
void Maoesquerda::setDurabilidade(int durabilidade){
    this->durabilidade = durabilidade;
}

int Maoesquerda::getDurabilidade(){
    return this->durabilidade;
}
