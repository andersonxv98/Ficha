#include "caracteristicasehabilidades.h"

CaracteristicasEHabilidades::CaracteristicasEHabilidades()
{

}

void CaracteristicasEHabilidades::addCaracteristicaEHabilidade(string s)
{
    this->list_caracteristicaehabilidades.push_back(s);
}

void CaracteristicasEHabilidades::rmvCaracteristicaEHabilidade(string s)
{
    this->list_caracteristicaehabilidades.remove(s);
}

list<string> CaracteristicasEHabilidades::getListCaracteristicas()
{
    return this->list_caracteristicaehabilidades;
}
