#ifndef JOGADOR_H
#define JOGADOR_H
#include "Models/Jogador/atributos.h"
#include "Models/Jogador/mochila.h"
#include "Models/Jogador/tracos.h"
#include "caracteristicas.h"
#include "equipados.h"
#include "idiomas.h"
#include "status.h"

#include <string>


#include <Models/Jogador/AtaquesEMagia/listaataquesemagias.h>

#include <Models/Jogador/Proeficiencias/proeficiencias.h>

using namespace std;

class Jogador
{
public:
    Jogador(Caracteristicas &caracteristicas, Atributos &atributos, Status &status, Tracos &tracos, Equipados &equipados, Mochila &mochila, ListaAtaquesEMagias &listaAtaquesEmagias, Proeficiencias &proeficiencias, Idiomas &idiomas, int proeficiencia);

    void atribuiInspiracao(bool inspiracao);

    Caracteristicas getCaracteristicas();
    Atributos getAtributos();
    Status getStatus();
    Tracos getTracos();
    Equipados getEquipados();
    Mochila getMochila();
    int getPercepcao();
    ListaAtaquesEMagias getListaAtaquesEMagias();
    Proeficiencias getProeficiencias();
    Idiomas getIdiomas();

    bool getInspiracao();
private:
    int id;
    Caracteristicas *_caracteristicas;

    Atributos *_atributos;
    Status *_status;
    Tracos *_tracos;

    Equipados *_equipados;
    Mochila *_mochila;
    int _percepcao; //lembrar de fazer o calculo da percepção com base no atributo (charisma modificador)
    ListaAtaquesEMagias *lista_ataquesEmagias;
    Proeficiencias *_proeficiencias;
    Idiomas *_idiomas;
    bool _inspiracao;

    void setInspiracao(bool inspiracao);
    void setPercepcao(int percepcao);
    void setInspiracaa(bool inspiracao);

    void setCaracteristicas(Caracteristicas &caracteristica);
    void setAtributos(Atributos &atributos);
    void setStatus(Status &status);
    void setTracos(Tracos &tracos);
    void setEquipados(Equipados &equipados);
    void setMochila(Mochila &mochila);
    void setListaAtaquesEMagias(ListaAtaquesEMagias &listaAtaqueseMagias);
    void setProeficiencias(Proeficiencias &proeficiencias);
    void setIdiomas(Idiomas &idiomas);


};

#endif // JOGADOR_H
