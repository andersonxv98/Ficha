#ifndef EQUIPAMENTO_AVENTURA_H
#define EQUIPAMENTO_AVENTURA_H

#include <string>
using namespace std;

class Equipamento_Aventura
{
public:
    Equipamento_Aventura(string nome, double preco, double peso);

    string getNome();
    double getPreco();
    double getPeso();

private:
    int id;
    string _nome;
    double _preco;
    double _peso;

    void setNome(string nome);
    void setPreco(double preco);
    void setPeso(double peso);


};

#endif // EQUIPAMENTO_AVENTURA_H
