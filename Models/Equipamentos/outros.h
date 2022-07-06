#ifndef OUTROS_H
#define OUTROS_H

#include <string>
using namespace std;
class Outros
{
public:
    Outros(string nome, double preco);

    string getNome();
    double getPreco();

private:
    int id;
    string _nome;
    double _preco;

    void setNome(string nome);
    void setPreco(double preco);

};

#endif // OUTROS_H
