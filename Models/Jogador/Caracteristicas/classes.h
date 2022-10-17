#ifndef CLASSE_H
#define CLASSE_H
#include <string>
using namespace std;

class Classe
{
public:
    Classe(string classe);

    string getClasse();
private:
   int id;
   string classe;

   void setClasse(string classe);
};

#endif // CLASSE_H
