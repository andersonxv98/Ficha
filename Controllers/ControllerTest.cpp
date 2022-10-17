#include "ControllerTest.h"
#include "salvar.h"

#include <QAbstractItemModel>
#include <QQmlProperty>
#include <QQuickItem>
#include <QQuickView>
#include <list>





ControllerTest::    ControllerTest(Componentes &comp)
 : comp(comp)

{    //QObject *win = engine.rootObjects()[0];
    this->setCompoenentes(false,false, false);
    string msg = "zerinnho";
    QString  str_cleiton = QString::fromStdString(msg);
    this->cleiton = msg;
    //this->engine = engine;

    ////////////CARACTERISTICAS
    string nome_caracteisticasJogador = "ESPECTRO Tempesfuria";
    string nome_jogador = "andisus";
    Raca _raca =  Raca("Elfo");
    Classe classe =  Classe("Druida");
    Antecedente antecedente =  Antecedente("Eremita");
    Alinhamento alinhamento =  Alinhamento("Neutro Bom");
    PontosXP pnt_xp =  PontosXP(0, 1400, 1.5);
    /////////////////////;;;;
    /// //////////TRACOS:
    ///


    /////////////////////////


    Atributos   atributos =  Atributos(10, 8, 13, 16, 12, 15);

    /////////////PROEFICIENCIAS;;;;;;/
    TesteResistencia  resitencia  =TesteResistencia(atributos);
    Pericias  pericias =  Pericias(atributos, 2);

    ///
    /////////// ATRIBUTOS DA CLASSE JOGADOR
   Caracteristicas  caracteristicas =    Caracteristicas(nome_caracteisticasJogador, nome_jogador, _raca, classe, antecedente, alinhamento, pnt_xp);

   cout << "MEU DEUS DO CEU: "<< caracteristicas.getNome()<<endl;
     cout << "MEU DEUS DO CEU: "<< atributos.getForca()<<endl;

   Status status =  Status(15,10, 7.5, 12, 10, "1d8");
   Tracos * tracos = new  Tracos();
   tracos->addTracos("Frio e calculista");
   tracos->addTracos("UM VDD SHELBY");
   //Equipados *equipados = new Equipados();
   Mochila *  mochila = new  Mochila(25.5);

    cout<<"cricou propriedade arma"<<endl;
   Arma * racao = new Arma(1, "pacote de racao", "10d2", 1,   "UmpacoteSimples de racao" , "nenhum");
   Arma * adaga = new Arma(2, "Adaga Sangrenta", "1d4", 10,"", "");
   cout<<"raacao"<<racao->getNome()<<endl;
    cout<<"criou objeeto ARma racao: "<<endl;
    mochila->addObjetoNaMochila(racao);
    mochila->addObjetoNaMochila(adaga);


    cout<<"adicionou objetos na mochila"<<endl;

   ListaAtaquesEMagias * listaAtaquesEmagias = new ListaAtaquesEMagias();

   //////////////////////////////// Instancia de aAtaquABiliades Pra TEstes
   AtaquesEMagia * e =  new AtaquesEMagia("soco divino", "nvl 1","10 min", "2metros", this->comp, "", "10min", "zoio" );
   AtaquesEMagia * f = new  AtaquesEMagia("chute divino", "nvl 1","10 min", "2metros", this->comp, "", "10min", "zoio" );
   AtaquesEMagia * g = new AtaquesEMagia("cabeçada divino", "nvl 1","10 min", "2metros", this->comp, "", "10min", "zoio" );
   AtaquesEMagia * h = new AtaquesEMagia("bença divino", "nvl 1","10 min", "2metros", this->comp, "", "10min", "zoio" );
   AtaquesEMagia * w = new  AtaquesEMagia("helicoptero divino", "nvl 1","10 min", "2metros", this->comp, "", "10min", "zoio" );

   listaAtaquesEmagias->addAtaqueMagiaNaLista(e);
   listaAtaquesEmagias->addAtaqueMagiaNaLista(f);
   listaAtaquesEmagias->addAtaqueMagiaNaLista(g);
   listaAtaquesEmagias->addAtaqueMagiaNaLista(h);
   listaAtaquesEmagias->addAtaqueMagiaNaLista(w);






   Proeficiencias  proeficiencias =  Proeficiencias( pericias, resitencia,0);
   Idiomas  * idiomas = new  Idiomas();
   idiomas->addIdioma("Humano Padrão");
   idiomas->addIdioma("Elfico");
   idiomas->addIdioma("Numenoriano");
   int proeficiencia = 2;
    ////////////////////////////////
    CaracteristicasEHabilidades * cah = new CaracteristicasEHabilidades();
    cah->addCaracteristicaEHabilidade("VIsão noturna +8m");
    cah->addCaracteristicaEHabilidade("Madrugador");
    cah->addCaracteristicaEHabilidade("Oportunista: Ataque de Oportunidade + 5roll acerto");
    cah->addCaracteristicaEHabilidade("fugitivo: Vantagem em rolagem de fuga");

    Ligacoes * ligacoes = new  Ligacoes();
    ligacoes->addListaLigacoes("Dimas o bardo sapeca");
    ligacoes->addListaLigacoes("Samanta a vampira sugadora de Alegria");

    Defeitos * doubleD = new Defeitos();
    doubleD->addDefeitos("Desvantagem na luz solar");
    doubleD->addDefeitos("Recebe 1d4 dano por turno em rodadas com exposição ao sol");

    Ideais * ideais  =new Ideais();
    ideais->addListaIdeais("Não machucamos a floresta ou o s seres dela");
    ideais->addListaIdeais("fazer o bem sem olhas a quem");


    Jogador  * jogador =  new   Jogador(caracteristicas, ideais, doubleD,ligacoes,cah, atributos,status, tracos,mochila, listaAtaquesEmagias, proeficiencias, idiomas);
    //Caracteristicas  nc= jogador->getCaracteristicas();
    //string  nn =  nc.getNome();
    //cout<< "CRIOU O JOGADOR: "<< nn;

    //Caracteristicas caracteristicas, Atributos atributos, Status status, Tracos tracos, Mochila mochila, ListaAtaquesEMagias listaAtaquesEmagias, Proeficiencias proeficiencias, Idiomas idiomas
    this->jogador = jogador;


     this->setListaAtaquesToFront();
     this->setEquipamentosOnView();
    this->setIdiomasOnView();
    this->setCaracteristicasEHabilidadesOnView();
    this->setLigacoesOnView();
    this->setDefeitosOnView();
    this->setIdeaisOnView();
    this->setTracosOnView();
}


