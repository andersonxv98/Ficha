#ifndef CARACTERISTICAS_H
#define CARACTERISTICAS_H

#include "Models/Jogador/Caracteristicas/alinhamento.h"
#include <string>
#include <Models/Jogador/Caracteristicas/antecedente.h>
#include <Models/Jogador/Caracteristicas/classes.h>
#include <Models/Jogador/Caracteristicas/pontosxp.h>
#include <Models/Jogador/Caracteristicas/raca.h>
#include <iostream>


using namespace std;

class Caracteristicas
{
public:
    Caracteristicas();
private:
    int id;
    string nome;
    Raca _raca;
    Classe _classe;
    Antecedente _antecedente;
    Alinhamento _alinhamento;
    PontosXP _pnt_xp;
};

#endif // CARACTERISTICAS_H
