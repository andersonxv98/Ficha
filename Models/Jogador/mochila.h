#ifndef MOCHILA_H
#define MOCHILA_H


#include "Models/Equipamentos/objetoequipamento.h"
class Mochila
{
public:
    Mochila(double capacidade_total);

    double getCapacidadeAtual();
    double getCapacidadeTotal();
    list<ObjetoEquipamento> getTodosObjetosNaMochila();

    void addObjetoNaMochila(ObjetoEquipamento obj);
    void rmvObjetoDaMochila(ObjetoEquipamento obj);
private:
    int id;
    list<ObjetoEquipamento> _objetos;
    double capacidade_total;
    double capacidade_atual;

    void setCapacidadeTotal(double capacidade);
    void setCapacidadeAtual(double capacidade);


};

#endif // MOCHILA_H
