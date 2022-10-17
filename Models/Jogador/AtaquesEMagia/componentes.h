#ifndef COMPONENTES_H
#define COMPONENTES_H

#include <list>
#include <string>


using namespace std;
class Componentes
{
public:
    Componentes(bool verbal, bool gestos, bool material);

    bool getVerbal();
    bool getGestos();
    bool getMaterial();

    void changeV();
    void changeS();
    void changeM();
    void reset();

    string getStringVerbal();
    string getStringGestos();
    string getStringMateriais();
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
