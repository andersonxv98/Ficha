#ifndef DEFEITOS_H
#define DEFEITOS_H
#include <iostream>
#include <string>
#include <list>

using namespace std;
class Defeitos
{
public:
    Defeitos();

    list<string>  getListaDefeitos();
    void addDefeitos(string s);
    void rmvDefeitos(string s);
private:
    int id;

    list<string> listaDefeitos;
};

                                                                                /*public:
                                                                                    Ideais();
                                                                                    list<string> getListaIdeais();
                                                                                    void addListaIdeais(string s);
                                                                                    void rmvListaIdeais(string s);
                                                                                private:
                                                                                    int id;

                                                                                    list<string> listaIdeais;
                                                                                */

#endif // DEFEITOS_H