string ControllerTest::facaAlgumacoisa(){
    string resposta = "voce é indigno";
    return resposta;
}

void ControllerTest::setWin(QObject * obj)
{
    this->obj = obj;
}

void ControllerTest::Carregarinformacoes()
{   cout<<"Funcao CArregar informacoes"<<endl;
    this->setModelOnView();
}

QList<QVariantList> ControllerTest::getlistaHabilidades()
{
    return this->listahabilidades;
}

QList<QVariantList> ControllerTest::getlistaEquipamentos()
{
    return this->listaEquipamentos;
}

void ControllerTest::setModelOnView(){

    cout<<"Funcao setModelONView"<<endl;

    this->setCaracteristicasonView();
    this->setAtributosPersonagemOnView();
    this->setAntecedentesPersonagemOnView();
    this->setAntecedenteParteDois();
    this->AtualizarOnViewPontoxXp();
    this->AtualizaOnViewClasseArmaduraeoutros();
   // this->TesteDeEntrada();
    this->setPontosdeVidaOnView();
    this->setDadoVidaOnView();
    this->setValTestesResistenciaOnView();
    this->setPericiasOnView();
    this->setPercepcaoPassivaOnView();

    this->setBonusProefiOnView(this->jogador->getProeficiencias().getBonus());
    //this->mudaNomeObjectAtaqueHabil();
}

void ControllerTest::setCaracteristicasonView(){
    cout<<"Funcao SetCAracteristicasOnView"<<endl;
    this->setNomePersonagemonView();
}


void ControllerTest::setNomePersonagemonView(){
    cout<<"Funcao SetNomePersonageONView"<<endl;
    QObject  *nome_personagem =  this->obj->findChild<QObject*>("name_nomepersonagem");
    if(nome_personagem){
        qDebug() << "Encontrou";
        string  pericles = (this->jogador->getCaracteristicas().getNome());

        QString  re  = QString::fromStdString(pericles); //car->getNome();
        //cout<< "valor string RE: "<<re<<endl;
      //QString  nomi(re);
        //QVariant qs(QString::fromStdString(nomi));

        //qDebug() << "INstanciou objreto QString";
        //qDebug() << "teste", re->toStdString();
        nome_personagem->setProperty("text", re);

        //qDebug() << nomis;
        //cout<< "Valor ome Model: "<<nome <<" ------------------"<<endl;
       //obj->setProperty("text", QString::fromStdString(nomis));
    }
    else{
        qDebug() << "não foi possivel encontrar";
    }
}

void ControllerTest::setAtributosPersonagemOnView(){
    QObject*  atributos_view =  this->obj->findChild<QObject *>("colunaAtributos");
   //List<QObject*> lsta = nome_personagem->findChildren<QObject*>(this);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (){
    QList<QObject*>  list =  atributos_view->children();

            int forca = this->jogador->getAtributos().getForca();
            int destreza = this->jogador->getAtributos().getDestreza();
           int constituicao  =this->jogador->getAtributos().getConstituicao();
           int inteligencia = this->jogador->getAtributos().getInteligencia();
           int sabedoria  =this->jogador->getAtributos().getSabedoria();
           int carisma = this->jogador->getAtributos().getCarisma();

           int mod_forca = this->jogador->getAtributos().getModForca();
           int mod_destreza =this->jogador->getAtributos().getModDestreza();
           int mod_constituicao  = this->jogador->getAtributos().getModConstituicao();
           int mod_inteligencia = this->jogador->getAtributos().getModInteligencia();
           int mod_sabedoria = this->jogador->getAtributos().getModSabedoria();
           int mod_carisma = this->jogador->getAtributos().getModCarisma();

           vector<int> valores_atributos = {forca, destreza, constituicao, inteligencia, sabedoria, carisma};
           vector<int> valores_mod = {mod_forca, mod_destreza, mod_constituicao, mod_inteligencia, mod_sabedoria, mod_carisma};
           vector<string> string_nomeatributos = {"forca", "destreza", "constituicao", "inteligencia", "sabedoria", "carisma"};

    int  j  = 0 ;
    int cont_p = 0;

    foreach(QObject* nobj , list){
        QList<QObject*> text_insideRet = nobj->children();

        cout<< "valor: -------------" << valores_atributos[j];
        foreach(QObject* texto, text_insideRet){
            if(cont_p == 0){
                texto->setProperty("text", QString::fromStdString(string_nomeatributos[j]));
            }
            else if(cont_p == 1){
                texto->setProperty("text", valores_atributos[j]);
            }
            else{
                 texto->setProperty("text", valores_mod[j]);
            }
            cont_p++;

        }
        cont_p = 0;
        j++;

    }

}

