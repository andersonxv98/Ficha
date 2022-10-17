#ifndef SALVAR_H
#define SALVAR_H
#include <iostream>
#include <string>
#include <fstream>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <Models/Jogador/jogador.h>
using namespace std;

class Salvar
{
public:
    Salvar(Jogador *jogador);

    string loadaux();
    void save();
    void load();
private:
    Jogador * _jogador;
};



#endif // SALVAR_H
