#include "listaataquesemagias.h"

ListaAtaquesEMagias::ListaAtaquesEMagias()
{

}

void ListaAtaquesEMagias::addAtaqueMagiaNaLista(AtaquesEMagia AM){
     cout<<"ADDAtaquMAGIA"<<endl;
    //this->_listaAtaqueseMagias.push_back(AM);
}
void ListaAtaquesEMagias::rmvAtaqueMagiaNaLista(AtaquesEMagia AM){
    cout<<"rmvAtaquMAGIA"<<endl;
    //this->_listaAtaqueseMagias.remove(AM);
}
list<AtaquesEMagia> ListaAtaquesEMagias::getListaAtaquesEMagia(){
    return this->_listaAtaqueseMagias;
}