void ControllerTest::setAntecedentesPersonagemOnView(){

    QObject*  antecedentep1 =  this->obj->findChild<QObject *>("antecedentesp1");
   //List<QObject*> lsta = nome_personagem->findChildren<QObject*>(this);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (){
    QList<QObject*>  list =  antecedentep1->children();

    string classe = this->jogador->getCaracteristicas().getClasse().getClasse();
    string antecedente = this->jogador->getCaracteristicas().getAntecedente().getAntecedente();
    string nome_jogador =  this->jogador->getCaracteristicas().getNomeJogador();

    int nvl = this->jogador->getCaracteristicas().getPontosxp().getNvl();
    string p1_A[3][2] = {{classe, "Classe e Nivel"},{antecedente, "ANTECEDENTE"},{nome_jogador, "NOME JOGADOR"}};

    int k = 0;
    int l = 0;

    foreach(QObject* nobj , list){
        QList<QObject*> text_insideRet = nobj->children();
        foreach(QObject* texto, text_insideRet){
                texto->setProperty("text", QString::fromStdString(p1_A[k][l]));
                if( l>= 2){
                    texto->setProperty("text", QString::number(nvl));
                }
            l++;
        }
        l = 0;
        k++;

    }
}

void ControllerTest::setAntecedenteParteDois()
{
    QObject*  antecedentep2 =  this->obj->findChild<QObject *>("antecedentesp2");
   //List<QObject*> lsta = nome_personagem->findChildren<QObject*>(this);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (){
    QList<QObject*>  list =  antecedentep2->children();

    string raca = this->jogador->getCaracteristicas().getRaca().getRaca();
    string alinhamento = this->jogador->getCaracteristicas().getAlinhamento().getAlinhamento();
    /*double pnt_atuais =  this->jogador->getCaracteristicas().getPontosxp().getPontosAtuais();
     double pnt_totais =  this->jogador->getCaracteristicas().getPontosxp().getPontosTotais();
      double pnt_faltantes =  this->jogador->getCaracteristicas().getPontosxp().getPontosFaltantes();
*/
    //int nvl = this->jogador->getCaracteristicas().getPontosxp().getNvl();
    string p1_A[2][2] = {{raca, "RAÇA"},{alinhamento, "ALINHAMENTO"}};
    int k = 0;
    int l = 0;

   foreach(QObject* nobj , list){
        QList<QObject*> text_insideRet = nobj->children();
        cout<< "Passou da lista: "<<endl;
        foreach(QObject* texto, text_insideRet){

            if(k < 2){
            cout<<"Entrou repeticao"<<endl;
                texto->setProperty("text", QString::fromStdString(p1_A[k][l]));

            l++;
            }
        }
        l = 0;
        k++;

   }
}

void ControllerTest::setValue(int value)
{
    if (value != this->m_value) {
           this->m_value = value;
          // emit valueChanged(value);
    }
}

