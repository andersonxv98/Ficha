import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    Rectangle{
        id: nreesp2
        Layout.preferredHeight: esp2.height
        Layout.preferredWidth: esp2.width
        color: "blue"
    ColumnLayout{
        id: conteudoSegundaParte
        //anchors.fill: parent
        Rectangle{
            id: conteudoSegundaParte_pt1
            Layout.preferredHeight: esp2.height * 0.33
            Layout.preferredWidth: esp2.width
            //color: "#0EE693"
            ColumnLayout{
                Loader{
                    source: "qrc:/Views/StatusView.qml"
                }
            }

        }

        Rectangle{
            id:  conteudoSegundaParte_pespecial
            Layout.preferredHeight: btnnovabilitie.height
            Layout.preferredWidth: esp2.width
            color: "#0EE693"

            Button{
                id: btnnovabilitie
                text: "CLIQUE AQUI PARA RECLAMAR"
                onClicked: {
                    console.log("Puta falta de sacanagem... vc entra no jogo pra  desestressar e o cara q joga a 30 anoss, n deixa vc sair da base")
                    var component = Qt.createComponent("qrc:/Views/NovaJanela.qml")
                               var newwindow    = component.createObject(mainwindow)
                               newwindow.show()
                }
            }

        }
        Rectangle{
            id:  conteudoSegundaParte_pt2
            Layout.preferredHeight: esp2.height * 0.30
            Layout.preferredWidth: esp2.width
            color: "#0EE693"

            ColumnLayout{
                Loader{
                    source: "qrc:/Views/AtaquesEconjuracao.qml"

                }
            }
    }
        Rectangle{
            id:  conteudoSegundaParte_pespecial2
            Layout.preferredHeight: btnnovabilitie2.height
            Layout.preferredWidth: esp2.width
            color: "#0EE693"

            Button{
                id: btnnovabilitie2
                text: "CLIQUE AQUI PARA RECLAMAR"
                onClicked: {
                   // console.log("Puta falta de sacanagem... vc entra no jogo pra  desestressar e o cara q joga a 30 anoss, n deixa vc sair da base")
                    var component = Qt.createComponent("qrc:/Views/NewEquip.qml")
                               var newwindow    = component.createObject(mainwindow)
                               newwindow.show()
                }
            }
        }

        Rectangle{
            id:  conteudoSegundaParte_pt3
            Layout.preferredHeight: esp2.height * 0.30
            Layout.preferredWidth: esp2.width
            //color: "#0EE693"
            ListView{
                Loader{
                    source: "qrc:/Views/EquipamentosView.qml"
                }
            }
}
        }
    }
}
