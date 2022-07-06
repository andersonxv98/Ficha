#ifndef PROPRIEDADES_ARMA_H
#define PROPRIEDADES_ARMA_H

#include <string>



class Propriedades_Arma
{
public:
    Propriedades_Arma(std::string descricao);

   std::string getDescricao();
   private:
    int id;
    std::string _descricao; //tipo de propriedade da arma  tipoa ágil, alcance, arremesso

    void setDescricao(std::string descricao);
};

#endif // PROPRIEDADES_ARMA_H
