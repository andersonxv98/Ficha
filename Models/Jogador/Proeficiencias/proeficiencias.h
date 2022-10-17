#ifndef PROEFICIENCIAS_H
#define PROEFICIENCIAS_H

#include "pericias.h"
#include "testeresistencia.h"

#include <Models/Jogador/atributos.h>



class Proeficiencias
{
public:

    Proeficiencias(Pericias &pericias, TesteResistencia &resitencia, int bonus);

    int getBonus();
    TesteResistencia getTesteResistencia();
    Pericias getPericias();
    void alterarBonus(int v);
private:
    int id;
    int bonus;
    TesteResistencia  _resitencia;
    Pericias _pericias;

    void setPericias(Pericias &pericias);
    void setTesteResistencia(TesteResistencia &testeresit);
    void setBonus(int bonus);
};

#endif // PROEFICIENCIAS_H
