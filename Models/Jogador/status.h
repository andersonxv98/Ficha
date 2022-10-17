#ifndef STATUS_H
#define STATUS_H

#include <string>


using namespace std;
class Status
{
public:
    Status(int armadura, int iniciativa, double deslocamento, int hp, int hptemporario, string dadovida);

    int getArmadura();
    int getIniciativa();
    double getDeslocamento();
    int getHp();
    int getHPTemporario();
    int getHPTOTAL();
    string getDadoVida();
private:
    int id;
    int _classe_armadura;
    int _iniciativa;
    double _deslocamento;
    int _HP;
    int _Hp_temporario;
    int _HPTotal;
    string dadovida;
    void setArmadura(int armadura);
    void setIniciativa(int iniciativa);
    void setDeslocamento(double deslocamento);
    void setHp( int hp);
    void setHPTemporario(int hptemporario);
    void setHPTOTAL(int hp);

    //sets

    void setDadoVida(string dadovida);
};

#endif // STATUS_H
