#include "pes.h"

Botas::Botas(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade)
{
    this->setObjetoEquipamento(Obj_equipamento_equipavel);
    this->setDurabilidade(durabilidade);
}


void Botas::setObjetoEquipamento(ObjetoEquipamento obj){
    this->_obj_equipamento = &obj;
}
void Botas::setDurabilidade(int durabilidade){
    this->durabilidade = durabilidade;
}

int Botas::getDurabilidade(){
    return this->durabilidade;
}
