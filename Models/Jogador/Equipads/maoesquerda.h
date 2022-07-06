#ifndef MAOESQUERDA_H
#define MAOESQUERDA_H
#include <Models/Equipamentos/objetoequipamento.h>
#include <string>

#include <Models/Equipamentos/objetoequipamento.h>

using namespace std;

class Maoesquerda
{
public:
    Maoesquerda(ObjetoEquipamento Obj_equipamento_equipavel, int Durabilidade);
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

#endif // MAOESQUERDA_H
