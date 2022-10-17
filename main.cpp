#include "Controllers/ControllerTest.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <iostream>
#include <QQmlProperties>
#include <QQuickItem>
#include <QObject>
#include <QQmlContext>



using namespace std;

int main(int argc, char *argv[])
{   // INICALIZAÇÂO DA VIEW QT
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url("qrc:/Ficha/main.qml");
    Componentes cp  = Componentes(false,false,false);
    ControllerTest * novoControlador = new ControllerTest(cp);
     engine.rootContext()->setContextProperty("controllador",novoControlador);

    engine.load(url);

    QObject *win = (engine.rootObjects())[0];
    novoControlador->setWin(win);
    novoControlador->setEngine(&engine);
    // -------------------------------TEREZA
    cout<<"Teste: Iniciou a rodda pelé "<<endl;
    novoControlador->Carregarinformacoes();
    app.exec();


    return 0;


}
