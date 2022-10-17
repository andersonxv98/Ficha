#ifndef TRACOS_H
#define TRACOS_H
#include "Models/Jogador/Tracos/personalidade.h"
#include <list>
#include <Models/Jogador/Tracos/fraquezas.h>

#include <Models/Jogador/Tracos/vinculos.h>
using namespace std;
class Tracos
{
public:
    Tracos();

    list<string> getTracos();
    void addTracos(string s);
    void rmvTracos(string s);

private:
    int id;
    list<string> _personalidades;
};

#endif // TRACOS_H
