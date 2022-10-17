#ifndef RACA_H
#define RACA_H

#include <string>


using namespace std;
class Raca
{
public:
    Raca(string raca);

    string getRaca();
private:
   int id;
   string raca;

   void setRaca(string raca);
};

#endif // RACA_H
