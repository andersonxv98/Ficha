#ifndef STATUS_H
#define STATUS_H


class Status
{
public:
    Status(int armadura, int iniciativa, double deslocamento, int hp, int hptemporario);

    int getArmadura();
    int getIniciativa();
    double getDeslocamento();
    int getHp();
    int getHPTemporario();
    int getHPTOTAL;
private:
    int id;
    int _classe_armadura;
    int _iniciativa;
    double _deslocamento;
    int _HP;
    int _Hp_temporario;
    int _HPTotal;
    void setArmadura(int armadura);
    void setIniciativa(int iniciativa);
    void setDeslocamento(double deslocamento);
    void setHp( int hp);
    void setHPTemporario(int hptemporario);
    void setHPTOTAL(int hp, int hptemporario);

    //sets

};

#endif // STATUS_H
