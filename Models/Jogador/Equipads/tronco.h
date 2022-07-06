#ifndef TRONCO_H
#define TRONCO_H

#include <Models/Equipamentos/objetoequipamento.h>



class Tronco
{
public:
    Tronco(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade);
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

#endif // TRONCO_H
