import QtQuick 2.0
import QtQuick.Controls
import QtQuick.Layouts
Item {
    RowLayout{
        id: segundaparteantecedente
        //anchors.fill: parent

        RowLayout{
            objectName: "antecedentesp2"
            Rectangle{
                id: rec11
                Layout.preferredWidth: reTopDir.width * 0.33
                Layout.preferredHeight: reTopDir.height
                color: "lightblue"
                Text {
                    id: raca_idtxt
                    text: qsTr("Raça")
                   anchors.centerIn:  parent
                }
                Text {
                    id: raca_idtxt2
                    text: qsTr("Raça")
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom:  parent.bottom
                }
            }
            Rectangle{
                id: rec12
                Layout.preferredWidth: reTopDir.width * 0.33
                Layout.preferredHeight: reTopDir.height
                color: "lightblue"

                 Text {
                            id: alinhamento_idtxt
                            text: qsTr("Alinhamento")
                          anchors.centerIn:  parent
                        }
                 Text {
                            id: alinhamento_idtxt2
                            text: qsTr("Alinhamento")
                            anchors.horizontalCenter: parent.horizontalCenter
                            anchors.bottom:  parent.bottom
                        }
            }
            Rectangle{
                id: rec13
                Layout.preferredWidth: reTopDir.width * 0.33
                Layout.preferredHeight: reTopDir.height
                color: "lightblue"
                objectName: "xp_list"
                 Text {
                     id: pontoexperiencia_idtxt
                     text: qsTr("FALTANTES")
                     anchors.top:  parent.top
                     anchors.horizontalCenter: parent.horizontalCenter

                 }

                 Text {
                     id: pontoexperiencia_idtxt3
                     text: qsTr("XP ATUAL")
                     anchors.left: parent.left
                     anchors.verticalCenter:  parent.verticalCenter
                      anchors.leftMargin:  parent.width * 0.20
                 }
                 Text {
                     id: pontoexperiencia_idtxt4
                     text: qsTr("XP PROXNVL")
                     anchors.right:  parent.right
                     anchors.rightMargin: parent.width * 0.20
                     anchors.verticalCenter:  parent.verticalCenter
                 }
                 Text {
                     id: pontoexperiencia_idtxt5
                     text: qsTr("Pontos Experiencia")
                     anchors.horizontalCenter: parent.horizontalCenter
                     anchors.bottom:  parent.bottom
                 }

            }

        }
    }
}
