#ifndef BOTAS_H
#define BOTAS_H

#include <Models/Equipamentos/objetoequipamento.h>
class Botas
{
public:
    Botas(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade);
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

#endif // BOTAS_H
