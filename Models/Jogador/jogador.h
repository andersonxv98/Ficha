#ifndef JOGADOR_H
#define JOGADOR_H
#include "Models/Jogador/atributos.h"
#include "Models/Jogador/mochila.h"
#include "Models/Jogador/tracos.h"

#include "caracteristicas.h"
#include "caracteristicasehabilidades.h"
#include "defeitos.h"
#include "equipados.h"
#include "idiomas.h"
#include "ligacoes.h"
#include "status.h"



#include <Models/Jogador/AtaquesEMagia/listaataquesemagias.h>

#include <Models/Jogador/Proeficiencias/proeficiencias.h>

#include <Models/Jogador/ideais.h>



class Jogador
{
public:
    Jogador(Caracteristicas &caracteristicas, Ideais * ideais,Defeitos * defeitos,Ligacoes * ligacoes,CaracteristicasEHabilidades *cah, Atributos &atributos, Status &status, Tracos * tracos, Mochila * mochila, ListaAtaquesEMagias  *listaAtaquesEmagias, Proeficiencias &proeficiencias, Idiomas *idiomas);

    void atribuiInspiracao(bool inspiracao);

    Caracteristicas    getCaracteristicas();
    CaracteristicasEHabilidades * getCaracteristicasEHabilidades();
    Atributos  getAtributos();
    Status getStatus();
    Tracos * getTracos();
    Equipados getEquipados();
    Mochila * getMochila();
    int getPercepcao();
    ListaAtaquesEMagias * getListaAtaquesEMagias();
    Proeficiencias getProeficiencias();
    Idiomas * getIdiomas();
    Ligacoes * getLigacoes();
    Defeitos * getDefeitos();
    Ideais * getIdeais();
    bool getInspiracao();

    void alterarBonus(int b);
private:
    int id;
    Caracteristicas   _caracteristicas;

    Atributos _atributos;
    Status _status;
    Tracos * _tracos;
    CaracteristicasEHabilidades  * cah;
    //Equipados *_equipados;
    Mochila *  _mochila;
    int _percepcao; //lembrar de fazer o calculo da percepção com base no atributo (charisma modificador)
    ListaAtaquesEMagias * lista_ataquesEmagias;
    Proeficiencias _proeficiencias;
    Idiomas * _idiomas;
    Ligacoes * ligacoes;
    Defeitos * _defeitos;
    Ideais * _ideais;
    bool _inspiracao;

    void setInspiracao(bool inspiracao);
    void setPercepcao(int percepcao);
    void setInspiracaa(bool inspiracao);

    void setCaracteristicas(Caracteristicas caracteristica);
    void setAtributos(Atributos atributos);
    void setStatus(Status status);
    void setTracos(Tracos *tracos);
    void setEquipados(Equipados equipados);
    void setMochila(Mochila * mochila);
    //void setListaAtaquesEMagias(ListaAtaquesEMagias listaAtaqueseMagias);
    void setProeficiencias(Proeficiencias proeficiencias);
    void setIdiomas(Idiomas idiomas);
    void setCaracteristicaEHabilidades(CaracteristicasEHabilidades * cah);


    void setPercepcao(int proef, int mod_sab);
};

#endif // JOGADOR_H
