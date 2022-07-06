#ifndef VEICULOS_H
#define VEICULOS_H

#include "genericovan.h"



class Veiculos
{
public:
    Veiculos(GenericoVAN &generico);

    GenericoVAN *getGenerico();
private:
    int id;
    GenericoVAN *_generico;



   void setGenerico(GenericoVAN &_generico);

};

#endif // VEICULOS_H
