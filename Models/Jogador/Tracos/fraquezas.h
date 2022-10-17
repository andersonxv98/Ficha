#ifndef FRAQUEZAS_H
#define FRAQUEZAS_H

#include <string>

using namespace std;

class Fraquezas
{
public:
    Fraquezas(string fraqueza);

    string getFraqueza();

private:
    int id;
    string _fraqueza;
    void setFraqueza(string fraqueza);
};

#endif // FRAQUEZAS_H
