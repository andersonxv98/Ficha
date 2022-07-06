#include "jogador.h"

Jogador::Jogador(Caracteristicas &caracteristicas, Atributos &atributos, Status &status, Tracos &tracos, Equipados &equipados, Mochila &mochila, ListaAtaquesEMagias &listaAtaquesEmagias, Proeficiencias &proeficiencias, Idiomas &idiomas, int percepcao)
{
   // this-> setInspiracao( inspiracao);
  this-> setCaracteristicas(caracteristicas);
  this-> setAtributos(atributos);
  this-> setStatus(status);
  this-> setTracos(tracos);
  this-> setEquipados(equipados);
  this-> setMochila(mochila);
  this-> setPercepcao(percepcao);
  this-> setListaAtaquesEMagias(listaAtaquesEmagias);
  this-> setProeficiencias(proeficiencias);
  this-> setIdiomas(idiomas);
  this-> setInspiracao(false);
}

void Jogador::setCaracteristicas(Caracteristicas &caracteristicas){

    this->_caracteristicas =  &caracteristicas;
}

void Jogador::setAtributos(Atributos &atributos){
    this->_atributos  = &atributos;
}

void Jogador::setStatus(Status &status){
    this->_status = &status;
}

void Jogador::setTracos(Tracos &tracos){
    this->_tracos = &tracos;
}

void Jogador::setMochila(Mochila &mochila){
    this->_mochila = &mochila;
}

void Jogador::setPercepcao(int percepcao){
    this->_percepcao = percepcao;
}

void Jogador::setListaAtaquesEMagias(ListaAtaquesEMagias &lista){
    this->lista_ataquesEmagias = &lista;
}

void Jogador::setProeficiencias(Proeficiencias &pro){
    this->_proeficiencias = &pro;
}

void Jogador::setIdiomas(Idiomas &idiomas){
    this->_idiomas = &idiomas;
}

void Jogador::setEquipados(Equipados &equipados){
    this->_equipados = &equipados;
}

void Jogador::setInspiracao(bool  inspiracao){
    this->_inspiracao = inspiracao;

}

Caracteristicas Jogador::getCaracteristicas(){
    Caracteristicas *carac = this->_caracteristicas;
    return *carac;
}
Atributos Jogador::getAtributos(){
    Atributos *atrib = this->_atributos;
    return *atrib;
}
Status Jogador::getStatus(){
    Status *status = this->_status;
    return *status;
}

Tracos Jogador::getTracos(){
    Tracos *tracos = this->_tracos;
    return *tracos;
}
Equipados Jogador::getEquipados(){
    Equipados *equip = this->_equipados;
    return *equip;
}
Mochila Jogador::getMochila(){
    Mochila *moch = this->_mochila;
    return *moch;
}
int Jogador::getPercepcao(){
    return this->_percepcao;
}
ListaAtaquesEMagias Jogador::getListaAtaquesEMagias(){
    ListaAtaquesEMagias *lista = this->lista_ataquesEmagias;
    return *lista;
}
Proeficiencias Jogador::getProeficiencias(){
    Proeficiencias *proef = this->_proeficiencias;
    return *proef;
}
Idiomas Jogador::getIdiomas(){
    Idiomas *idi = this->_idiomas;
    return *idi;
}
bool Jogador::getInspiracao(){
    return this->_inspiracao;
}
