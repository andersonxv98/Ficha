#ifndef TESTERESISTENCIA_H
#define TESTERESISTENCIA_H

#include <Models/Jogador/atributos.h>



class TesteResistencia
{
public:
    TesteResistencia(Atributos &atributos);

    int getId();
    int getForcaResist();
    int getDestreza();
    int getConstituicao();
    int getInteligencia();
    int getSabedoria();
    int getCarisma();
private:
    int id;
    int forca;
    int destreza;
    int constituicao;
    int inteligencia;
    int sabedoria;
    int carisma;

    void setForca(int forca);
    void setDestreza(int destreza);
    void setConstituicao(int constituicao);
    void setInteligencia(int inteligencia);
    void setSabedoria(int sabedoria);
    void setCarisma(int carisma);
};

#endif // TESTERESISTENCIA_H
