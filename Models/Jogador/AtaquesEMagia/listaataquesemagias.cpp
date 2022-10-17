#include "listaataquesemagias.h"
#include <algorithm>

ListaAtaquesEMagias::ListaAtaquesEMagias()
{

}

void ListaAtaquesEMagias::addAtaqueMagiaNaLista(AtaquesEMagia * AM){
     cout<<"ADDAtaquMAGIA"<<endl;

    this->_listaAtaqueseMagias.push_front(AM);
}
void ListaAtaquesEMagias::rmvAtaqueMagiaNaLista(int id_am){
    cout<<"ENTROU FUNÇÂO DE DELETE DENTRO DA FUNÇÂO LISTAATAQUEMAGIAS"<<endl;
    for(AtaquesEMagia * AM  : _listaAtaqueseMagias ){
        if(AM->getId() == id_am){
            cout<<"ENTROU CONDIÇÂO ATAQUE MAGIA"<<endl;
            this->_listaAtaqueseMagias.remove(AM);
            break;
        }
    }

   //this->_listaAtaqueseMagias.erase(AM);
}
list<AtaquesEMagia*> ListaAtaquesEMagias::getListaAtaquesEMagia(){
    return this->_listaAtaqueseMagias;
}
