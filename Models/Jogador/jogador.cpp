#include "jogador.h"

Jogador::Jogador(Caracteristicas &caracteristicas, Ideais * ideais, Defeitos * defeitos, Ligacoes * ligacoes, CaracteristicasEHabilidades *cah, Atributos &atributos, Status &status, Tracos * tracos, Mochila  * mochila, ListaAtaquesEMagias * listaAtaquesEmagias, Proeficiencias &proeficiencias, Idiomas * idiomas)
    : _caracteristicas(caracteristicas), _atributos(atributos),_status(status) , _proeficiencias(proeficiencias)
{
    this->_idiomas = idiomas;
    this->lista_ataquesEmagias = listaAtaquesEmagias;
    this->_mochila =(mochila);
    this->_tracos = (tracos);
    this->_ideais = (ideais);
    this->ligacoes = (ligacoes);
    this->_defeitos = (defeitos);
    this-> cah = (cah);
   // this-> setInspiracao( inspiracao);
  //this-> setCaracteristicas(caracteristicas);
  //this-> setAtributos(atributos);
  //this-> setStatus(status);
  //this-> setTracos(tracos);
  //this-> setEquipados(equipados);
  //this-> setMochila(mochila);
  //this-> setPercepcao(percepcao);
  //this-> setListaAtaquesEMagias(listaAtaquesEmagias);
  //this-> setProeficiencias(proeficiencias);
  //this-> setIdiomas(idiomas);
  //this-> setInspiracao(false);
   // this->setPercepcao(0,atributos.getModSabedoria());
}

void Jogador::setCaracteristicas(Caracteristicas caracteristicas){

    this->_caracteristicas =  caracteristicas;
}

void Jogador::setAtributos(Atributos atributos){
    this->_atributos  = atributos;
}

void Jogador::setStatus(Status status){
    this->_status = status;
}

void Jogador::setTracos(Tracos * tracos){
    this->_tracos = tracos;
}

void Jogador::setMochila(Mochila * mochila){
    this->_mochila = mochila;
}

void Jogador::setPercepcao(int proeficiencia, int mod_sab){
    this->_percepcao = 10 + proeficiencia + mod_sab;
}

void Jogador::setProeficiencias(Proeficiencias pro){
    this->_proeficiencias = pro;
}

void Jogador::setIdiomas(Idiomas idiomas){
    this->_idiomas = &idiomas;
}

void Jogador::setCaracteristicaEHabilidades(CaracteristicasEHabilidades * cah)
{
    this->cah = cah;
}

void Jogador::setInspiracao(bool  inspiracao){
    this->_inspiracao = inspiracao;

}

Caracteristicas   Jogador::getCaracteristicas(){
    //Caracteristicas car = this->_caracteristicas;
    return this->_caracteristicas;
}

CaracteristicasEHabilidades * Jogador::getCaracteristicasEHabilidades()
{
     return this->cah;
}


Atributos Jogador::getAtributos(){
    return this->_atributos;
}
Status Jogador::getStatus(){
    return this->_status;
}

Tracos * Jogador::getTracos(){
   return this->_tracos;
}

/*Equipados *Jogador::getEquipados(){
    return this
}*/

Mochila * Jogador::getMochila(){
    return this->_mochila;
}
int Jogador::getPercepcao(){
    return this->_percepcao;
}
ListaAtaquesEMagias *Jogador::getListaAtaquesEMagias(){
 return this->lista_ataquesEmagias;
}
Proeficiencias Jogador::getProeficiencias(){
   return this->_proeficiencias;
}
Idiomas * Jogador::getIdiomas(){
    return this->_idiomas;
}

Ligacoes * Jogador::getLigacoes()
{
    return this->ligacoes;
}

Defeitos * Jogador::getDefeitos()
{return this->_defeitos;

}

Ideais * Jogador::getIdeais()
{
return this->_ideais;
}
bool Jogador::getInspiracao(){
    return this->_inspiracao;
}

void Jogador::alterarBonus(int b)
{
this->_proeficiencias.alterarBonus(b);
}

