#ifndef PROEFICIENCIAS_H
#define PROEFICIENCIAS_H

#include "pericias.h"
#include "testeresistencia.h"



class Proeficiencias
{
public:
    Proeficiencias();
private:
    int id;
    int bonus;
    TesteResistencia  *resitencia;
    Pericias *pericias;
};

#endif // PROEFICIENCIAS_H
