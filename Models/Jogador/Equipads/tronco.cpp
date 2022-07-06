#include "tronco.h"

Tronco::Tronco(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade)
{
    this->setObjetoEquipamento(Obj_equipamento_equipavel);
    this->setDurabilidade(durabilidade);
}

void Tronco::setObjetoEquipamento(ObjetoEquipamento obj){
    this->_obj_equipamento = &obj;
}
void Tronco::setDurabilidade(int durabilidade){
    this->durabilidade = durabilidade;
}

int Tronco::getDurabilidade(){
    return this->durabilidade;
}
