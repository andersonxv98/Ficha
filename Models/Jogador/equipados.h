#ifndef EQUIPADOS_H
#define EQUIPADOS_H

#include <Models/Jogador/Equipads/bracos.h>
#include <Models/Jogador/Equipads/maodireita.h>
#include <Models/Jogador/Equipads/maoesquerda.h>
#include <Models/Jogador/Equipads/ombrodireito.h>
#include <Models/Jogador/Equipads/ombroesquerdo.h>
#include <Models/Jogador/Equipads/pernas.h>
#include <Models/Jogador/Equipads/tronco.h>
#include <Models/Jogador/Equipads/pes.h>
#include <iostream>






class Equipados
{
public:
    Equipados(Bracos &braco, Bracos &bracoesquerdo, Maodireita &mao, Maoesquerda &maoesquerda, Ombrodireito &ombro, Ombroesquerdo &ombroesquerdo, Pernas &pernadireita, Pernas &pernaesquerda, Tronco &tronco, double capacidade);
    Bracos *getBracodireito( );
    Bracos *getBracoesquerdo( );
    Maodireita *getMaodireita( );
    Maoesquerda *getMaoesquerda( );
    Ombroesquerdo *getOmbroesquerdo( );
    Ombrodireito *getOmbrodireito( );
    Pernas *getPernaesquerda( );
    Pernas *getPernadireita( );
    Botas *getPeesquerdo( );
    Botas *getPedireito( );
    Tronco *getTronco( );
    double getCapacidadeDeCarga();
    double getCapacidadeAtual();
    int getId();
private:
    int id;

    Bracos *bracos_direito;
    Bracos *bracos_esquerdo;
    Maodireita *mao_direita;
    Maoesquerda *mao_esquerda;
    Ombrodireito *ombro_direito;
    Ombroesquerdo *ombro_esquerdo;
    Pernas *perna_esquerda;
    Pernas *perna_direita;
    Botas *pe_esquerdo;
    Botas *pe_direito;
    Tronco *tronco;
    double capacidade_deCarga;
    double capacidade_Atual;

    void setBracodireito(Bracos &braco);
    void setBracoesquerdo(Bracos &braco);
    void setMaodireita(Maodireita &mao);
    void setMaoesquerda(Maoesquerda &mao);
    void setOmbroesquerdo(Ombroesquerdo &ombro);
    void setOmbrodireito(Ombrodireito &ombro);
    void setPernaesquerda(Pernas &perna);
    void setPernadireita(Pernas &perna);
    void setPeesquerdo(Botas &bota);
    void setPedireito(Botas &bota);
    void setTronco(Tronco &tronco);
    void setCapacidadeTotal(double capacidade);


};

#endif // EQUIPADOS_H
