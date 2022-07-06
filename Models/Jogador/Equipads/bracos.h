#ifndef BRACOS_H
#define BRACOS_H
#include <Models/Equipamentos/objetoequipamento.h>

class Bracos
{
public:
    Bracos(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade);
    ObjetoEquipamento getObj();
    int getDurabilidade();
    string getSaude();
    void setSaude();
 private:
    ObjetoEquipamento * _obj_equipamento;
   void setObjetoEquipamento(ObjetoEquipamento obj);
    string estado; //ferido, arranhado, cortado, quebrado etc;;
    int durabilidade;
    void setDurabilidade(int durabilidade);
};

#endif // BRACOS_H
