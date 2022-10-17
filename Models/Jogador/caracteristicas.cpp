#include "caracteristicas.h"
#include "qdebug.h"

Caracteristicas::Caracteristicas(string nome, string nome_jogador,Raca &raca, Classe &classe, Antecedente &antecedente, Alinhamento &alinhamento, PontosXP &xp)
 : _raca(raca), _classe(classe), _antecedente(antecedente), _alinhamento(alinhamento), _pnt_xp(xp)
{
    this-> setNome(nome);
    this->setNomeJogador(nome_jogador);
    this-> setRaca(raca);
    this-> setClasse(classe);
    this-> setAntecedente(antecedente);
    this-> setAlinhamento(alinhamento);
    this-> setPontosxp(xp);

}

string Caracteristicas::getNomeJogador()
{
    return this->nomejogador;
}

void Caracteristicas::setNome(string nome){
    cout<< "SET NOME: "<< nome << endl;
    //QString   qnome(QString::fromStdString(nome));

    this->nome = nome;
}

void Caracteristicas::setRaca(Raca raca){
    this->_raca = raca;
}

void Caracteristicas::setClasse(Classe classe){
    this->_classe = classe;
}

void Caracteristicas::setAntecedente(Antecedente antecedente){
    this->_antecedente = antecedente;
}

void Caracteristicas::setAlinhamento(Alinhamento alinhamento){
    this->_alinhamento = alinhamento;
}

void Caracteristicas::setPontosxp(PontosXP xp){
    this->_pnt_xp = xp;
}

void Caracteristicas::setNomeJogador(string nome){
    this->nomejogador = nome;
}

string    Caracteristicas::getNome(){
    //cout<< "entrou getNome"<<endl;

    //qDebug()<< "O QUE Q TEM NA SOPA DO NENEM: " , this->nome;
    //QString * valor = this->nome;
    //cout<<  this->nome.toStdString();
    //QString * nome_val = new QString(QString::fromStdString(this->nome));
    return this->nome;
}

Raca Caracteristicas::getRaca(){
    return this->_raca;
}

Classe Caracteristicas::getClasse(){
    return this->_classe;
}

Antecedente  Caracteristicas::getAntecedente(){
    return this->_antecedente;
}

Alinhamento  Caracteristicas::getAlinhamento(){
    return this->_alinhamento;
}

PontosXP  Caracteristicas::getPontosxp(){
    return this->_pnt_xp;
}
