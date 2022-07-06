#include "ombroesquerdo.h"

Ombroesquerdo::Ombroesquerdo(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade)
{
    this->setObjetoEquipamento(Obj_equipamento_equipavel);
    this->setDurabilidade(durabilidade);
}


void Ombroesquerdo::setObjetoEquipamento(ObjetoEquipamento obj){
    this->_obj_equipamento = &obj;
}
void Ombroesquerdo::setDurabilidade(int durabilidade){
    this->durabilidade = durabilidade;
}

int Ombroesquerdo::getDurabilidade(){
    return this->durabilidade;
}
