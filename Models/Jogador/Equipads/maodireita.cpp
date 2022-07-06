#include "maodireita.h"

Maodireita::Maodireita(ObjetoEquipamento Obj_equipamento_equipavel, int durabilidade)
{
    this->setObjetoEquipamento(Obj_equipamento_equipavel);
    this->setDurabilidade(durabilidade);
}


void Maodireita::setObjetoEquipamento(ObjetoEquipamento obj){
    this->_obj_equipamento = &obj;
}
void Maodireita::setDurabilidade(int durabilidade){
    this->durabilidade = durabilidade;
}

int Maodireita::getDurabilidade(){
    return this->durabilidade;
}
