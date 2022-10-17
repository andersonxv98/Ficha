#ifndef ARMA_H
#define ARMA_H

#include <list>
#include <string>

using namespace std;
class Arma
{
public:
    Arma(double peso, string nome_arma, string dano, double preco, string propriedade, string LMP);

    double getPeso();
    string getNome();
    string getDano();
    double getPreco();
    string getTipo();
    int getId();
    list<string> getPropriedades();
private:
    static int contador;
    int id;
    double _peso;
    std::string _nome_da_arma;
    std::string _dano;
    double _preco;
    string _tipo_LMP; //Tipo leve, media ou pesada ou escudo;
    list<string> _propriedades;
    void setId(int id);
    void setTipo(string lmp);
    void setPeso(double peso);
    void setNome(string nome_arma);
    void setDano(string dano);
    void setPreco(double preco);
    void addPropriedades(string propriedades);
};

#endif // ARMA_H
