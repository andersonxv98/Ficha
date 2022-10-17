import QtQuick 2.0

Item {
    Text {
        property string texto: "Nome do Personagem"

        id: namepersonagem_id
        text: qsTr(texto)
        objectName: name_nomepersonagem
    }
}
