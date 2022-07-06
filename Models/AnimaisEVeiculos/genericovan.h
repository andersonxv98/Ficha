#ifndef GENERICOVAN_H
#define GENERICOVAN_H

#include <string>

using namespace std;

class GenericoVAN
{
public:
GenericoVAN(string nome, double preco, double deslocamento);

string getNome();
double getPreco();
double getDeslocamento();
private:
int id;
string _nome;
double _deslocamento;
double _preco;


void setNome(string nome);
void setPreco(double preco);
void setDeslocamento(double deslocamento);
};

#endif // GENERICOVAN_H
