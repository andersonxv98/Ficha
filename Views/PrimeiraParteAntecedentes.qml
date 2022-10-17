import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    id: primeiraparteantecedente
    anchors.fill: parent
    RowLayout{
        objectName:  "antecedentesp1"
        anchors.fill: parent
        Rectangle{
            id: rec1
            Layout.preferredWidth: reTopDir.width * 0.33
            Layout.preferredHeight: reTopDir.height
            color: "lightblue"
            Text {
                id: classe_idtxt
                text: qsTr("Classe Personagem")
                anchors.centerIn:  parent
                //anchors.top: parent.top
                 //anchors.centerIn:  parent
                }
            Text {
                id: classe_idtxt2
                text: qsTr("Classe Personagem")
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom:  parent.bottom
                 //anchors.centerIn:  parent
                }
            Text {
                id: nlv_
                text: qsTr("0")
            }
}
        Rectangle{
            id: rec2
            Layout.preferredWidth: reTopDir.width * 0.33
             Layout.preferredHeight: reTopDir.height
            color: "lightblue"
             Text {
                 id: antecedente_idtxt
                 text: qsTr("Antecedente")
                anchors.centerIn:  parent
                // anchors.top: parent.top
                 //Layout.preferredWidth: parent.width * 0.33
                  //anchors.centerIn:  parent

             }
             Text {
                 id: antecedente_idtxt2
                 text: qsTr("Antecedente")
                 anchors.horizontalCenter: parent.horizontalCenter
                 anchors.bottom:  parent.bottom
                 //Layout.preferredWidth: parent.width * 0.33
                  //anchors.centerIn:  parent

             }
        }

        Rectangle{
            id: rec3
            Layout.preferredWidth: reTopDir.width * 0.33
             Layout.preferredHeight: reTopDir.height
            color: "lightblue"

             Text {

                 id: nomejogador_idtxt
                 text: qsTr("Nome do Jogador")
                 anchors.centerIn:  parent
                 //anchors.top: parent.top
                 //Layout.preferredWidth: parent.width * 0.33
                 //anchors.centerIn:  parent
}
             Text {

                 id: nomejogador_idtxt2
                 text: qsTr("Nome do Jogador")
                 anchors.horizontalCenter: parent.horizontalCenter
                 anchors.bottom:  parent.bottom
                 //Layout.preferredWidth: parent.width * 0.33
                 //anchors.centerIn:  parent
}
        }
    }
}
