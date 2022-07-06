#include "testeresistencia.h"

TesteResistencia::TesteResistencia(int forca, int destreza, int constituicao, int inteligencia, int sabedoria, int carisma)
{
    this-> setForca( forca);
     this-> setDestreza( destreza);
     this-> setConstituicao( constituicao);
     this-> setInteligencia( inteligencia);
     this-> setSabedoria( sabedoria);
     this-> setCarisma( carisma);
}

void TesteResistencia::setForca(int forca){
    this->forca = forca;
}

void TesteResistencia::setDestreza(int destreza){
    this->destreza = destreza;
}

void TesteResistencia::setConstituicao(int constituicao){
    this->constituicao = constituicao;
}

void TesteResistencia::setInteligencia(int inteligencia)
{
    this->inteligencia = inteligencia;
}

void TesteResistencia::setSabedoria(int sabedoria){
    this->sabedoria = sabedoria;
}

void TesteResistencia::setCarisma(int carisma){
    this->carisma = carisma;
}

int TesteResistencia::getForca(){
    return this->forca;
}

int TesteResistencia::getDestreza(){
    return this->destreza;
}

int TesteResistencia::getCarisma(){
    return this->carisma;
}
int TesteResistencia::getConstituicao(){
    return this->constituicao;
}
int TesteResistencia::getInteligencia(){
    return this->inteligencia;

}
int TesteResistencia::getSabedoria(){
    return this->sabedoria;
}


