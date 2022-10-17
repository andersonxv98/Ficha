#include "atributos.h"

#include "iostream"
Atributos::Atributos(int forca, int destreza, int constituicao, int inteligencia, int sabedoria, int carisma)
{   std::cout<<"valor de força: "<<forca<<std::endl;
    this->setForca(forca);
    std::cout<< "this->forca: "<< this->_forca<<std::endl;
    this->setDestreza(destreza);
     this->setConstituicao(constituicao);
     this->setInteligencia(inteligencia);
     this->setSabedoria(sabedoria);
     this->setCarisma(carisma);

    this->setModForca(this->CalculoModificadorDeAtributo(forca));
    this->setModDestreza(this->CalculoModificadorDeAtributo(destreza));
    this->setModConstituicao(this->CalculoModificadorDeAtributo(constituicao));
    this->setModInteligencia(this->CalculoModificadorDeAtributo(inteligencia));
    this->setModSabedoria(this->CalculoModificadorDeAtributo(sabedoria));
    this->setModCarisma(this->CalculoModificadorDeAtributo(carisma));
}


int Atributos::CalculoModificadorDeAtributo(int atributovalue){
    int modificador = 0;
    if(atributovalue == 1){
        modificador = - 5;
    }
    else if(atributovalue == 2 || atributovalue == 3){
        modificador = - 4;
    }
    else if(atributovalue == 4 || atributovalue == 5){
        modificador = - 3;
    }
    else if(atributovalue == 6 || atributovalue == 7){
        modificador = - 2;
    }
    else if(atributovalue == 8 || atributovalue == 9){
        modificador = -1;
    }
    else if(atributovalue == 10 || atributovalue == 11){
        modificador = 0;
    }
    else if(atributovalue == 12 || atributovalue == 13){
        modificador = 1;
    }
    else if(atributovalue == 14 || atributovalue == 15){
        modificador = 2;
    }
    else if(atributovalue == 16 || atributovalue == 17){
        modificador = 3;
    }
    else if(atributovalue == 18 || atributovalue == 19){
        modificador = 4;
    }
    else if(atributovalue == 20 || atributovalue == 21){
        modificador = 5;
    }
    else {
        modificador = 9999;
        }

            return modificador;
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

void Atributos::setModForca(int modforca){
    this->mod_forca = modforca;
}
void Atributos::setModDestreza(int moddestreza){
    this->mod_destreza = moddestreza;
}
void Atributos::setModConstituicao(int modconstituicao){
    this->mod_constituicao = modconstituicao;
}
void Atributos::setModInteligencia(int modinteligencia){
    this->mod_inteligencia = modinteligencia;
}
void Atributos::setModSabedoria(int modsabedoria){
    this->mod_sabedoria = modsabedoria;
}
void Atributos::setModCarisma(int modcarisma){
    this->mod_carisma = modcarisma;
}




//Gets ATribuytos;
int Atributos::getId(){
    return this->id;
}

int Atributos::getForca(){
    std::cout<<"VALOR FORCA NO RETORNO: "<< this->_forca<<std::endl;
    return this->_forca;
}

int Atributos::getDestreza(){
     std::cout<<"VALOR destreza NO RETORNO: "<< this->_destreza<<std::endl;
    return this->_destreza;
}
int Atributos::getConstituicao(){
     std::cout<<"VALOR constituicao NO RETORNO: "<< this->_constituicao<<std::endl;
    return this->_constituicao;
}

int Atributos::getInteligencia(){
     std::cout<<"VALOR indeligencia NO RETORNO: "<< this->_inteligencia<<std::endl;
    return this->_inteligencia;
}

int Atributos::getSabedoria(){
     std::cout<<"VALOR sabedoria NO RETORNO: "<< this->_sabedoria<<std::endl;
    return this->_sabedoria;
}

int Atributos::getCarisma(){
     std::cout<<"VALOR carisma NO RETORNO: "<< this->_carisma<<std::endl;
    return this->_carisma;
}


int Atributos::getModForca(){
    return this->mod_forca;
}

int Atributos::getModDestreza(){
    return this->mod_destreza;
}
int Atributos::getModConstituicao(){
    return this->mod_constituicao;
}

int Atributos::getModInteligencia(){
    return this->mod_inteligencia;
}

int Atributos::getModSabedoria(){
    return this->mod_sabedoria;
}

int Atributos::getModCarisma(){
    return this->mod_carisma;
}
