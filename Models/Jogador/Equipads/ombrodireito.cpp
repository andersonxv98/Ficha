#include "ombrodireito.h"

Ombrodireito::Ombrodireito(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade)
{
    this->setObjetoEquipamento(Obj_equipamento_equipavel);
    this->setDurabilidade(durabilidade);
}


void Ombrodireito::setObjetoEquipamento(ObjetoEquipamento obj){
    this->_obj_equipamento = &obj;
}
void Ombrodireito::setDurabilidade(int durabilidade){
    this->durabilidade = durabilidade;
}

int Ombrodireito::getDurabilidade(){
    return this->durabilidade;
}
