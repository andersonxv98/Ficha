#ifndef ARMADURA_H
#define ARMADURA_H
#include <string>
using namespace std;
class Armadura
{
public:
    Armadura(string nome, double preco, int ca, string furtividade, double peso, string tipo);

    string getNome();
    double getPreco();
    int getCa();
    string getFurtividade();
    double getPeso();

private:
    int id;
    string _nome;
    double _preco;
    int _CA;
    string _furtividade;
    double _peso;
    string _tipo_LMP; //Tipo leve, media ou pesada ou escudo;

   void setNome(string nome);
   void setPreco(double preco);
   void setCa(int ca);
   void setFurtividade(string furtividade);
   void setPeso(double peso);
   void setTipo(string tipo);
};

#endif // ARMADURA_H
