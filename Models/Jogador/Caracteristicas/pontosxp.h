#ifndef PONTOSXP_H
#define PONTOSXP_H


class PontosXP
{
public:
    PontosXP(double pontoAtual, double pntnescproxnvl, double modificador);

    double CalcularPontosNescProxNvl();
    void ZerarPntAtuaisECalcularSomaDoProxNvl(double restante);
    double getModificador();
    double getPontosTotais();
    double getPontosAtuais();
    double getPontosFaltantes();

    void AdicionarPntXp(double pnts);
    int getNvl();
private:
   int id;
   double pontos_atuais;
   double pontos_paraproximo_nvl;
   double pontos_totais;
   double modificador;
  int nvl;
   void setPontosAtuais(double pontos);
   void setPontosProximonvl(double pontos);
   void setPontosTotais(double pontos);
   void setModificador(double modificador);
   void addNvl();
   void setNvl(int nvl);
};

#endif // PONTOSXP_H