void ControllerTest::AddNovaHabilidadeOnList(AtaquesEMagia * a)
{
    this->jogador->getListaAtaquesEMagias()->addAtaqueMagiaNaLista(a);
}

 void ControllerTest::instanciarNovaHabilidade(QString &nome, QString &nivel, QString &tempo, QString &alcance,  QString &duracao, QString &material, QString &descricao)
{
    string str_nome = nome.toStdString();
    string nvl = nivel.toStdString();
    string temp = tempo.toStdString();
    string alc = alcance.toStdString();
    string dura = duracao.toStdString();
    string mteria = material.toStdString();
    string descri = descricao.toStdString();
    cout<<"nome: "<<str_nome<<endl;
    cout<<"nivl: "<<nvl<<endl;
    cout<<"tempp conjuracao: "<<temp<<endl;
    cout<<"alcance: "<<alc<<endl;
    cout<<"duracao: "<<dura<<endl;
    cout<<"material: "<<mteria<<endl;
    cout<<"descricao: "<<descri<<endl;



    AtaquesEMagia * a = new  AtaquesEMagia(str_nome, nvl,temp, alc, this->comp,  mteria, dura, descri);

    this->jogador->getListaAtaquesEMagias()->addAtaqueMagiaNaLista(a);

    this->setModelOnView();
 }

 QVariant ControllerTest::instanciarNovoIdioma(QString &desc)
 {
        string descricao = desc.toStdString();
        cout<<"DESCRICAO INSTANCIAR NOVO IDIOMA: "<<descricao<<endl;
        this->jogador->getIdiomas()->addIdioma(descricao);

        QVariant q = QString::fromStdString(descricao);
        QVariantList qq = QVariantList({q});
          this->listaIdiomas.append(qq);
        //pow->dumpObjectTree();
       // pow->dumpObjectInfo();
      /* QList<QAbstractItemModel *> lista = pow->children();
        QAbstractItemModel  * obj =  lista[1];
        obj->clearItemData(0);*/

        return  q;
 }

 QQuickItem * ControllerTest::getListViewIdiomas()
 {
         QQuickItem*  listveiwidiomas =  this->obj->findChild<QQuickItem *>("lv_carregando");
         return listveiwidiomas;
 }

 void ControllerTest::deleteIdioma(QString &idioma)
 {
     for(string lim : this->jogador->getIdiomas()->getIdiomas()){
         cout<<"Lim Antes: "<<lim<<endl;
     }
        string idio = idioma.toStdString();
        this->jogador->getIdiomas()->rmvIdioma(idio);
        //this->jogador->
        this->listaIdiomas.removeOne(idioma);
        cout<<"REMOVEU?  >> SERÁ????? -> task: "<<endl;
        for(string lim : this->jogador->getIdiomas()->getIdiomas()){
            cout<<"Lim: "<<lim<<endl;
        }


 }

 void ControllerTest::deleteHabilidade(QString &habilitie_id)
 {     for(AtaquesEMagia * lim : this->jogador->getListaAtaquesEMagias()->getListaAtaquesEMagia()){
         cout<<"Lim Antes: "<<lim->getNome()<<endl;
     }
    int id_am  = habilitie_id.toInt();
     this->jogador->getListaAtaquesEMagias()->rmvAtaqueMagiaNaLista(id_am);


      for(AtaquesEMagia * lim : this->jogador->getListaAtaquesEMagias()->getListaAtaquesEMagia()){
             cout<<"Lim Antes: "<<lim->getNome()<<endl;
      }
 }

 void ControllerTest::deleteMochila(QString &item)
 {
     for(Arma * lim : this->jogador->getMochila()->getTodosObjetosNaMochila()){
             cout<<"Lim Antes: "<<lim->getNome()<<endl;
         }
        int id_item  = item.toInt();
        this->jogador->getMochila()->rmvObjetoDaMochila(id_item);


        for(Arma * lim : this->jogador->getMochila()->getTodosObjetosNaMochila()){
                 cout<<"Lim Antes: "<<lim->getNome()<<endl;
          }
 }

 void ControllerTest::deleteTraco(QString &traco)
 {
    string traco_memo = traco.toStdString();
    cout<<"OBjeto recebido traco] "<<traco_memo<<endl;
    this->jogador->getTracos()->rmvTracos(traco_memo);

    for (string t: this->jogador->getTracos()->getTracos()){
       cout<<"TRACo dePOIS DA EXCLUSAO: "<<t<<endl;
    }
 }

 void ControllerTest::deleteIdeais(QString &ideais)
 {
     string ideais_str = ideais.toStdString();

     this->jogador->getIdeais()->rmvListaIdeais(ideais_str);

     for (string t: this->jogador->getIdeais()->getListaIdeais()){
        cout<<"TRACo dePOIS DA EXCLUSAO: "<<t<<endl;
     }
 }

 void ControllerTest::deleteLigacoes(QString &ligacoes)
 {
    cout<<"FUNCAO:  deleteLigacoes"<<endl;
    string liga_str = ligacoes.toStdString();



    this->jogador->getLigacoes()->rmvListaLigacoes(liga_str);

     for (string t: this->jogador->getLigacoes()->getListaLigacoes()){
        cout<<"LIGACOES dePOIS DA EXCLUSAO: "<<t<<endl;
     }
 }

 void ControllerTest::deleteDefeitos(QString &defeitos)
 {
     string ideais_str = defeitos.toStdString();

     this->jogador->getDefeitos()->rmvDefeitos(ideais_str);

     for (string t: this->jogador->getDefeitos()->getListaDefeitos()){
        cout<<"DEfeitos dePOIS DA EXCLUSAO: "<<t<<endl;
     }
 }

 void ControllerTest::deleteOutros(QString &outros)
 {
     string ideais_str = outros.toStdString();

     this->jogador->getCaracteristicasEHabilidades()->rmvCaracteristicaEHabilidade(ideais_str);

     for (string t: this->jogador->getCaracteristicasEHabilidades()->getListCaracteristicas()){
        cout<<"caraHAbilities dePOIS DA EXCLUSAO: "<<t<<endl;
     }
 }

Componentes  ControllerTest::getComponentes()
{
    return this->comp;
}

StatusPericias ControllerTest::getStatusPericias()
{
return this->statuspericia;
}

void ControllerTest::changeV(){
    this->comp.changeV();
    string result = "";
    if(this->comp.getVerbal()){
        result = "true";
    }
    else{
        result = "false";
    }
    cout<<"VALOR BOLL DE V: mudou-> "<<result<<endl;
}

void ControllerTest::resetComponents()
{
    this->comp.reset();

    cout<<"resetoucomponentes"<<endl;
}
void ControllerTest::changeS(){
    this->comp.changeS();
}
void ControllerTest::changeM(){
    this->comp.changeM();
}


void ControllerTest::setEngine(QQmlApplicationEngine engine)
{
    this->engine = &engine;
}
void ControllerTest::AtualizarOnViewPontoxXp(){
    QObject*  antecedentep2 =  this->obj->findChild<QObject *>("xp_list");
   //List<QObject*> lsta = nome_personagem->findChildren<QObject*>(this);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (){
    QList<QObject*>  list =  antecedentep2->children();


    double pnt_atuais =  this->jogador->getCaracteristicas().getPontosxp().getPontosAtuais();
     double pnt_totais =  this->jogador->getCaracteristicas().getPontosxp().getPontosTotais();
      double pnt_faltantes =  this->jogador->getCaracteristicas().getPontosxp().getPontosFaltantes();

    //int nvl = this->jogador->getCaracteristicas().getPontosxp().getNvl();
      double p1_A[3]= {pnt_faltantes, pnt_atuais, pnt_totais};
    int k = 0;

        foreach(QObject* texto, list){
            if(k != 3){
                texto->setProperty("text", QString::number(p1_A[k]));
}

        k++;

    }
}

