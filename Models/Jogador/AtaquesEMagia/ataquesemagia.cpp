#include "ataquesemagia.h"
#include <iostream>

AtaquesEMagia::AtaquesEMagia(string nome, string nvl,string custo_acao, string alcance, Componentes &componente, string materiais, string duracao, string descricao)
    : componentes(componente)

{   this->setId(contador);
    this->setNome(nome);
    this->setCustoAcao(custo_acao);
    this->setAlcance(alcance);
    this->setComponentes(componente);
    this->setMateriais(materiais);
    this->setDuracao(duracao);
    this->setDescricao(descricao);
    this->setNvl(nvl);
    this->contador++;
    cout<<"Quantidade de INSTANCIAS: "<<this->id<<endl;
}

int AtaquesEMagia::contador = 0;

string AtaquesEMagia::getCustoAcao(){
    return this->custo_acao;
}
string AtaquesEMagia::getAlcance(){
    return this->alcance;
}
Componentes AtaquesEMagia::getCompoenentes(){
    //Componentes *component =  this->componentes;
    return this->componentes;
}
string AtaquesEMagia::getMateriais(){
    return this->materiais;
}

string AtaquesEMagia::getNome()
{
    return this->nome;
}

string AtaquesEMagia::getDuracao()
{return this->duracao;

}

string AtaquesEMagia::getDescricao()
{
    return this->descricao;
}

string AtaquesEMagia::getNvl()
{
    return this->nvl;
}


void AtaquesEMagia::setCustoAcao(string custo){
    this->custo_acao = custo;
}

void AtaquesEMagia::setAlcance(string alcance){
    this->alcance = alcance;
}

void AtaquesEMagia::setComponentes(Componentes &componente){
    this->componentes = componente;
}

void AtaquesEMagia::setMateriais(string materiais){
    this->materiais = materiais;
}

void AtaquesEMagia::setNome(string nome)
{
    this->nome = nome;
}

void AtaquesEMagia::setDuracao(string duracao)
{this->duracao = duracao;

}

void AtaquesEMagia::setNvl(string nvl)
{
    this->nvl = nvl;
}

int AtaquesEMagia::getId(){
    return this->id;
}

void AtaquesEMagia::setId(int id)
{
this->id = id;
}

void AtaquesEMagia::setDescricao(string descricao)
{
    this->descricao = descricao;
}
