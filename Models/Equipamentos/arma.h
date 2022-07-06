#ifndef ARMA_H
#define ARMA_H

#include <list>
#include <string>
#include "propriedades_arma.h"
using namespace std;
class Arma
{
public:
    Arma(double peso, string nome_arma, string dano, double preco, Propriedades_Arma propriedade);

    double getPeso();
    string getNome();
    string getDano();
    double getPreco();
    list<Propriedades_Arma> getPropriedades();
private:
    int id;
    double _peso;
    std::string _nome_da_arma;
    std::string _dano;
    double _preco;
    list<Propriedades_Arma> _propriedades;

    void setPeso(double peso);
    void setNome(string nome_arma);
    void setDano(string dano);
    void setPreco(double preco);
    void addPropriedades(Propriedades_Arma propriedades);
};

#endif // ARMA_H
