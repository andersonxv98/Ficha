#ifndef PERSONALIDADE_H
#define PERSONALIDADE_H

#include <string>

using namespace std;

class Personalidade
{
public:
    Personalidade(string personalite);

    string getPersonalidade();
 private:
    int id;
    string _traco_personalidade;

    void setPersonalidade(string personalidade);
};

#endif // PERSONALIDADE_H
