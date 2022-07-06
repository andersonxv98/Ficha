#include "equipados.h"

Equipados::Equipados(Bracos &braco, Bracos &bracoesquerdo, Maodireita &mao, Maoesquerda &maoesquerda, Ombrodireito &ombro, Ombroesquerdo &ombroesquerdo, Pernas &pernadireita, Pernas &pernaesquerda, Tronco &tronco, double capacidade)
{
    this->setBracodireito(braco);
    this->setBracoesquerdo(bracoesquerdo);
    this->setMaodireita(mao);
    this->setMaoesquerda(maoesquerda);
    this->setOmbrodireito(ombro);
    this->setOmbroesquerdo(ombroesquerdo);
    this->setPernadireita(pernadireita);
    this->setPernaesquerda(pernaesquerda);
    this->setTronco(tronco);
    this->setCapacidadeTotal(capacidade);
}

void Equipados::setBracodireito(Bracos &braco){
    this->bracos_direito = &braco;
}
void Equipados::setBracoesquerdo(Bracos &braco){
    this->bracos_esquerdo = &braco;
}
void Equipados::setMaodireita(Maodireita &mao){
    this->mao_direita = &mao;
}
void Equipados::setMaoesquerda(Maoesquerda &mao){
    this->mao_esquerda = &mao;
}
void Equipados::setOmbroesquerdo(Ombroesquerdo &ombro){
    this->ombro_esquerdo = &ombro;
}
void Equipados::setOmbrodireito(Ombrodireito &ombro){
    this->ombro_direito = &ombro;
}
void Equipados::setPernaesquerda(Pernas &perna){
    this->perna_esquerda = &perna;
}
void Equipados::setPernadireita(Pernas &perna){
    this->perna_direita  = &perna;
}
void Equipados::setPeesquerdo(Botas &bota){
    this->pe_esquerdo = &bota;
}
void Equipados::setPedireito(Botas &bota){
    this->pe_direito = &bota;
}
void Equipados::setTronco(Tronco &tronco){
    this->tronco = &tronco;
}
void Equipados::setCapacidadeTotal(double capacidade){
    this->capacidade_deCarga = capacidade;
}

Bracos* Equipados::getBracodireito( ){
    Bracos *brac = this->bracos_direito;
    return brac;
}
Bracos * Equipados::getBracoesquerdo( ){
    Bracos *brac = this->bracos_esquerdo;
    return brac;
}
Maodireita * Equipados::getMaodireita( ){
    Maodireita *mao=  this->mao_direita;
    return mao;
}
Maoesquerda *Equipados::getMaoesquerda( ){
    Maoesquerda *mao = this->mao_esquerda;
    return mao;
}
Ombroesquerdo* Equipados::getOmbroesquerdo( ){
    Ombroesquerdo *ombro = this->ombro_esquerdo;
    return ombro;
}
Ombrodireito *Equipados::getOmbrodireito( ){
    Ombrodireito *ombro = this->ombro_direito;
    return ombro;
}
Pernas* Equipados::getPernaesquerda( ){
    Pernas *perna = this->perna_esquerda;
    return perna;
}
Pernas* Equipados::getPernadireita( ){
   Pernas *perna = this->perna_direita;
   return perna;
}
Botas* Equipados::getPeesquerdo( ){
    Botas *pe = this->pe_esquerdo;
    return pe;
}
Botas *Equipados::getPedireito( ){
    Botas *pe = this->pe_direito;
    return pe;
}
Tronco* Equipados::getTronco( ){
    Tronco *tronco = this->tronco;
    return tronco;
}
double Equipados::getCapacidadeDeCarga(){
    return this->capacidade_deCarga;
}
double Equipados::getCapacidadeAtual(){
    return this->capacidade_Atual;
}

int Equipados::getId(){
    return this->id;
}
