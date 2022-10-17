#ifndef VINCULOS_H
#define VINCULOS_H

#include <string>

using namespace std;

class Vinculos
{
public:
    Vinculos(string vinculos);

    string getVinculos();
private:
    int id;
    string _vinculo;
void setVinculos(string vinculo);

};

#endif // VINCULOS_H
