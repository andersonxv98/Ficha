import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    RowLayout{
        id: dadodevidadeblalbalba_id
        anchors.fill: parent
        Rectangle{
            id: dadodevida_id
            Layout.preferredHeight: dadodevidaeoutros_id.height
            Layout.preferredWidth: dadodevidaeoutros_id.width * 0.5
            color: "#65FFA7"
            Text {
                id: dadodevida_idtxt
                text: qsTr("Dado de Vida")
                anchors.centerIn:   parent
                objectName: "dadovida"
            }
            Text {
                id: dadodevida_idtxt2
                text: qsTr("Dado de Vida")
                anchors.bottom:  parent.bottom
                anchors.horizontalCenter: parent.horizontalCenter
            }

        }
        Rectangle{
            id: testedemorte_id
            Layout.preferredHeight: dadodevidaeoutros_id.height
            Layout.preferredWidth: dadodevidaeoutros_id.width * 0.5
            color: "#65FFA7"
            ColumnLayout{
            RowLayout{
                //anchor.fill: testedemorte_id
                Text {

                    id: testedemorte_idtxt
                    text: qsTr("Textes de Sucesso:")


                }

                CheckBox {
                       checked: true
                       text: qsTr("")
                   }
                CheckBox {
                       checked: true
                       text: qsTr("")
                   }
                CheckBox {
                       checked: true
                       text: qsTr("")
                   }
            }
            RowLayout{
                //anchor.fill: testedemorte_id
                Text {

                    id: testedemorte_id2txt
                    text: qsTr("Textes de Muerte:")

                }

                CheckBox {
                       checked: true
                       text: qsTr("")
                   }
                CheckBox {
                       checked: true
                       text: qsTr("")
                   }
                CheckBox {
                       checked: true
                       text: qsTr("")
                   }
            }
}
            Text {
                id: testevidaemoret
                text: qsTr("TESTES CONTRA A MORTE")
                anchors.bottom:  parent.bottom
                anchors.horizontalCenter: parent.horizontalCenter

            }
        }


    }
}
