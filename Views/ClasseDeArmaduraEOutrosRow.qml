import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    RowLayout{
        id: classedearmaduraeoutrosrow_id
        anchors.fill: parent
        objectName: "classedearmaduraeoutrosrow"
        Rectangle{
            id: classedearmadura_id
            Layout.preferredHeight: classearmaduraeoutros_id.height
            Layout.preferredWidth: classearmaduraeoutros_id.width * 0.33
            color: "lightgray"
            Text {
                id: classedearmadura_idtxt
                text: qsTr("Classe de Armadura")
                anchors.centerIn: parent

            }
            Text {
                id: classedearmadura_idtxt2
                text: qsTr("Classe de Armadura")
                anchors.bottom: classedearmadura_id.bottom
                anchors.horizontalCenter:  classedearmadura_id.horizontalCenter
            }

        }
        Rectangle{
            id: iniciativa_id
            Layout.preferredHeight: classearmaduraeoutros_id.height
            Layout.preferredWidth: classearmaduraeoutros_id.width * 0.33
            color: "lightgray"
            Text {
                id: iniciativa_idtxt
                text: qsTr("Iniciativa")
                anchors.centerIn: parent

            }
            Text {
                id: iniciativa_idtxt2
                text: qsTr("Iniciativa")
                anchors.bottom: iniciativa_id.bottom
                anchors.horizontalCenter:  iniciativa_id.horizontalCenter
            }


        }
        Rectangle{
            id: delocamento_id
            Layout.preferredHeight: classearmaduraeoutros_id.height
            Layout.preferredWidth: classearmaduraeoutros_id.width * 0.33
            color: "lightgray"
            Text {
                id: delocamento_idtxt
                text: qsTr("Deslocamento")
                anchors.centerIn: parent

            }
            Text {
                id: delocamento_idtxt2
                text: qsTr("Deslocamento")
                anchors.bottom: delocamento_id.bottom
                anchors.horizontalCenter:  delocamento_id.horizontalCenter
            }
        }
    }
}
