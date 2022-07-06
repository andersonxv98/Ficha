#include "bracos.h"

Bracos::Bracos(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade)
{
    this->setObjetoEquipamento(Obj_equipamento_equipavel);
    this->setDurabilidade(durabilidade);
}


void Bracos::setObjetoEquipamento(ObjetoEquipamento obj){
    this->_obj_equipamento = &obj;
}

void Bracos::setDurabilidade(int durabilidade){
    this->durabilidade = durabilidade;
}

int Bracos::getDurabilidade(){
    return this->durabilidade;
}