void ControllerTest::AtualizaOnViewClasseArmaduraeoutros(){
    QObject*  antecedentep2 =  this->obj->findChild<QObject *>("classedearmaduraeoutrosrow");
   //List<QObject*> lsta = nome_personagem->findChildren<QObject*>(this);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (){
    QList<QObject*>  list =  antecedentep2->children();

    int _classe_armadura = this->jogador-> getStatus().getArmadura();
    int _iniciativa = this->jogador->getStatus().getIniciativa();
    double _deslocamento = this->jogador->getStatus().getDeslocamento();
    //int _HP = this->jogador->getStatus().getHp();
    //int _Hp_temporario = this->jogador->getStatus().getHPTemporario();
    //int _HPTotal = this->jogador->getStatus().getHPTOTAL();
    //int nvl = this->jogador->getCaracteristicas().getPontosxp().getNvl();
      double p1_A[3]= {(_classe_armadura) * 1.0, _iniciativa * 1.0, _deslocamento};
      string s_list[3] = {"CLASSE DE ARMADURA", "INICIATIVA", "DESLOCAMENTO"};
        int k, l = 0;
        foreach(QObject* rect, list){
            QList<QObject*> lixt_text = rect->children();
            foreach(QObject* texto, lixt_text ){
                if(!(l > 0)){
                 texto->setProperty("text", QString::number(p1_A[k]));
                }
                else{
                    texto->setProperty("text", QString::fromStdString(s_list[k]));
                }
                l++;
             }
            l=0;
        k++;

        }
}


QVariant  ControllerTest::testeDeEntrada(){
    /////////////////// AP ARTIR DA QUI USA-se SETCONTEXTOBJECT

//val->toStdString()
    //cout<<"OLHA O DEBOCHE: "<<endl; // <<val->toStdString()<<endl;
    //return this->cleiton;
    string zeze= "peripecias";
    QString  result_qstring =  QString::fromStdString(this->cleiton);
  QVariant myStdString;

  myStdString = result_qstring;

  return myStdString;
}

QString ControllerTest::getText()
{

}

void ControllerTest::setText(QString &text)
{
    cout<<"dentro func setTExt: "<< text.toStdString()<< endl;
}

void ControllerTest::openwindow()
{   cout<<"PARABENS"<<endl;
    //const QUrl url("qrc:/Views/NovaJanela.qml");
    //his->engine->load(url);
}



void ControllerTest::setPontosdeVidaOnView(){
    QObject*  ponto_vida =  this->obj->findChild<QObject *>("ponto_vida");
   //List<QObject*> lsta = nome_personagem->findChildren<QObject*>(this);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (){
    QList<QObject*>  list =  ponto_vida->children();

    int hp = this->jogador->getStatus().getHp();
    int hp_temp = this->jogador->getStatus().getHPTemporario();
    int hptotal = this->jogador->getStatus().getHPTOTAL();
    //int nvl = thisjogador->getCaracteristicas().getPontosxp().getNvl();
      int p1_A[3]= {hp, hptotal, hp_temp};


      /*for (int i = 0; i < 3; ++i) {
          cout<< "VALOR RECEBIDO: "<< p1_A[i];

      }*/

      //string s_list[3] = {"HP", "HP TOTAL", "HP TEMPORARIO"};
        int k =0; int l  = 0;
        foreach(QObject* rect, list){
               QList<QObject *> lista =  rect->children();
              foreach(QObject * text, lista){
                  if(l == 0){
                    text->setProperty("text", QString::number(p1_A[k]));
                  }
                  l++;
              }
              l= 0;
              k++;
        }

}

void ControllerTest::setDadoVidaOnView(){
    QObject*  dadovida =  this->obj->findChild<QObject *>("dadovida");
    string dadus = this-> jogador->getStatus().getDadoVida();

    dadovida->setProperty("text", QString::fromStdString(dadus));
}

void ControllerTest::setValTestesResistenciaOnView(){


    int resistforca = this->jogador->getProeficiencias().getTesteResistencia().getForcaResist();
    int resistdes =  this->jogador->getProeficiencias().getTesteResistencia().getDestreza();
    int resistcon =  this->jogador->getProeficiencias().getTesteResistencia().getConstituicao();
    int resistint =  this->jogador->getProeficiencias().getTesteResistencia().getInteligencia();
    int resistsab =  this->jogador->getProeficiencias().getTesteResistencia().getSabedoria();
    int resistcha =  this->jogador->getProeficiencias().getTesteResistencia().getCarisma();
    cout<<"RESISTINT > : "<<resistint<<endl;
    int vet_resist[6] = {resistforca, resistdes, resistcon, resistint, resistsab, resistcha};
    int i= 0;
            int j = 0;
    QObject*  colum =  this->obj->findChild<QObject *>("resistenciateste");
    QList<QObject *>list_ = colum->children();
    foreach(QObject*rec , list_){
       QList<QObject *>list_text  = rec->children();
       foreach(QObject * texto, list_text){
           if (j == 0){
            texto->setProperty("text", vet_resist[i]);
            i++;
           }
           j++;
       }
       j = 0;

    }
}

