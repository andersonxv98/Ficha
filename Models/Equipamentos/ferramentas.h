#ifndef FERRAMENTAS_H
#define FERRAMENTAS_H
#include <string>

using namespace std;

class Ferramentas
{
public:
    Ferramentas(string nome, double preco, double peso);


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

#endif // FERRAMENTAS_H
