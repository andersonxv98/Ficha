#include "proeficiencias.h"

Proeficiencias::Proeficiencias(Pericias &pericias, TesteResistencia &resitencia, int bonus)
    : _pericias(pericias), _resitencia(resitencia)
{
   //this->setPericias(pericias);
    //this->setTesteResistencia(resitencia);
    this->setBonus(bonus);
}


void Proeficiencias::setPericias(Pericias &p){
    this->_pericias = p;
}

void Proeficiencias::setTesteResistencia(TesteResistencia &t){
    this->_resitencia = t;
}

void Proeficiencias::setBonus(int b){
    this->bonus = b;
}

Pericias Proeficiencias::getPericias(){
    return this->_pericias;
}

void Proeficiencias::alterarBonus(int v)
{
this->_pericias.setBonus(v);
}

/*void Proeficiencias::alterarBonus(int v)
{
this->setBonus(v);
}*/

TesteResistencia Proeficiencias::getTesteResistencia(){
    return this->_resitencia;
}

int Proeficiencias::getBonus(){
    return this->getPericias().getBonus();

}
