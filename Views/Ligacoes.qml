import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import "qrc:/Views" as Views

Item {
    Rectangle {
        id: listvieideais
        width: ideais_id.width  ; height: ideais_id.height
        clip: true
        color: "#FA9B96"
        Component {
            id: contactDelegate
            Item {
                width: listvieideais.width; height: listvieideais.height * 0.22
                Row {
                    Row{
                        Text { text: '<b>Ligação:</b> ' + desc }
                        Button{
                            //width:  listvieideais.width * 0.50
                            text: "REMOVER"
                            onClicked: {
                             controllador.deleteLigacoes(desc);
                             modelligacao.remove(desc);

                            }
                        }
                    }
                    Column{
                    }
                }
            }
        }
        ListModel {
            id:modelligacao
        }
        ListView {
            anchors.fill: parent
            model: modelligacao
            delegate: contactDelegate
            //highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
            focus: true
            objectName: "lv_carregando"
             Component.onCompleted:     {
                 console.log("VALOR CARREGADO", controllador.getIdiomasOnView())
                 let i_int =  controllador.getlistLigacoes();
                 console.log("VALORES LORES: ", i_int[0]);
                 //list_ataq= controllador.getListaAtaquesToFront();
                 //console.log("VALOR LIST ATAQ: ", list_ataq);
                for(var o = 0;  o < i_int.length ; o++){
                    const desc = i_int[o][0];

                        modelligacao.append({"desc": desc});
                 }
             }
        }
    }

}
