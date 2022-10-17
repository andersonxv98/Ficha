#ifndef CONTROLLERTEST_H
#define CONTROLLERTEST_H
#include "qquickitem.h"
#include "qtmetamacros.h"
#include "Models/Jogador/jogador.h"
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <string>
#include <Models/Jogador/statuspericias.h>

class ControllerTest : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text_Q READ getText WRITE setText)
    Q_PROPERTY(READ openwindow)
    Q_PROPERTY(READ changeM)
    Q_PROPERTY(READ changeS)
    Q_PROPERTY(READ changeV)
    Q_PROPERTY(READ resetComponents)

public:

    ControllerTest(Componentes &comp);

    string facaAlgumacoisa();
    void setWin(QObject * obj);
    void Carregarinformacoes();
    void setAtributosPersonagemOnView();
    void setAntecedentesPersonagemOnView();
    void setTracosOnPersonagemView();
    void setAntecedenteParteDois();
    Q_INVOKABLE QVariant  testeDeEntrada();
    Q_INVOKABLE QString  getText();
    Q_INVOKABLE void setText(QString &text);
    Q_INVOKABLE void openwindow();
    void setValue(int value);
    //Q_INVOKABLE QString getInstanciaNova();
    void AddNovaHabilidadeOnList(AtaquesEMagia * a);

    Q_INVOKABLE void instanciarNovaHabilidade(QString &nome, QString &nivel, QString &tempo, QString &alcance,  QString &duracao, QString &material, QString &descricao);
    Q_INVOKABLE QVariant instanciarNovoIdioma(QString &desc);
    Q_INVOKABLE QQuickItem * getListViewIdiomas();

    ////DELETES PELO AMOR D/////

    Q_INVOKABLE void deleteIdioma(QString &idioma);
    Q_INVOKABLE void deleteHabilidade(QString &habilitie);
    Q_INVOKABLE void deleteMochila(QString &item);
    Q_INVOKABLE void deleteTraco(QString &item);
    Q_INVOKABLE void deleteIdeais(QString &ideais);
    Q_INVOKABLE void deleteLigacoes(QString &ligacoes);
    Q_INVOKABLE void deleteDefeitos(QString &defeitos);
    Q_INVOKABLE void deleteOutros(QString &outros);
    Componentes getComponentes();
    StatusPericias getStatusPericias();

    void valueChanged(int newValue);

    void setEngine(QQmlApplicationEngine engine);
    Q_INVOKABLE void changeM();
    Q_INVOKABLE void changeS();
    Q_INVOKABLE void changeV();
    Q_INVOKABLE void resetComponents();
    Q_INVOKABLE int getIntanciasObj();
    Q_INVOKABLE QString getNomeHabilidade();//AtaquesEMagia a);
    Q_INVOKABLE QList<QVariantList> getlistaHabilidades();
    Q_INVOKABLE QList<QVariantList> getlistaEquipamentos();
    Q_INVOKABLE QList<QVariantList> getIdiomasOnView();
    Q_INVOKABLE QList<QVariantList> getlistCaracteristicasHabilidades();
    Q_INVOKABLE QList<QVariantList> getlistLigacoes();
    Q_INVOKABLE QList<QVariantList> getlistDefeitos();
    Q_INVOKABLE QList<QVariantList> getlistIdeais();
    Q_INVOKABLE QList<QVariantList> getListTracos();


    //////////CHNG STATUS BONUS
   Q_INVOKABLE QVariant changeStatusacrobacia();
   Q_INVOKABLE QVariant changeStatusarcanismo();
   Q_INVOKABLE QVariant changeStatusatletismo();
   Q_INVOKABLE QVariant changeStatusatuacao();
   Q_INVOKABLE QVariant changeStatusblefar();
   Q_INVOKABLE QVariant changeStatusfurtividade();
   Q_INVOKABLE QVariant changeStatushistoria();
   Q_INVOKABLE QVariant changeStatusintimidacao();
   Q_INVOKABLE QVariant changeStatusintuicao();
   Q_INVOKABLE QVariant changeStatusinvestigacao();
   Q_INVOKABLE QVariant changeStatuslidarcomnimais();
   Q_INVOKABLE QVariant changeStatusmedicina();
   Q_INVOKABLE QVariant changeStatusnatureza();
   Q_INVOKABLE QVariant changeStatuspercepcao();
   Q_INVOKABLE QVariant changeStatuspersuasao();
   Q_INVOKABLE QVariant changeStatuspresdigitacao();
   Q_INVOKABLE QVariant changeStatusreligiao();
   Q_INVOKABLE QVariant changeStatussobrevivencia();

   Q_INVOKABLE void alterarBonus(QString &v);
   Q_INVOKABLE void  salvarJogador();
   Q_INVOKABLE void carregarJogador();
private:
    int id;
    //QQmlEngine * engine;
    QObject * obj;
    //QQmlApplicationEngine _engine;
    Jogador * jogador;
    string  cleiton;
    QQmlApplicationEngine * engine;
    Componentes  comp;
    StatusPericias statuspericia;

    void setListaAtaquesToFront();
    QList<QVariantList> listahabilidades;
    QList<QVariantList> listaEquipamentos;
    QList<QVariantList> listaIdiomas;
    QList<QVariantList> listaCaracteristicasHabilidades;
    QList<QVariantList> listaLigacoes;
    QList<QVariantList> listaDefeitos;
    QList<QVariantList> listaIdeais;
    QList<QVariantList> listaTracos;


    int m_value;
    void setModelOnView();
    void setCaracteristicas();
    void setNomePersonagemonView();
    void setCaracteristicasonView();
    void AtualizarOnViewPontoxXp();
    void AtualizaOnViewClasseArmaduraeoutros();
    void setPontosdeVidaOnView();
    void setDadoVidaOnView();
    void setValTestesResistenciaOnView();
    void setPericiasOnView();
    void setPercepcaoPassivaOnView();
    void setListaAtaquesMagiasOnView();
    void setCompoenentes(bool v, bool s, bool m);
    void mudaNomeObjectAtaqueHabil();
    void setEquipamentosOnView();
    void setIdiomasOnView();
    void setCaracteristicasEHabilidadesOnView();
    void setLigacoesOnView();
    void setDefeitosOnView();
    void setIdeaisOnView();
    void setTracosOnView();
    void setBonusProefiOnView(int s);





};

#endif // ATRIBUTOS_H
