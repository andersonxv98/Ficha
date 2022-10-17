import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import "qrc:/Views" as Views

Item {
    Rectangle {
        id: listviewdiomas
        width: conteudoTerceiraParte_pt2.width  ; height: conteudoTerceiraParte_pt2.height
        clip: true
        color: "#B4FAEB"
        Component {
            id: contactDelegate
            Item {
                width: listviewdiomas.width; height: listviewdiomas.height * 0.22
                Row {
                    Row{
                        Text { text: '<b>Traço/Pers:</b> ' + desc }
                        Button{
                            width:  listviewdiomas.width * 0.50
                            text: "REMOVER" + index
                            onClicked: {
                                controllador.deleteOutros(desc);
                                modelcarhab.remove(index);
                            }
                        }
                    }
                    Column{
                    }
                }
            }
        }
        ListModel {
            id:modelcarhab
        }
        ListView {
            anchors.fill: parent
            model: modelcarhab
            delegate: contactDelegate
            //highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
            focus: true
            objectName: "lv_carregando"
             Component.onCompleted:     {
                 console.log("VALOR CARREGADO", controllador.getIdiomasOnView())
                 let i_int =  controllador.getlistCaracteristicasHabilidades();
                 console.log("VALORES LORES: ", i_int[0]);
                 //list_ataq= controllador.getListaAtaquesToFront();
                 //console.log("VALOR LIST ATAQ: ", list_ataq);
                for(var o = 0;  o < i_int.length ; o++){
                    const desc = i_int[o][0];

                        modelcarhab.append({"desc": desc});
                 }
             }
        }
    }

}
