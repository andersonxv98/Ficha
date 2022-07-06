#ifndef COMPONENTES_H
#define COMPONENTES_H


class Componentes
{
public:
    Componentes(bool verbal, bool gestos, bool material);

    bool getVerbal();
    bool getGestos();
    bool getMaterial();

private:
    int id;
    bool verbal;
    bool gestos;
    bool material;

    void setVerbal(bool verbal);
    void setGestos(bool gestos);
    void setMaterial(bool material);
};

#endif // COMPONENTES_H
