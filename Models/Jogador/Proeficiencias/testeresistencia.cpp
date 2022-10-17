#include "testeresistencia.h"
#include <iostream>
TesteResistencia::TesteResistencia(Atributos &atributos)
{   int modforca = atributos.getModForca();
    int moddes = atributos.getModDestreza();
    int modcon = atributos.getModConstituicao();
    int modint = atributos.getModInteligencia();
    int modsab = atributos.getModSabedoria();
    int modcar = atributos.getModCarisma();
    std::cout<<"CONTRUTOR TESTERESISTENCIA:: "<<modint<<std::endl;

    this-> setForca( modforca);
     this-> setDestreza( moddes);
     this-> setConstituicao( modcon);
     this-> setInteligencia( modint);
     this-> setSabedoria( modsab);
     this-> setCarisma( modcar);
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
{   std::cout<<"SETTING INTELIGENCIA: "<<inteligencia<<std::endl;
    this->inteligencia = inteligencia;
     std::cout<<"SETTING INTELIGENCIA: THIS_>"<<this->inteligencia<<std::endl;
}

void TesteResistencia::setSabedoria(int sabedoria){
    this->sabedoria = sabedoria;
}

void TesteResistencia::setCarisma(int carisma){
    this->carisma = carisma;
}

int TesteResistencia::getForcaResist(){
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
     std::cout<<"RETORNO  INTELIGENCIA RESISTENCIA: "<<this->inteligencia<<std::endl;
    return this->inteligencia;

}
int TesteResistencia::getSabedoria(){
    return this->sabedoria;
}


