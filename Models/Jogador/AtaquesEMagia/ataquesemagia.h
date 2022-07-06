#ifndef ATAQUESEMAGIA_H
#define ATAQUESEMAGIA_H

#include "componentes.h"

#include <string>

using namespace std;

class AtaquesEMagia
{
public:
    AtaquesEMagia(int custo_acao, string alcance, Componentes &componente, string Materiais);

    int getCustoAcao();
    string getAlcance();
    Componentes getCompoenentes();
    string getMateriais();
    int getId();
private:
    int id;
    int custo_acao;
    string alcance;
    Componentes *componentes;
    string materiais;

    void setCustoAcao(int custo);
    void setAlcance(string alcance);
    void setComponentes(Componentes componente);
    void setMateriais(string material);
};

#endif // ATAQUESEMAGIA_H
