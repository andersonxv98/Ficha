#ifndef ALINHAMENTO_H
#define ALINHAMENTO_H

#include <string>


using namespace std;
class Alinhamento
{
public:
    Alinhamento(string alinhamento);

    string getAlinhamento();

private:
   int id;

   string alinhamento;

   void setAlinhamento(string alinhamento);
};

#endif // ALINHAMENTO_H
