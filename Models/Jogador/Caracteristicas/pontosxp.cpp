#include "pontosxp.h"

PontosXP::PontosXP(double pontoAtual, double pntnescproxnvl, double modificador)
{
    this->setPontosAtuais(pontoAtual);
     this->setPontosTotais(pntnescproxnvl);
     this->setModificador(modificador);
     this->CalcularPontosNescProxNvl();
    this->setNvl(1);
}


double PontosXP::CalcularPontosNescProxNvl(){
    double nescproxnvl =this->pontos_totais - this->pontos_atuais;

     this-> setPontosProximonvl( nescproxnvl);
    return this->pontos_paraproximo_nvl;
}

void PontosXP::AdicionarPntXp(double pnts){
    //double nescproxnvl =this->pontos_totais - this->pontos_atuais;
    double pontos_para_prox = CalcularPontosNescProxNvl();
    if(pnts >= pontos_para_prox){
        double pontos_restantesAdicionais = pnts - pontos_para_prox;
        this->ZerarPntAtuaisECalcularSomaDoProxNvl(pontos_restantesAdicionais);
        this->addNvl();
    }
    else{
        double pt = this->getPontosAtuais() + pnts;
        this->setPontosAtuais(pt);
    }
}

void PontosXP::setPontosAtuais(double pontos)
{
    this->pontos_atuais = pontos;
}

void PontosXP::setPontosProximonvl(double pontos)
{
    this->pontos_paraproximo_nvl = pontos;
}

void PontosXP::setPontosTotais(double pontos)
{
    this->pontos_totais = pontos;
}

void PontosXP::setModificador(double modificador)
{
    this->modificador =modificador;
}

void PontosXP::ZerarPntAtuaisECalcularSomaDoProxNvl(double restante){
    setPontosAtuais(restante);
    double pntSomaProxNvl = this->getPontosTotais() * this->getModificador();
    this->setPontosTotais(pntSomaProxNvl);

}

double PontosXP::getPontosTotais(){
    return this->pontos_totais;
}

double PontosXP::getModificador(){
    return this->modificador;
}

double PontosXP::getPontosAtuais(){
    return this->pontos_atuais;
}

double PontosXP::getPontosFaltantes()
{
    return this->pontos_paraproximo_nvl;
}

int PontosXP::getNvl()
{
    return this->nvl;
}

void PontosXP::addNvl()
{
   int new_nvl = this->getNvl() + 1;
   this->setNvl(new_nvl);
}



void PontosXP::setNvl(int nvl)
{
    this->nvl  = nvl;
}
