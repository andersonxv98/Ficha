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
    int CalculoModificadorDeAtributo(int atributo);
    int getModForca();
    int getModDestreza();
    int getModConstituicao();
    int getModInteligencia();
    int getModSabedoria();
    int getModCarisma();

private:
    int id;
     int _forca;
     int _destreza;
    int _constituicao;
    int _inteligencia;
    int _sabedoria;
    int _carisma;

    int mod_forca;
    int mod_destreza;
    int mod_constituicao;
    int mod_inteligencia;
    int mod_sabedoria;
    int mod_carisma;
      //sets

    void setId(int id);
    void setForca(int forca);
    void setDestreza(int destreza);
    void setConstituicao(int constituicao);
    void setInteligencia(int inteligencia);
    void setSabedoria(int sabedoria);
    void setCarisma(int carisma);
    void setModForca(int modforca);
    void setModDestreza(int moddestreza);
    void setModConstituicao(int modconstituicao);
    void setModInteligencia(int modinteligencia);
    void setModSabedoria(int modsabedoria);
    void setModCarisma(int modcarisma);
    };

#endif // ATRIBUTOS_H
