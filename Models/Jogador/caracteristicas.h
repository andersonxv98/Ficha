#ifndef CARACTERISTICAS_H
#define CARACTERISTICAS_H

#include "Models/Jogador/Caracteristicas/alinhamento.h"
#include <string>
#include <Models/Jogador/Caracteristicas/antecedente.h>
#include <Models/Jogador/Caracteristicas/classes.h>
#include <Models/Jogador/Caracteristicas/pontosxp.h>
#include <Models/Jogador/Caracteristicas/raca.h>
#include <QString>
#include <iostream>


using namespace std;

class Caracteristicas
{
public:
    Caracteristicas(string nome, string nome_jogador,Raca &raca, Classe &classe, Antecedente &antecedente, Alinhamento &alinhamento, PontosXP &xp);

    string getNomeJogador();
    string   getNome();
    Raca  getRaca( );
    Classe getClasse( );
    Antecedente getAntecedente( );
    Alinhamento getAlinhamento( );
    PontosXP getPontosxp( );

    void addPontoxp();
private:
    int id;
    string nome;
    string nomejogador;
    Raca _raca;
    Classe _classe;
    Antecedente _antecedente;
    Alinhamento _alinhamento;
    PontosXP _pnt_xp;




    void setNome(string nome);
    void setNomeJogador(string nome);
    void setRaca(Raca raca);
    void setClasse(Classe classe);
    void setAntecedente(Antecedente antecedente);
    void setAlinhamento(Alinhamento alinhamento);
    void setPontosxp(PontosXP pontosxp);
};

#endif // CARACTERISTICAS_H
