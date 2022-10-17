#include "statuspericias.h"

StatusPericias::StatusPericias()
{
    this-> acrobacia = false; //des
    this-> arcanismo= false; //int
    this-> atletismo= false; //for
    this-> atuacao= false; //car
    this-> blefe= false;// car
    this-> furtividade= false; //des
    this->historia= false;//int
    this-> intimidacao= false;//car
    this-> intuicao= false; //sab
    this-> investigacao= false;// int
    this-> lidarcomanimais= false; //sab
    this-> medicina= false; //sab
    this-> natureza= false;//int
    this-> percepcao= false;//sab
    this-> presdigitacao= false;// des
    this-> religiao= false;//int
    this-> sobrevivencia= false;//sab
    this-> persuasao= false;
}

bool StatusPericias::getacrobacia()
{
    return this->acrobacia;
}

bool StatusPericias::getarcanismo()
{return this->arcanismo;

}

bool StatusPericias::getatletismo()
{
    return this->atletismo;
}

bool StatusPericias::getatuacao()
{return this->atuacao;

}

bool StatusPericias::getblefe()
{return this->blefe;

}

bool StatusPericias::getfurtividade()
{
    return this->furtividade;
}

bool StatusPericias::gethistoria()
{
    return this->historia;
}

bool StatusPericias::getintimidacao()
{return this->intimidacao;

}

bool StatusPericias::getintuicao()
{
    return this->intuicao;
}

bool StatusPericias::getinvestigacao()
{return this->investigacao;

}

bool StatusPericias::getlidarcomanimais()
{
    return this->lidarcomanimais;
}

bool StatusPericias::getmedicina()
{return this->medicina;

}

bool StatusPericias::getnatureza()
{
    return this->natureza;
}

bool StatusPericias::getpercepcao()
{return this->percepcao;

}

bool StatusPericias::getpresdigitacao()
{
    return this->presdigitacao;
}

bool StatusPericias::getreligiao()
{return this->religiao;

}

bool StatusPericias::getsobrevivencia()
{
    return this->sobrevivencia;
}

bool StatusPericias::getpersuasao()
{return this->persuasao;

}

void StatusPericias::changeacrobacia()
{
    bool b = true;
    if(this->acrobacia){
        b = false;
    }
    this->acrobacia = b;
}

void StatusPericias::changearcanismo()
{
    bool b = true;
    if(this->arcanismo){
        b = false;
    }
    this->arcanismo = b;
}

void StatusPericias::changeatletismo()
{
    bool b = true;
    if(this->atletismo){
        b = false;
    }
    this->atletismo = b;
}

void StatusPericias::changeatuacao()
{
    bool b = true;
    if(this->atuacao){
        b = false;
    }
    this->atuacao = b;
}

void StatusPericias::changeblefe()
{
    bool b = true;
    if(this->blefe){
        b = false;
    }
    this->blefe = b;
}

void StatusPericias::changefurtividade()
{
    bool b = true;
    if(this->furtividade){
        b = false;
    }
    this->furtividade = b;
}

void StatusPericias::changehistoria()
{
    bool b = true;
    if(this->historia){
        b = false;
    }
    this->historia = b;
}

void StatusPericias::changeintimidacao()
{
    bool b = true;
    if(this->intimidacao){
        b = false;
    }
    this->intimidacao = b;
}

void StatusPericias::changeintuicao()
{
    bool b = true;
    if(this->intuicao){
        b = false;
    }
    this->intuicao = b;
}

void StatusPericias::changeinvestigacao()
{
    bool b = true;
    if(this->investigacao){
        b = false;
    }
    this->investigacao = b;
}

void StatusPericias::changelidarcomanimais()
{    bool b = true;
     if(this->lidarcomanimais){
         b = false;
     }
     this->lidarcomanimais = b;
}

void StatusPericias::changemedicina()
{
    bool b = true;
         if(this->medicina){
             b = false;
         }
         this->medicina = b;
}

void StatusPericias::changenatureza()
{
    bool b = true;
         if(this->natureza){
             b = false;
         }
         this->natureza = b;
}

void StatusPericias::changepercepcao()
{
    bool b = true;
         if(this->percepcao){
             b = false;
         }
         this->percepcao = b;
}

void StatusPericias::changepresdigitacao()
{
    bool b = true;
         if(this->presdigitacao){
             b = false;
         }
         this->presdigitacao = b;
}

void StatusPericias::changereligiao()
{
    bool b = true;
         if(this->religiao){
             b = false;
         }
         this->religiao = b;
}

void StatusPericias::changesobrevivencia()
{
    bool b = true;
         if(this->sobrevivencia){
             b = false;
         }
         this->sobrevivencia = b;
}

void StatusPericias::changepersuasao()
{
    bool b = true;
         if(this->persuasao){
             b = false;
         }
         this->persuasao = b;
}
