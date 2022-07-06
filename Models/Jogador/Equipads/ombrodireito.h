#ifndef OMBRODIREITO_H
#define OMBRODIREITO_H
#include <Models/Equipamentos/objetoequipamento.h>

class Ombrodireito
{
public:
    Ombrodireito(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade);
    int getDurabilidade();
    ObjetoEquipamento getObj();
    string getSaude();
    void setSaude();
 private:
    ObjetoEquipamento * _obj_equipamento;
   void setObjetoEquipamento(ObjetoEquipamento obj);
    string estado; //ferido, arranhado, cortado, quebrado etc;;
    int durabilidade;
    void setDurabilidade(int durabilidade);
};

#endif // OMBRODIREITO_H
