#ifndef TRACOS_H
#define TRACOS_H
#include "Models/Jogador/Tracos/personalidade.h"
#include <list>
#include <Models/Jogador/Tracos/fraquezas.h>
#include <Models/Jogador/Tracos/ideais.h>
#include <Models/Jogador/Tracos/vinculos.h>
using namespace std;
class Tracos
{
public:
    Tracos(Personalidade _personalidade, Ideais _ideia, Vinculos _vinculo, Fraquezas _fraqueza);

    list<Personalidade> getPersonalidades();
    list<Ideais> getIdeais();
    list<Vinculos> getVinculos();
    list<Fraquezas> getFraquezas();
private:
    int id;
    list<Personalidade> _personalidades;
    list<Ideais> _ideais;
    list<Vinculos> _vinculos;
    list<Fraquezas> _fraquezas;

    void addPersonalidade(Personalidade _personalidade);
    void addIdeais(Ideais _ideia);
    void addVinculos(Vinculos _vinculo);
    void addFraquezas(Fraquezas _fraqueza);
};

#endif // TRACOS_H
