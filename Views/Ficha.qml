import QtQuick
import QtQuick.Controls
import QtQuick.Window
import QtQuick.Layouts
Item {

   ColumnLayout{
        RowLayout{
            Rectangle{
                id:primeiraRe
                Layout.preferredWidth:  mainwindow.width * 0.3
                Layout.preferredHeight: mainwindow.height * 0.15
                color: "pink"
                objectName: "retangulo_nomepersonagem"
                Text {
                    property string nome_pernosagem: "nome do personagem"
                   id: nome_personagem
                   text: nome_pernosagem
                   anchors.centerIn: parent
                   objectName: "name_nomepersonagem"
                }

            }

            Rectangle {
                id:primeiraRe2
                Layout.preferredWidth:  mainwindow.width * 0.7
                Layout.preferredHeight: mainwindow.height * 0.15
                //color: "orange"
                ColumnLayout{
                    Loader{

                       source: "qrc:/Views/PrimeiraParteFicha.qml"
                    }
                }
            }

        }

            Rectangle{
                id: segunda_partLayout
                Layout.preferredWidth:  mainwindow.width
                Layout.preferredHeight: mainwindow.height * 0.90
                SwipeView{
                 Loader{
                        source: "qrc:/Views/SegundaParteFicha.qml"
                    }
                }

        }

}
}

