#include "salvar.h"
#include <QFileDialog>
#include <QApplication>
#include <iostream>

Salvar::Salvar(Jogador  * jogador) : _jogador(jogador)
{


}

string Salvar::loadaux()
{

}

void Salvar::save()
{
    cout<<"construtor SALVAR"<<endl;
   string nomepersonagem = this->_jogador->getCaracteristicas().getNome();
  QJsonObject caracteristicas_obj;
  caracteristicas_obj.insert("Nome jogador", QString::fromStdString(this->_jogador->getCaracteristicas().getNomeJogador()));
  caracteristicas_obj.insert("Nome Personagem", QString::fromStdString(nomepersonagem));
  caracteristicas_obj.insert("Alinhamento", QString::fromStdString(this->_jogador->getCaracteristicas().getAlinhamento().getAlinhamento()));
  caracteristicas_obj.insert("Antecedente", QString::fromStdString(this->_jogador->getCaracteristicas().getAntecedente().getAntecedente()));
  caracteristicas_obj.insert("Classe", QString::fromStdString(this->_jogador->getCaracteristicas().getClasse().getClasse()));
  caracteristicas_obj.insert("Raça", QString::fromStdString(this->_jogador->getCaracteristicas().getRaca().getRaca()));

  QJsonObject Xp;
  Xp.insert("Nvl", QString::fromStdString(to_string(this->_jogador->getCaracteristicas().getPontosxp().getNvl())));
  Xp.insert("Pontos Atuais", QString::fromStdString(to_string(this->_jogador->getCaracteristicas().getPontosxp().getPontosAtuais())));
  Xp.insert("Pontos Faltantes", QString::fromStdString(to_string(this->_jogador->getCaracteristicas().getPontosxp().getPontosFaltantes())));
  Xp.insert("Pontos Totais", QString::fromStdString(to_string(this->_jogador->getCaracteristicas().getPontosxp().getPontosTotais())));
  caracteristicas_obj.insert("XP", Xp);

  QJsonArray caracteristicashabilidade_obj;
    int contador = 0;
  for(string x : this->_jogador->getCaracteristicasEHabilidades()->getListCaracteristicas()){
    caracteristicashabilidade_obj.append(QString::fromStdString(x));
    contador++;
  }

    QJsonObject mod_atributos;
    mod_atributos.insert("modificador carisma", QString::number(this->_jogador->getAtributos().getModCarisma()));
    mod_atributos.insert("modificador forca",  QString::number(this->_jogador->getAtributos().getModForca()));
    mod_atributos.insert("modificador destreza",  QString::number(this->_jogador->getAtributos().getModDestreza()));
    mod_atributos.insert("modificador constituicao",  QString::number(this->_jogador->getAtributos().getModConstituicao()));
    mod_atributos.insert("modificador sabedoria",  QString::number(this->_jogador->getAtributos().getModSabedoria()));
    mod_atributos.insert("modificador inteligencia",  QString::number(this->_jogador->getAtributos().getModInteligencia()));

    QJsonObject atributos_obj;
    atributos_obj.insert("Carisma",  QString::number(this->_jogador->getAtributos().getCarisma()));
    atributos_obj.insert("Forca",  QString::number(this->_jogador->getAtributos().getForca()));
    atributos_obj.insert("Destreza",  QString::number(this->_jogador->getAtributos().getDestreza()));
    atributos_obj.insert("Constituicao",  QString::number(this->_jogador->getAtributos().getConstituicao()));
    atributos_obj.insert("Sabedoria",  QString::number(this->_jogador->getAtributos().getSabedoria()));
    atributos_obj.insert("Inteligencia",  QString::number(this->_jogador->getAtributos().getInteligencia()));
    atributos_obj.insert("Modificadores", mod_atributos);

    QJsonObject status_obj;
    status_obj.insert("Armadura", QString::number(this->_jogador->getStatus().getArmadura()));
    status_obj.insert("Iniciativa", QString::number(this->_jogador->getStatus().getIniciativa()));
    status_obj.insert("Deslocamento", QString::number(this->_jogador->getStatus().getDeslocamento()));
    status_obj.insert("HP total", QString::number(this->_jogador->getStatus().getHPTOTAL()));
    status_obj.insert("HP temporario", QString::number(this->_jogador->getStatus().getHPTemporario()));
    status_obj.insert("HP", QString::number(this->_jogador->getStatus().getHp()));
    status_obj.insert("Dado de Vida", QString::fromStdString(this->_jogador->getStatus().getDadoVida()));

    QJsonArray tracos_obj;
    for(string f : this->_jogador->getTracos()->getTracos()){
        tracos_obj.append(QString::fromStdString(f));
    }

   /* QJsonObject equipados_obj;
    equipados_obj.insert("", jogador->getEquipados().getBracodireito());
    */
    QJsonArray mochila_arr;

    for(Arma * arma : this->_jogador->getMochila()->getTodosObjetosNaMochila()){
        QJsonObject equipamento_obj;
        equipamento_obj.insert("NOME",QString::fromStdString(arma->getNome()));
        equipamento_obj.insert("DANO", QString::fromStdString(arma->getDano()));
        equipamento_obj.insert("TIPO", QString::fromStdString(arma->getTipo()));
        equipamento_obj.insert("PESO", QString::number(arma->getPeso()));
        equipamento_obj.insert("PRECO", QString::number(arma->getPreco()));
        QJsonArray propiedad;
        for(string propriedade: arma->getPropriedades()){
            propiedad.append(QString::fromStdString(propriedade));
        }
        equipamento_obj.insert("Propriedades", propiedad);
        mochila_arr.append( equipamento_obj);
    }

   QJsonArray ataques_magia;

    for(AtaquesEMagia * a : this->_jogador->getListaAtaquesEMagias()->getListaAtaquesEMagia()){
        QJsonObject ataque;
        ataque.insert("Alcance", QString::fromStdString(a->getAlcance()));
        ataque.insert("Custo Acao", QString::fromStdString(a->getCustoAcao()));
        ataque.insert("Duracao", QString::fromStdString(a->getDuracao()));
        ataque.insert("Descricao", QString::fromStdString(a->getDescricao()));
        ataque.insert("Materiais", QString::fromStdString(a->getMateriais()));
        ataque.insert("Nome", QString::fromStdString(a->getNome()));
        ataque.insert("Nvl", QString::fromStdString(a->getNvl()));
        ataque.insert("Materiais: Gestos", QString::fromStdString(a->getCompoenentes().getStringGestos()));
        ataque.insert("Materiais: Materiais", QString::fromStdString(a->getCompoenentes().getStringMateriais()));
        ataque.insert("Materiais: Verbal", QString::fromStdString(a->getCompoenentes().getStringVerbal()));
        ataques_magia.append(ataque);
    }
    ;



     QJsonArray idiomas_obj;
    for(string l : this->_jogador->getIdiomas()->getIdiomas()){
     idiomas_obj.append(QString::fromStdString(l));
    }

    QJsonArray ligacoes_obj;
    for(string h: this->_jogador->getLigacoes()->getListaLigacoes()){
        ligacoes_obj.append(QString::fromStdString(h));
    }

    QJsonArray defeitos_obj;
    for(string j: this->_jogador->getDefeitos()->getListaDefeitos()){
        defeitos_obj.append(QString::fromStdString(j));
    }

    QJsonArray ideais_obj;
    for(string k: this->_jogador->getIdeais()->getListaIdeais()){
        ideais_obj.append(QString::fromStdString(k));
    }
   // proeficiencias.insert("Bonus",QString::number(jogador->getProeficiencias().getBonus()));
   // proeficiencias.insert("pericias", pericias);

   // proeficiencias.insert("", QString::number(jogador->getProeficiencias().getPericias()));


        QJsonObject recordObject;
        recordObject.insert("Caracteristicas",caracteristicas_obj);
        recordObject.insert("Caracteristicas Habilidades", caracteristicashabilidade_obj);
        recordObject.insert("Atributos", atributos_obj);
        recordObject.insert("Status", status_obj);
        recordObject.insert("Tracos", tracos_obj);
        recordObject.insert("Mochila", mochila_arr);
        recordObject.insert("Percepcao",  QString::number(this->_jogador->getPercepcao()));
        recordObject.insert("Ataque Habilidades", ataques_magia);
        recordObject.insert("Bonus Proeficiencia", QString::number(this->_jogador->getProeficiencias().getBonus()));
        recordObject.insert("Idiomas", idiomas_obj);
        recordObject.insert("ligacoes", ligacoes_obj);
        recordObject.insert("defeitos", defeitos_obj);
        recordObject.insert("ideais", ideais_obj);
        QJsonDocument doc(recordObject);
        doc.toJson();

        QString filename = QString::fromStdString("C:/Qt/Projetos/projetosqt/Ficha/"+nomepersonagem+".json");
           QFile file(filename);
           if (file.open(QIODevice::ReadWrite)) {
               QTextStream stream(&file);
               qDebug() << "something" ;
               //QString strJson(doc.toJson(QJsonDocument::Compact));
                           //string humano =   strJson.toStdString();
                           file.write(doc.toJson()); //<< humano << "\n";


           } else{
               qDebug() << "file open error";
       }

        qDebug() << doc.toJson();


        //string vehiclesList[10] = { "value0", "value1", "value2","value3", "value4", "value5","value6", "value7","value8", "value9" };
          //cout<<"veiculo: "<<vehiclesList[0];
        //int arraySize = *(&vehiclesList + 1) - vehiclesList;
        //exception handling
          cout << "\nWriting  array contents to file...";
          //open file for writing

        //string url ="qrc:/"+nomepersonagem+".json";

       // ofstream fw(url, ofstream::out);
        /*  QFile jsonfile(QString::fromStdString("qrc:/"+nomepersonagem+".json"));
      /*  jsonfile.open();
          //check if file was successfully opened for writing
          //jsonfile.open(QFile::WriteOnly);

        if (jsonfile.isOpen())
          {

                //store array contents to text file

                  //fill->write(doc.toJson());
              //QString strJson(doc.toJson(QJsonDocument::Compact));
              //string humano =   strJson.toStdString();
              //fw << humano << "\n";
            jsonfile.write(doc.toJson());
            jsonfile.close();

          }
          else
          {
              cout << "Problem with opening file";
        }

          cout<<"\nDone!";*/
}

void Salvar::load()
{
    QFile inFile("C:/Qt/Projetos/projetosqt/Ficha/ESPECTRO Tempesfuria.json");

    inFile.open(QIODevice::ReadOnly|QIODevice::Text);

    QByteArray data = inFile.readAll();
    inFile.close();

    QJsonParseError errorPtr;
    QJsonDocument doc = QJsonDocument::fromJson(data, &errorPtr);
      if (doc.isNull()) {
          qDebug() << "Parse failed";
      }
      QJsonObject rootObj = doc.object();
      QVector<QPointF> listPoints;
      QJsonArray ptsArray = rootObj.value("Ataque Habilidades").toArray();
      qDebug() << "There are " << ptsArray.size() << "sets of points in the json file";
      foreach(const QJsonValue & val, ptsArray){
          QJsonValue val_nome = val.toObject().value("Nome");
          qDebug() << val_nome.toString();
            //ptsArray.append(val_nome);
      }



}


