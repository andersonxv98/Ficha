#include "pericias.h"

Pericias::Pericias(Atributos &atributos, int bonus) :
   atributos(atributos)
{   this->setBonus(bonus);
    //this->setboolacrobacia("false");
   /* this->setboolarcanismo(false);
    this->setboolatletismo(false);
    this->setboolatletismo(false);
    this->setboolblefe(false);
    this->setboolfurtividade(false);
    this->setboolhistoria(false);
    this->setboolintimidacao(false);
    this->setboolintuicao(false);
    this->setboolinvestigacao(false);
    this->setboollidarcomanimais(false);
    this->setboolmedicina(false);
    this->setboolnatureza(false);
    this->setboolpercepcao(false);
    this->setboolpersuasao(false);
    this->setboolpresdigitacao(false);
    this->setboolreligiao(false);
    this->setboolsobrevivencia(false);*/



    this->carregarRole();


}

int Pericias::getacrobacia()
{
return this->acrobacia;
}

int Pericias::getarcanismo()
{
    return this->arcanismo;
}

int Pericias::getatletismo()
{
 return this->atletismo;
}

int Pericias::getatuacao()
{
 return this->atuacao;
}

int Pericias::getblefe()
{
 return this->blefe;
}

int Pericias::getfurtividade()
{
 return this->furtividade;
}

int Pericias::gethistoria()
{
 return this->historia;
}

int Pericias::getintimidacao()
{
 return this->intimidacao;
}

int Pericias::getintuicao()
{
 return this->intuicao;
}

int Pericias::getinvestigacao()
{
 return this->investigacao;
}

int Pericias::getlidarcomanimais()
{
 return this->lidarcomanimais;
}

int Pericias::getmedicina()
{
 return this->medicina;
}

int Pericias::getnatureza()
{
 return this->natureza;
}

int Pericias::getpersuasao()
{
 return this->persuasao;
}

int Pericias::getpercepcao(){
    return this->percepcao;
}

int Pericias::getpresdigitacao()
{
 return this->presdigitacao;
}

int Pericias::getreligiao(){
    return this->religiao;
}

int Pericias::getsobrevivencia(){
    return this->sobrevivencia;
}

int Pericias::getBonus()
{
return this->bonus;
}

void Pericias::carregarRole()
{
    int modforca = (this->atributos.getModForca());
    int moddes = (this->atributos.getModDestreza());
    int modint = (this->atributos.getModInteligencia());
    int modsab = this->atributos.getModSabedoria();
    int modcar = this->atributos.getModCarisma();
    //int modcon = this->atributos.getModConstituicao();

    this->setacrobacia(this->CalculaPontosPericia(moddes,  false));
    this->setarcanismo(this->CalculaPontosPericia(modint,  false));
    this->setatletismo(this->CalculaPontosPericia(modforca,  false));
    this->setatuacao(this->CalculaPontosPericia(modcar,  false));
    this->setblefe(this->CalculaPontosPericia(modcar,  false));
    this->setfurtividade(this->CalculaPontosPericia(moddes,  false));
    this->sethistoria(this->CalculaPontosPericia(modint,  false));
    this->setintimidacao(this->CalculaPontosPericia(modcar,  false));
    this->setintuicao(this->CalculaPontosPericia(modsab,  false));
    this->setinvestigacao(this->CalculaPontosPericia(modint,  false));
    this->setlidarcomanimais(this->CalculaPontosPericia(modsab,  false));
    this->setmedicina(this->CalculaPontosPericia(modsab,  false));
    this->setnatureza(this->CalculaPontosPericia(modint,  false));
    this->setpercepcao(this->CalculaPontosPericia(modsab,  false));
    this->setpersuasao(this->CalculaPontosPericia(modcar,  false));
    this->setpresdigitacao(this->CalculaPontosPericia(moddes,  false));
    this->setreligiao(this->CalculaPontosPericia(modint,  false));
    this->setsobrevivencia(this->CalculaPontosPericia(modsab,  false));
}

void Pericias::setBonus(int b)
{
    this->bonus = b;
}



