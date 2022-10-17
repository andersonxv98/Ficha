#ifndef PERICIAS_H
#define PERICIAS_H

#include <Models/Jogador/atributos.h>
#include <iostream>

#include <string>

using namespace std;

class Pericias
{
public:
    Pericias(Atributos &atributos, int bonus);
    int getacrobacia();
    int getarcanismo();
    int getatletismo();
    int getatuacao();
    int getblefe();
    int getfurtividade();
    int gethistoria();
    int getintimidacao();
    int getintuicao();
    int getinvestigacao();
    int getlidarcomanimais();
    int getmedicina();
    int getnatureza();
    int getpercepcao();
    int getpersuasao();
    int getpresdigitacao();
    int getreligiao();
    int getsobrevivencia();

    int getBonus();
    void carregarRole();

   // string getboolacrobacia(); //des
    /*bool getboolarcanismo(); //int
    bool getboolatletismo(); //for
    bool getboolatuacao(); //car
    bool getboolblefe(); // car
    bool getboolfurtividade(); //des
    bool getboolhistoria(); //int
    bool getboolintimidacao(); //car
    bool getboolintuicao(); //sab
    bool getboolinvestigacao();// int
    bool getboollidarcomanimais(); //sab
    bool getboolmedicina(); //sab
    bool getboolnatureza();//int
    bool getboolpercepcao();//sab
    bool getboolpresdigitacao();// des
    bool getboolreligiao();//int
    bool getboolsobrevivencia();//sab
    bool getboolpersuasao();*/


    //void setboolacrobacia(string b); //des
    /*void setboolarcanismo(bool b); //int
    void setboolatletismo(bool b); //for
    void setboolatuacao(bool b); //car
    void setboolblefe(bool b); // car
    void setboolfurtividade(bool b); //des
    void setboolhistoria(bool b); //int
    void setboolintimidacao(bool b); //car
    void setboolintuicao(bool b); //sab
    void setboolinvestigacao(bool b);// int
    void setboollidarcomanimais(bool b); //sab
    void setboolmedicina(bool b); //sab
    void setboolnatureza(bool b);//int
    void setboolpercepcao(bool b);//sab
    void setboolpresdigitacao(bool b);// des
    void setboolreligiao(bool b);//int
    void setboolsobrevivencia(bool b);//sab
    void setboolpersuasao(bool b);
*/

    void setBonus(int b);



    void setacrobacia(int value); //des
    void setarcanismo(int value); //int
    void setatletismo(int value); //for
    void setatuacao(int value); //car
    void setblefe(int value); // car
    void setfurtividade(int value); //des
    void sethistoria(int value); //int
    void setintimidacao(int value); //car
    void setintuicao(int value); //sab
    void setinvestigacao(int value);// int
    void setlidarcomanimais(int value); //sab
    void setmedicina(int value); //sab
    void setnatureza(int value);//int
    void setpercepcao(int value);//sab
    void setpersuasao(int value);
    void setpresdigitacao(int value);// des
    void setreligiao(int value);//int
    void setsobrevivencia(int value);//sab

    int CalculaPontosPericia(int valormodificador, bool status);

private:
    int acrobacia; //des
    int arcanismo; //int
    int atletismo; //for
    int atuacao; //car
    int blefe; // car
    int furtividade; //des
    int historia; //int
    int intimidacao; //car
    int intuicao; //sab
    int investigacao;// int
    int lidarcomanimais; //sab
    int medicina; //sab
    int natureza;//int
    int percepcao;//sab
    int presdigitacao;// des
    int religiao;//int
    int sobrevivencia;//sab
    int persuasao;


    /*string acrobacia_; //des
    string arcanismo_; //int
    string atletismo_; //for
    string atuacao_; //car
    string blefe_; // car
    string furtividade_; //des
    string historia_; //int
    string intimidacao_; //car
    string intuicao_; //sab
    string investigacao_;// int
    string lidarcomanimais_; //sab
    string medicina_; //sab
    string natureza_;//int
    string percepcao_;//sab
    string presdigitacao_;// des
    string religiao_;//int
    string sobrevivencia_;//sab
    string persuasao_;
*/





    int bonus;

    Atributos atributos;


};

#endif // PERICIAS_H
