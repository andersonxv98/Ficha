#include "componentes.h"

Componentes::Componentes(bool verbal, bool gestos, bool material)
{
    this->setVerbal(verbal);
    this->setGestos(gestos);
    this->setMaterial(material);
}

void Componentes::setVerbal(bool verbal){
    this->verbal = verbal;
}

void Componentes::setGestos(bool gestos){
    this->gestos = gestos;
}

void Componentes::setMaterial(bool material){
    this->material = material;
}

bool Componentes::getGestos(){
    return this->gestos;
}

bool Componentes::getMaterial(){
    return this->material;
}

void Componentes::changeV()
{
    if(this->getVerbal()){
           this->verbal  = false;
       }
       else{
           this->verbal = true;
       }
}

void Componentes::changeS()
{
    if(this->getGestos()){
           this->gestos  = false;
       }
       else{
           this->gestos = true;
       }
}

void Componentes::changeM()
{   if(this->getMaterial()){
        this->material  = false;
    }
    else{
        this->material = true;
    }
}

void Componentes::reset()
{
    this->gestos = false;
    this->material = false;
    this->verbal = false;
}

string Componentes::getStringVerbal(){
    string y = "true";
    if(this->verbal == false){
       y = "false";
    }
    return y;
}

string Componentes::getStringGestos(){
    string y = "true";
    if(this->gestos == false){
       y = "false";
    }
    return y;
}

string Componentes::getStringMateriais(){
    string y = "true";
    if(this->material == false){
       y = "false";
    }
    return y;
}
bool Componentes::getVerbal(){
    return this->verbal;
}

