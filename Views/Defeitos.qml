import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import "qrc:/Views" as Views

Item {
    Rectangle {
        id: listviedefe
        width: fraquezas_id.width  ; height: fraquezas_id.height
        clip: true
        color: "#FA9B96"
        Component {
            id: contactDelegate
            Item {
                width: listviedefe.width; height: listviedefe.height * 0.22
                Row {
                    Row{
                        Text { text: '<b>Traço/Pers:</b> ' + desc }
                        Button{
                            //width:  listvieideais.width * 0.50
                            text: "REMOVER" + index
                            onClicked: {
                                controllador.deleteDefeitos(desc);
                                modeldefeitos.remove(index);

                            }
                        }
                    }
                    Column{
                    }
                }
            }
        }
        ListModel {
            id:modeldefeitos
        }
        ListView {
            anchors.fill: parent
            model: modeldefeitos
            delegate: contactDelegate
            //highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
            focus: true
            objectName: "lv_carregando"
             Component.onCompleted:     {
                 console.log("VALOR CARREGADO", controllador.getIdiomasOnView())
                 let i_int =  controllador.getlistDefeitos();
                 console.log("VALORES LORES: ", i_int[0]);
                 //list_ataq= controllador.getListaAtaquesToFront();
                 //console.log("VALOR LIST ATAQ: ", list_ataq);
                for(var o = 0;  o < i_int.length ; o++){
                    const desc = i_int[o][0];

                        modeldefeitos.append({"desc": desc});
                 }
             }
        }
    }

}
