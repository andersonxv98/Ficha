import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    RowLayout{
        id: pontodevidadeblalbalba_id
        anchors.fill: parent
        objectName: "ponto_vida"
        Rectangle{
            id: pontodevida_id
            Layout.preferredHeight: pontodevidaseoutros_id.height
            Layout.preferredWidth: pontodevidaseoutros_id.width * 0.33
            color: "#C8FF90"
            Text {
                id: pontodevida_idtxt
                text: qsTr("Pontos de Vida")
                //anchors.verticalCenter:  parent.verticalCenter
                //anchors.left: parent.left
                anchors.centerIn: parent
                //anchors.margins: 10

            }            Text {
                id: pontodevida_idtxt3
                text: qsTr("Pontos de Vida")
                //anchors.verticalCenter:  parent.verticalCenter
                //anchors.left: parent.left
                anchors.horizontalCenter:  parent.horizontalCenter
                anchors.bottom: parent.bottom
                //anchors.margins: 10

            }


        }
        Rectangle{
            id: pontodevida_id2
            Layout.preferredHeight: pontodevidaseoutros_id.height
            Layout.preferredWidth: pontodevidaseoutros_id.width * 0.33
            color: "#C8FF90"
        Text {
            id: pontodevida_idtxt2
            text: qsTr("Pontos de Vida total")
            anchors.centerIn: parent
            //anchors.verticalCenter:  parent.verticalCenter
            //anchors.right: parent.right
            //anchors.margins: 10
        }

        Text {
            id: pontodevida_idtxt4
            text: qsTr("Pontos de Vida total")
            anchors.horizontalCenter:  parent.horizontalCenter
            anchors.bottom: parent.bottom
            //anchors.verticalCenter:  parent.verticalCenter
            //anchors.right: parent.right
            //anchors.margins: 10
        }
        }

        Rectangle{
            id: pontodevidaexedente_id
            Layout.preferredHeight: pontodevidaseoutros_id.height
            Layout.preferredWidth: pontodevidaseoutros_id.width * 0.33
            color: "#C8FF90"
            Text {
                id: pontodevidaexedente_idtxt
                text: qsTr("Pontos Excedentes de Vida")
                anchors.centerIn: parent
                //anchors.baseline: parent.baseline
            }

            Text {
                id: pontodevidaexedente_idtxt5
                text: qsTr("Pontos Excedentes de Vida")
                anchors.horizontalCenter:  parent.horizontalCenter
                anchors.bottom: parent.bottom
                //anchors.baseline: parent.baseline
            }

        }

    }
}
