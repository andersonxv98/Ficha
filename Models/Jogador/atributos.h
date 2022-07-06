#ifndef ATRIBUTOS_H
#define ATRIBUTOS_H


class Atributos
{
public:
    Atributos(int forca, int destreza, int constituicao, int inteligencia, int sabedoria, int carisma);
    int getId();
    int getForca();
    int getDestreza();
    int getConstituicao();
    int getInteligencia();
    int getSabedoria();
    int getCarisma();

   private:
    int id;
    int _forca;
    int _destreza;
    int _constituicao;
    int _inteligencia;
    int _sabedoria;
    int _carisma;

      //sets

    void setId(int id);
    void setForca(int forca);
    void setDestreza(int destreza);
    void setConstituicao(int constituicao);
    void setInteligencia(int inteligencia);
    void setSabedoria(int sabedoria);
    void setCarisma(int carisma);

};

#endif // ATRIBUTOS_H
