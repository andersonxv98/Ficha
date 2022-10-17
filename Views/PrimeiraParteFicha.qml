import QtQuick
import QtQuick.Controls
import QtQuick.Window
import QtQuick.Layouts
Item {
    ColumnLayout{
        id:e2
        anchors.fill: parent
        Rectangle{
            id: reTopDir
            Layout.preferredHeight: primeiraRe2.height * 0.5
            Layout.preferredWidth: primeiraRe2.width
            //color: "gray"
            RowLayout{
                Loader{
                    source: "qrc:/Views/PrimeiraParteAntecedentes.qml"
                }
            }
        }
        Rectangle{
            id: reTopEsq
            Layout.preferredHeight: primeiraRe2.height * 0.5
            Layout.preferredWidth: primeiraRe2.width
            //color: "gray"
            RowLayout{
                Loader{
                    source: "qrc:/Views/SegundaParteAntecedentes.qml"
                }
            }
         }

    }
}

