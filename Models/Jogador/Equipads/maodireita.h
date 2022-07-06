#ifndef MAODIREITA_H
#define MAODIREITA_H

#include <Models/Equipamentos/objetoequipamento.h>
class Maodireita
{
public:
    Maodireita(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade);
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

#endif // MAODIREITA_H
