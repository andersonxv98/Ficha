#include "atributos.h"

Atributos::Atributos(int forca, int destreza, int constituicao, int inteligencia, int sabedoria, int carisma)
{
    this->setForca(forca);
    Atributos::setDestreza(destreza);
    Atributos::setConstituicao(constituicao);
    Atributos::setInteligencia(inteligencia);
    Atributos::setSabedoria(sabedoria);
    Atributos::setCarisma(carisma);
}




//Sets Atributos
void Atributos::setForca(int forca){
    this->_forca = forca;
}
void Atributos::setDestreza(int destreza){
    this->_destreza = destreza;
}
void Atributos::setConstituicao(int constituicao){
    this->_constituicao = constituicao;
}
void Atributos::setInteligencia(int inteligencia){
    this->_inteligencia = inteligencia;
}
void Atributos::setSabedoria(int sabedoria){
    this->_sabedoria = sabedoria;
}
void Atributos::setCarisma(int carisma){
    this->_carisma = carisma;
}



//Gets ATribuytos;
int Atributos::getId(){
    return this->id;
}

int Atributos::getForca(){
    return this->_forca;
}

int Atributos::getDestreza(){
    return this->_destreza;
}
int Atributos::getConstituicao(){
    return this->_constituicao;
}

int Atributos::getInteligencia(){
    return this->_inteligencia;
}

int Atributos::getSabedoria(){
    return this->_sabedoria;
}

int Atributos::getCarisma(){
    return this->_carisma;
}
