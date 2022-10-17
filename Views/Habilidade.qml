import QtQuick 2.0

Item {
    Rectangle{
        Layout.preferredHeight: conteudoSegundaParte_pt2.height * 0.20
        Layout.preferredWidth:  conteudoSegundaParte_pt2.width
        color: "lightgray"
        Text {
            id: lb_valorhabilidade
            text: qsTr("valorhabilidade")
        }
     }
}
