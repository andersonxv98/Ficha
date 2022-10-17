#ifndef MOCHILA_H
#define MOCHILA_H


#include "Models/Equipamentos/objetoequipamento.h"
class Mochila
{
public:
    Mochila(double capacidade_total);

    double getCapacidadeAtual();
    double getCapacidadeTotal();
    list<Arma *> getTodosObjetosNaMochila();

    void addObjetoNaMochila(Arma * obj);
    void rmvObjetoDaMochila(int  id_item);
private:
    int id;
    list<Arma*> _objetos;
    double capacidade_total;
    double capacidade_atual;
    void setCapacidadeTotal(double capacidade);
    void setCapacidadeAtual(double capacidade);
};

#endif // MOCHILA_H
