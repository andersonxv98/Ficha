import QtQuick 2.0
import QtQuick.Controls
import QtQuick.Layouts
Item {
    RowLayout{

    Rectangle{
            id:  percepcao_id
            height:  dois_id.height
           width:  dois_id.width
            color: "#8385DE"
            Text {

                id: texto_percepcao
                text: qsTr("Percepcao")
                anchors.left: parent.left
                anchors.verticalCenter: parent.verticalCenter
            }
            Text {
                id: value_percebpcao
                 objectName: "percepcao"
                text: qsTr("Percepcao")
               // anchors.left: parent.left
                anchors.centerIn:  parent
            }
        }
    }
}