void ControllerTest::setPericiasOnView(){
    int p_acrobacia = this->jogador->getProeficiencias().getPericias().getacrobacia();
    int p_arcanismo =  this->jogador->getProeficiencias().getPericias().getarcanismo();
    int p_atletistmo = this->jogador->getProeficiencias().getPericias().getatletismo();
    int p_atuacao = this->jogador->getProeficiencias().getPericias().getatuacao();
    int p_blefar  = this->jogador->getProeficiencias().getPericias().getblefe();
    int p_furtividade =  this->jogador->getProeficiencias().getPericias().getfurtividade();
    int p_historia =  this->jogador->getProeficiencias().getPericias().gethistoria();
    int p_intimidacao =  this->jogador->getProeficiencias().getPericias().getintimidacao();
    int p_intuicao  = this->jogador->getProeficiencias().getPericias().getintuicao();
    int p_investigacao  = this->jogador->getProeficiencias().getPericias().getinvestigacao();
    int p_lidaranimais = this->jogador->getProeficiencias().getPericias().getlidarcomanimais();
    int p_medicida = this->jogador->getProeficiencias().getPericias().getmedicina();
    int p_natureza = this->jogador->getProeficiencias().getPericias().getnatureza();
    int p_percepcao = this->jogador->getProeficiencias().getPericias().getpercepcao();
    int p_persuasao = this->jogador->getProeficiencias().getPericias().getpersuasao();
    int p_presdigitacao = this->jogador->getProeficiencias().getPericias().getpresdigitacao();
    int p_religiao = this->jogador->getProeficiencias().getPericias().getreligiao();
    int p_sobrevivencia = this->jogador->getProeficiencias().getPericias().getsobrevivencia();

    int vet_pericias[18] ={p_acrobacia, p_arcanismo, p_atletistmo, p_atuacao, p_blefar, p_furtividade, p_historia, p_intimidacao
                          ,p_intuicao, p_investigacao, p_lidaranimais, p_medicida, p_natureza, p_percepcao, p_persuasao, p_presdigitacao,
                          p_religiao, p_sobrevivencia};
int i = 0;
int l = 0;
     QObject*  pericias =  this->obj->findChild<QObject *>("pericias");
    QList<QObject *>lista_rec = pericias->children();
    foreach(QObject * rec, lista_rec){
        QList<QObject *> lista_txt=   rec->children();
        foreach(QObject * texto, lista_txt){
            if (l ==0){
            texto->setProperty("text", QString::number(vet_pericias[i]));
            i++;
            l++;
            }
        }
        l=0;
    }


}

void ControllerTest::setPercepcaoPassivaOnView(){
    int percep = this->jogador->getPercepcao();
    QObject*  per =  this->obj->findChild<QObject *>("percepcao");
    per->setProperty("text", QString::number(percep));
}

int ControllerTest::getIntanciasObj(){
    return 4;
}

void ControllerTest::mudaNomeObjectAtaqueHabil(){
    QObject*  listview =  this->obj->findChild<QObject *>("lv_carregando");
    listview->setObjectName(QString::fromStdString("lv_carregado"));
    listview->setProperty("color", "red");
    cout<<"Mudou nome do OBJETO? "<<endl;

}


QString  ControllerTest::getNomeHabilidade(){//AtaquesEMagia a){
    AtaquesEMagia * e = new AtaquesEMagia("soco divino", "nvl 1","10 min", "2metros", this->comp, "", "10min", "zoio" );

     QString Q_nome = QString::fromStdString(e->getNome());
    return Q_nome;
}

void ControllerTest::setListaAtaquesToFront(){
        ListaAtaquesEMagias *  li = this->jogador->getListaAtaquesEMagias();
        list<AtaquesEMagia *> la = li->getListaAtaquesEMagia();

       //QList<QVariant> lista_geral;
       for (AtaquesEMagia * a : la){
           cout<<"entrou repeticao EtListaATaquesToFront: "<<endl;
           int id = a->getId();
           string nome = a->getNome();
           string nvl =  a->getNvl();
           string tempoconju = a->getCustoAcao();
           string alcance =  a->getAlcance();
           string duracao = a->getDuracao();
           string v= a->getCompoenentes().getStringVerbal();
           string m = a->getMateriais();
           string s = a->getCompoenentes().getStringGestos();
           string descricao = a->getDescricao();


           cout<< "PASSOU DOS GETFROM A ATAQUEMAGIAS"<<endl;
           QVariant Q_id = QString::number(id);
           QVariant Q_nome  = QString::fromStdString(nome);
           QVariant Q_nvl = QString::fromStdString(nvl);
           QVariant Q_tempo =  QString::fromStdString(tempoconju);
           QVariant Q_alcance = QString::fromStdString(alcance);
           QVariant Q_duraco = QString::fromStdString(duracao);
           QVariant Q_v = QString::fromStdString(v);
           QVariant Q_m = QString::fromStdString(m);
           QVariant Q_s = QString::fromStdString(s);
           QVariant Q_descricao = QString::fromStdString(descricao);

            cout<<"Criou objetos QVariant> "<<endl;

           QVariantList lisssst = {Q_id,Q_nome, Q_nvl, Q_tempo, Q_alcance, Q_duraco, Q_v, Q_m, Q_s, Q_descricao} ;
           cout<<"criou a lista Qvariant: >> "<<endl;
            this->listahabilidades.append(lisssst);
           cout<<"adicionou no listahabilidades:>>> "<<endl;
       }
       //this->listahabilidades = &lista_geral;
}

/*QVariantList ControllerTest::getEachQstringValueOnHAbilities(int indice)
{   cout<<"teste get :  "<<this->listahabilidades[0]toStdString()<<endl;
    cout<<"ENTROU GET QSTRINGLIST> : "<<indice<<endl;
    return this->listahabilidades[indice];
}*/

