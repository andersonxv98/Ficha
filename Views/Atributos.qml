import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    ColumnLayout{
        id: atributos_id
        //anchors.fill: parent
        objectName: "colunaAtributos"
        Rectangle{
            Layout.preferredHeight: atributos_lay.height * 0.16
            Layout.preferredWidth: atributos_lay.width
            color: "lightgray"
            Text {
                id: atributo_1txt
                text: qsTr("Força")
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.top: parent.top
                objectName: "atributo_forca"
            }
            Text {
                id: atributo_1txt2
                text: qsTr("Força")
                anchors.centerIn: parent
                objectName: "atributo_forca2"
            }
            Text {
                id: atributo_1txt3
                text: qsTr("Força")
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom: parent.bottom
                objectName: "atributo_forca3"
            }
        }
        Rectangle{
            Layout.preferredHeight: atributos_lay.height * 0.16
            Layout.preferredWidth: atributos_lay.width
           color: "lightgray"
            Text {
                       id: atributo_2txt
                       anchors.horizontalCenter: parent.horizontalCenter
                       anchors.top: parent.top
                       text: qsTr("Destreza")
                   }
            Text {
                       id: atributo_2txt2
                        anchors.centerIn: parent
                       text: qsTr("Destreza")
                   }
            Text {
                       id: atributo_2txt3
                       anchors.horizontalCenter: parent.horizontalCenter
                       anchors.bottom: parent.bottom
                       text: qsTr("Destreza")
                   }


}        Rectangle{
            Layout.preferredHeight: atributos_lay.height * 0.16
            Layout.preferredWidth: atributos_lay.width
            color: "lightgray"
            Text {
                id: atributo_3txt
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.top: parent.top
                text: qsTr("Constituição")
            }
            Text {
                id: atributo_3txt2
                 anchors.centerIn: parent
                text: qsTr("Constituição")
            }
            Text {
                id: atributo_3txt3
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom: parent.bottom
                text: qsTr("Constituição")
            }

}

        Rectangle{
            Layout.preferredHeight: atributos_lay.height * 0.16
            Layout.preferredWidth: atributos_lay.width
            color: "lightgray"
            Text {
                id: atributo_4txt
                text: qsTr("Inteligência")
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.top: parent.top
                objectName: "nomdeobjsd"
            }
            Text {
                id: atributo_4txt2
                text: qsTr("Inteligência")
                 anchors.centerIn: parent
                objectName: "nomdeobjsd"
            }
            Text {
                id: atributo_4txt3
                text: qsTr("Inteligência")
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom: parent.bottom
                objectName: "nomdeobjsd"
            }

}

        Rectangle{
            Layout.preferredHeight: atributos_lay.height * 0.16
            Layout.preferredWidth: atributos_lay.width
           color: "lightgray"
            Text {
                id: atributo_5txt
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.top: parent.top
                text: qsTr("Sabedoria")
            }

            Text {
                id: atributo_5txt2
                 anchors.centerIn: parent
                text: qsTr("Sabedoria")
            }
            Text {
                id: atributo_5txt3
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom: parent.bottom
                text: qsTr("Sabedoria")
            }
}
        Rectangle{
            Layout.preferredHeight: atributos_lay.height * 0.16
            Layout.preferredWidth: atributos_lay.width
            color: "lightgray"
            Text {
                id: atributo_6txt
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.top: parent.top
                text: qsTr("Carisma")
            }
            Text {
                id: atributo_6txt2
                 anchors.centerIn: parent
                text: qsTr("Carisma")
            }
            Text {
                id: atributo_6txt3
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.bottom: parent.bottom
                text: qsTr("Carisma")
            }

        }

}


    }

