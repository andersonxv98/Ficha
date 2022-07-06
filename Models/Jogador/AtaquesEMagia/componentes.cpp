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

bool Componentes::getVerbal(){
    return this->verbal;
}

