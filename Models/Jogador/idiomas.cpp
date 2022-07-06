#include "idiomas.h"

#include <iostream>
#include <algorithm>

using namespace std;

Idiomas::Idiomas()
{

}

void Idiomas::addIdioma(string idioma){
    for(string dioma : this->idiomas){
        if(dioma == idioma){
            return;
        }
         this->idiomas.push_back(idioma);
    }
    return;


}

void Idiomas::rmvIdioma(string idioma){
    this->idiomas.push_back(idioma);
}

list<string> Idiomas::getIdiomas(){
    return this->idiomas;
}