QList<QVariantList> ControllerTest::getIdiomasOnView(){
    return this-> listaIdiomas;
}

QList<QVariantList> ControllerTest::getlistCaracteristicasHabilidades()
{
    return this->listaCaracteristicasHabilidades;
}

QList<QVariantList> ControllerTest::getlistLigacoes()
{
    return this->listaLigacoes;
}

QList<QVariantList> ControllerTest::getlistDefeitos()
{
    return this->listaDefeitos;
}

QList<QVariantList> ControllerTest::getlistIdeais()
{
    return this->listaIdeais;
}

QList<QVariantList> ControllerTest::getListTracos()
{
    return this->listaTracos;
}

QVariant ControllerTest::changeStatusacrobacia()
{

    this->statuspericia.changeacrobacia();
    string g = "false";
    int result;
    if(this->statuspericia.getacrobacia()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModDestreza();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setacrobacia(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModDestreza();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setacrobacia(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS ACROBACIA: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusarcanismo()
{
    this->statuspericia.changearcanismo();
    string g = "false";
    int result;
    if(this->statuspericia.getarcanismo()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setarcanismo(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setarcanismo(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS ARCANISMO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusatletismo()
{
    this->statuspericia.changeatletismo();
    string g = "false";
    int result;
    if(this->statuspericia.getatletismo()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModForca();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setatletismo(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModForca();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setatletismo(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS ATLETISMO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusatuacao()
{
    this->statuspericia.changeatuacao();
    string g = "false";
    int result;
    if(this->statuspericia.getatuacao()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModCarisma();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setatuacao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModCarisma();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setatuacao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS ATUACAO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusblefar()
{
    this->statuspericia.changeblefe();
    string g = "false";
    int result;
    if(this->statuspericia.getblefe()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModCarisma();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setblefe(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModCarisma();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setblefe(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS BLEFAR: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusfurtividade()
{
    this->statuspericia.changefurtividade();
    string g = "false";
    int result;
    if(this->statuspericia.getfurtividade()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModDestreza();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setfurtividade(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModDestreza();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setfurtividade(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS FURTIVIDADE: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatushistoria()
{
    this->statuspericia.changehistoria();
    string g = "false";
    int result;
    if(this->statuspericia.gethistoria()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().sethistoria(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().sethistoria(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS HISTORIA: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusintimidacao()
{
    this->statuspericia.changeintimidacao();
    string g = "false";
    int result;
    if(this->statuspericia.getintimidacao()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModCarisma();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setintimidacao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModCarisma();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setblefe(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS INTIMIDACAO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusintuicao()
{
    this->statuspericia.changeintuicao();
    string g = "false";
    int result;
    if(this->statuspericia.getintuicao()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setintuicao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setintuicao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS INTUICAO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusinvestigacao()
{
    int result;
    this->statuspericia.changeinvestigacao();
    string g = "false";
    if(this->statuspericia.getinvestigacao()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setinvestigacao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setinvestigacao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS IVESTIGACAO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatuslidarcomnimais()
{
    this->statuspericia.changelidarcomanimais();
    string g = "false";
    int result;
    if(this->statuspericia.getlidarcomanimais()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setlidarcomanimais(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setlidarcomanimais(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS LIDARCOMNIMAIS: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusmedicina()
{
    this->statuspericia.changemedicina();
    string g = "false";
    int result;
    if(this->statuspericia.getmedicina()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setmedicina(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setmedicina(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS MEDICINA: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusnatureza()
{
    this->statuspericia.changenatureza();
    string g = "false";
    int result;
    if(this->statuspericia.getnatureza()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setnatureza(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setnatureza(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS NATUREZA: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatuspercepcao()
{
    this->statuspericia.changepercepcao();
    string g = "false";
    int result;
    if(this->statuspericia.getpercepcao()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setpercepcao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setpercepcao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS PERCEPCAO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatuspersuasao()
{
    this->statuspericia.changepersuasao();
    string g = "false";
    int result;
    if(this->statuspericia.getpersuasao()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModCarisma();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setpersuasao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModCarisma();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setpersuasao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS PERSUASAO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatuspresdigitacao()
{
    this->statuspericia.changepresdigitacao();
    string g = "false";
    int result;
    if(this->statuspericia.getpresdigitacao()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModDestreza();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setpresdigitacao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModDestreza();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setpresdigitacao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS PRESDIGITACAO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatusreligiao()
{
    this->statuspericia.changereligiao();
    string g = "false";
    int result;
    if(this->statuspericia.getreligiao()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setreligiao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModInteligencia();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setreligiao(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS RELIGIAO: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

QVariant ControllerTest::changeStatussobrevivencia()
{
    this->statuspericia.changesobrevivencia();
    string g = "false";
    int result;
    if(this->statuspericia.getsobrevivencia()){
        g = "true";
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, true);
        this->jogador->getProeficiencias().getPericias().setsobrevivencia(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    else{
        int valvalzim  = this->jogador->getAtributos().getModSabedoria();
        result  = this->jogador->getProeficiencias().getPericias().CalculaPontosPericia(valvalzim, false);
        this->jogador->getProeficiencias().getPericias().setsobrevivencia(result);
       cout<<"VALOR::: TATUS TATUS-> "<<to_string(result)<<endl;
    }
    cout<<"VALOR STATUS SOBREVIVENCIA: "<<g<<endl;
    QVariant q  = QString::number(result);
    return q;
}

void ControllerTest::setIdiomasOnView(){
    cout<<"Entrou em set IDIOMAS:_> "<<endl;

    Idiomas * i  = this->jogador->getIdiomas();
    list<string> li = i->getIdiomas();
    for (string  oma : li){
        cout<<"IDIOMA_> "<<oma<<endl;
       QVariant Q_idiomaProf = QString::fromStdString(oma);
       QVariantList l = {Q_idiomaProf};
       this->listaIdiomas.append(l);
    }
}

void ControllerTest::setCaracteristicasEHabilidadesOnView(){
    CaracteristicasEHabilidades * i  = this->jogador->getCaracteristicasEHabilidades();
    list<string> li = i->getListCaracteristicas();
    for (string  oma : li){
        cout<<" CARACTERISTICAS HABILIDADES > "<<oma<<endl;
       QVariant Q_idiomaProf = QString::fromStdString(oma);
       QVariantList l = {Q_idiomaProf};
       this->listaCaracteristicasHabilidades.append(l);
}

}

void ControllerTest::setLigacoesOnView()
{
    Ligacoes * i  = this->jogador->getLigacoes();
    list<string> li = i->getListaLigacoes();
        for (string  oma : li){
            cout<<" Ligaçoes do Personagem> "<<oma<<endl;
           QVariant Q_idiomaProf = QString::fromStdString(oma);
           QVariantList l = {Q_idiomaProf};
           this->listaLigacoes.append(l);
        }
}

void ControllerTest::setDefeitosOnView()
{
    Defeitos * i  = this->jogador->getDefeitos();
    list<string> li = i->getListaDefeitos();
        for (string  oma : li){
            cout<<" Defeitos do Personagem> "<<oma<<endl;
           QVariant Q_idiomaProf = QString::fromStdString(oma);
           QVariantList l = {Q_idiomaProf};
           this->listaDefeitos.append(l);
        }
}

void ControllerTest::setIdeaisOnView()
{
    Ideais * i  = this->jogador->getIdeais();
    list<string> li = i->getListaIdeais();
        for (string  oma : li){
            cout<<" Ideais do Personagem> "<<oma<<endl;
           QVariant Q_idiomaProf = QString::fromStdString(oma);
           QVariantList l = {Q_idiomaProf};
           this->listaIdeais.append(l);
        }
}

void ControllerTest::setTracosOnView()
{
    Tracos * i  = this->jogador->getTracos();
    list<string> li = i->getTracos();
        for (string  oma : li){
            cout<<" Tracos do Personagem> "<<oma<<endl;
           QVariant Q_idiomaProf = QString::fromStdString(oma);
           QVariantList l = {Q_idiomaProf};
           this->listaTracos.append(l);
        }
}

void ControllerTest::setBonusProefiOnView(int s)
{       QObject*  per =  this->obj->findChild<QObject *>("lb_proeficiencia");
        per->setProperty("text", QString::number(s));

}

void ControllerTest::alterarBonus(QString &v)
{
    int val = v.toInt();

    //int val_num = stoi(val);
    cout<<"VALOR RECEBIDO ALTERAR BONUS: "<<val<<endl;
    this->jogador->alterarBonus(val);
    int s = this->jogador->getProeficiencias().getBonus();

    cout<<"valor dentro do objeto:: "<<to_string(s)<<endl;
}

void ControllerTest::salvarJogador()
{   cout<<"FUNC SALVAR DENTRO DA CLASSE CONTROLLER"<<endl;
    Salvar * save =  new Salvar(this->jogador);
    save->save();

}

void ControllerTest::carregarJogador()
{
        cout<<"FUNC SALVAR DENTRO DA CLASSE CONTROLLER"<<endl;
       Salvar * save =  new Salvar(this->jogador);
       save->load();
}

void ControllerTest::setEquipamentosOnView(){

    list<Arma* >  li = this->jogador->getMochila()->getTodosObjetosNaMochila();
    cout<<"entrou na funcao setEquipamentos on view"<<endl;
  // list<AtaquesEMagia *> la = li.getListaAtaquesEMagia();

   //QList<QVariant> lista_geral;
   for (Arma *  a : li){
       cout<<"entrou repeticao EtListaATaquesToFront: "<<endl;
       int id = a->getId();
       string nome = a->getNome();
       string dano =  a->getDano();
       string tipo = a->getTipo();
       string peso =  to_string(a->getPeso());
       string preco = to_string(a->getPreco());
       list<string> v = a->getPropriedades();
       for(string d : v){
           cout<<"descricao:  "<<d<<endl;
       }
       cout<< "PASSOU DOS GETFROM A ATAQUEMAGIAS"<<endl;
       QVariant Q_id = QString::number(id);
       QVariant Q_nome  = QString::fromStdString(nome);
       QVariant Q_dano = QString::fromStdString(dano);
       QVariant Q_tipo =  QString::fromStdString(tipo);
       QVariant Q_peso = QString::fromStdString(peso);
       QVariant Q_preco = QString::fromStdString(preco);
        cout<<"Criou objetos QVariant> "<<endl;

       QVariantList lisssst = {Q_id, Q_nome, Q_dano, Q_tipo, Q_peso, Q_preco};
       cout<<"criou a lista Qvariant: >> "<<endl;
        this->listaEquipamentos.append(lisssst);
       cout<<"adicionou no ListAEQUIPAMENTOS:>>> "<<endl;
   }
}


void ControllerTest::setCompoenentes(bool v, bool s, bool m)
{
    Componentes  comp =   Componentes(v, s, m);
    this->comp = comp;
}
