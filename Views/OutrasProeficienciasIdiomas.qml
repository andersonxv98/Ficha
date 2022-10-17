import QtQuick
import QtQuick.Controls


Item {

    Component {
        id: contactDelegate
        Item {
            width: conteudoSegundaParte_pt2.width
            height: 60
            Column {
                Text { text: '<b>Nome:</b> ' + name }
                Text { text: '<b>Bonus Ataque:</b> ' + number }
                Text { text: '<b>Dano/Tipo:</b> ' + danotipo }
            }
        }
    }
    ListView {
           anchors.fill: parent
           model: AtaquesEMagiasModel{}
           delegate: contactDelegate
           highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
           focus: true
       }

}