/*void Pericias::setboolacrobacia(string b)
{
    this->acrobacia_ = b;

    cout<<"VALOR BOLL ACROBACIA DENTRO DO SETBOOLACROBACIA: "<<this->acrobacia_;
}

string Pericias::getboolacrobacia()
{
    cout<<"DENTRO DO GETBOLACROBACIA: "<<this->acrobacia_<<endl;
    return this->acrobacia_;
}
*/
/*
bool Pericias::getboolarcanismo()
{   return this->boolarcanismo;

}

bool Pericias::getboolatletismo()
{
    return this->boolatletismo;
}

bool Pericias::getboolatuacao()
{
    return this->boolatuacao;
}

bool Pericias::getboolblefe()
{
    return this->boolblefe;
}

bool Pericias::getboolfurtividade()
{
    return this->boolfurtividade;
}

bool Pericias::getboolhistoria()
{
    return this->boolhistoria;
}

bool Pericias::getboolintimidacao()
{
    return this->boolintimidacao;

}

bool Pericias::getboolintuicao()
{
    return this->boolintuicao;
}

bool Pericias::getboolinvestigacao()
{
    return this->boolinvestigacao;
}

bool Pericias::getboollidarcomanimais()
{
    return this->boollidarcomanimais;
}

bool Pericias::getboolmedicina()
{
    return this->boolmedicina;

}

bool Pericias::getboolnatureza()
{
    return this->boolnatureza;
}

bool Pericias::getboolpercepcao()
{return this->boolpercepcao;

}

bool Pericias::getboolpresdigitacao()
{
    return this->boolpresdigitacao;
}

bool Pericias::getboolreligiao()
{return this->boolreligiao;

}

bool Pericias::getboolsobrevivencia()
{
    return this->boolsobrevivencia;
}

bool Pericias::getboolpersuasao()
{return this->boolpersuasao;

}*/

/*void Pericias::setboolatletismo(bool b)
{
    this->atletismo_ = b;
}*/
/*
void Pericias::setboolatuacao(bool b)
{
    this->boolatuacao = b;
}

void Pericias::setboolacrobacia(bool b)
{
    this->boolacrobacia = b;
}

void Pericias::setboolarcanismo(bool b)
{
   this->boolarcanismo = b;
}

void Pericias::setboolblefe(bool b)
{
    this->boolblefe = b;

}

void Pericias::setboolfurtividade(bool b)
{   this->boolfurtividade = b;

}

void Pericias::setboolhistoria(bool b)
{
    this->boolhistoria = b;
}

void Pericias::setboolintimidacao(bool b)
{
    this->boolintimidacao = b;
}

void Pericias::setboolintuicao(bool b)
{
    this->boolintuicao = b;
}

void Pericias::setboolinvestigacao(bool b)
{
    this->boolinvestigacao = b;
}

void Pericias::setboollidarcomanimais(bool b)
{
    this->boollidarcomanimais = b;
}

void Pericias::setboolmedicina(bool b)
{

    this->boolmedicina = b;
}

void Pericias::setboolnatureza(bool b)
{
    this->boolnatureza = b;
}

void Pericias::setboolpercepcao(bool b)
{
    this->boolpercepcao = b;
}

void Pericias::setboolpresdigitacao(bool b)
{
   this->boolpresdigitacao = b;
}

void Pericias::setboolreligiao(bool b)
{
    this->boolreligiao =  b;
}

void Pericias::setboolsobrevivencia(bool b)
{
   this->boolsobrevivencia = b;
}

void Pericias::setboolpersuasao(bool b)
{
    this->boolpersuasao = b;
}
*/


/////////////////


int Pericias::CalculaPontosPericia(int valormodificador,  bool status){
    int bonus = this->bonus;

    int  result =  valormodificador;
    if (status){
      result =  valormodificador + bonus;
    }
    return result;
}

void Pericias::setacrobacia(int value)
{
    this->acrobacia = value;
}

void Pericias::setarcanismo(int value)
{
    this->arcanismo = value;
}

void Pericias::setatletismo(int value)
{
    this->atletismo = value;
}

void Pericias::setatuacao(int value)
{
this->atuacao = value;
}

void Pericias::setblefe(int value)
{
     this->blefe = value;
}

void Pericias::setfurtividade(int value)
{
    this->furtividade  = value;
}

void Pericias::sethistoria(int value)
{
    this->historia = value;
}

void Pericias::setintimidacao(int value)
{
    this->intimidacao = value;
}

void Pericias::setintuicao(int value)
{
    this->intuicao = value;
}

void Pericias::setinvestigacao(int value)
{
    this->investigacao = value;
}

void Pericias::setlidarcomanimais(int value)
{
    this->lidarcomanimais = value;
}

void Pericias::setmedicina(int value)
{
    this->medicina = value;
}

void Pericias::setnatureza(int value)
{
    this->natureza = value;
}

void Pericias::setpercepcao(int value)
{
    this->percepcao = value;
}

void Pericias::setpersuasao(int value)
{
    this->persuasao = value;
}

void Pericias::setpresdigitacao(int value)
{
    this->presdigitacao = value;
}

void Pericias::setreligiao(int value)
{
    this->religiao  = value;
}

void Pericias::setsobrevivencia(int value)
{
    this->sobrevivencia = value;
}
