#include "ataquesemagia.h"

AtaquesEMagia::AtaquesEMagia(int custo_acao, string alcance, Componentes &componente, string Materiais)
{
    this->setCustoAcao(custo_acao);
    this->setAlcance(alcance);
    this->setComponentes(componente);
    this->setMateriais(materiais);
}


int AtaquesEMagia::getCustoAcao(){
    return this->custo_acao;
}
string AtaquesEMagia::getAlcance(){
    return this->alcance;
}
Componentes AtaquesEMagia::getCompoenentes(){
    Componentes *component =  this->componentes;
    return *component;
}
string AtaquesEMagia::getMateriais(){
    return this->materiais;
}


void AtaquesEMagia::setCustoAcao(int custo){
    this->custo_acao = custo;
}

void AtaquesEMagia::setAlcance(string alcance){
    this->alcance = alcance;
}

void AtaquesEMagia::setComponentes(Componentes componente){
    this->componentes = &componente;
}

void AtaquesEMagia::setMateriais(string materiais){
    this->materiais = materiais;
}

int AtaquesEMagia::getId(){
    return this->id;
}
