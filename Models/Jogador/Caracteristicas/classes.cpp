#include "classes.h"

Classe::Classe(string classe)
{
    this->setClasse(classe);
}

void Classe::setClasse(string classe){
    this->classe = classe;
}

string Classe::getClasse() { return this->classe;}
