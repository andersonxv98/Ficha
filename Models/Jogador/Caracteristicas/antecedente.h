#ifndef ANTECEDENTE_H
#define ANTECEDENTE_H

#include <string>


using namespace std;
class Antecedente
{
public:
    Antecedente(string antecedente);

    string getAntecedente();

private:
   int id;

   string antecedente;

   void setAntecedente(string antecedente);
};

#endif // ANTECEDENTE_H
