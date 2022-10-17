#include "idiomas.h"

#include <iostream>
#include <algorithm>

using namespace std;

Idiomas::Idiomas()
{

}


void Idiomas::addIdioma(string idioma){

        this->idiomas.push_back(idioma);
        cout<<"ADDIDIOMA: _> STRINH"<<endl;


}

void Idiomas::rmvIdioma(string idioma){
    this->idiomas.remove(idioma);
}

list<string> Idiomas::getIdiomas(){
    return this->idiomas;
}

