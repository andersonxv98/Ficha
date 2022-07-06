#ifndef IDIOMAS_H
#define IDIOMAS_H

#include <list>
#include <string>

using namespace std;

class Idiomas
{
public:
    Idiomas();
    void addIdioma(string idioma);
    void rmvIdioma(string idioma);
    list<string> getIdiomas();
private:
    int id;
    list<string> idiomas;


};

#endif // IDIOMAS_H
