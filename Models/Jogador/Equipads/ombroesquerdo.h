#ifndef OMBROESQUERDO_H
#define OMBROESQUERDO_H
#include <Models/Equipamentos/objetoequipamento.h>

class Ombroesquerdo
{
public:
    Ombroesquerdo(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade);
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

#endif // OMBROESQUERDO_H
