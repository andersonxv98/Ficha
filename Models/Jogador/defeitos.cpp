#include "defeitos.h"

Defeitos::Defeitos()
{

}

void Defeitos::addDefeitos(string s)
{

    this->listaDefeitos.push_back(s);
}

void Defeitos::rmvDefeitos(string s)
{
   cout<<"Entreou rmvDefeitos"<<endl;
 this->listaDefeitos.remove(s);




}

list<string>  Defeitos::getListaDefeitos()
{
    return this->listaDefeitos;
}
