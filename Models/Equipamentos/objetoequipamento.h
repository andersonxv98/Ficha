#ifndef OBJETOEQUIPAMENTO_H
#define OBJETOEQUIPAMENTO_H
#include "armadura.h"
#include "arma.h"
#include "equipamento_aventura.h"
#include "ferramentas.h"
#include "outros.h"

class ObjetoEquipamento
{
public:
    ObjetoEquipamento(Armadura &armadura, Arma &arma, Equipamento_Aventura &equipamento_aventura, Ferramentas &ferramenta, Outros &outro);
    int getId();

    Armadura * _armadura;
    Arma * _arma;
    Equipamento_Aventura * _equipamento_aventura;
    Ferramentas * _ferramentas;
    Outros * _outros;

    double getPeso();
private:
    int id;
    double peso;




};

#endif // OBJETOEQUIPAMENTO_H
