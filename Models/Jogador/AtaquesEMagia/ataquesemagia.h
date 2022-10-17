#ifndef ATAQUESEMAGIA_H
#define ATAQUESEMAGIA_H

#include "componentes.h"

#include <string>

using namespace std;

class AtaquesEMagia
{
public:
    AtaquesEMagia(string nome,string nvl,string custo_acao, string alcance, Componentes &componente, string materiais, string duracao, string descricao);

    string getCustoAcao();
    string getAlcance();
    Componentes getCompoenentes();
    string getMateriais();
    string getNome();
    string getDuracao();
    string getDescricao();
    string getNvl();
    int getId();
private:
    static int contador;
    int id;
    string nome;
    string custo_acao;
    string alcance;
    Componentes componentes;
    string materiais;
    string duracao;
    string descricao;
    string nvl;



    void setId(int i);
    void setDescricao(string descricao);
    void setCustoAcao(string custo);
    void setAlcance(string alcance);
    void setComponentes(Componentes &componente);
    void setMateriais(string material);
    void setNome(string nome);
    void setDuracao(string duracao);
    void setNvl(string nvl);
};

#endif // ATAQUESEMAGIA_H
