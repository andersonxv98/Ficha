#ifndef ANIMAIS_H
#define ANIMAIS_H

#include "genericovan.h"

#include <string>

using namespace std;
class Animais
{
public:
    Animais(GenericoVAN &_generico, double consumo);

    double getConsumo();
    GenericoVAN * getGenerico();
private:
    int id;
    GenericoVAN* _generico;
    double _consumo_diario_kg;


   void setGenerico(GenericoVAN &_generico);
   void setConsumo(double consumo_diario);

};

#endif // ANIMAIS_H
