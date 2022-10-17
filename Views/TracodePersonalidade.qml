import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import "qrc:/Views" as Views

Item {
    Rectangle {
        id: listviewdiomas
        width: tracopersonalidade_id.width  ; height: tracopersonalidade_id.height
        clip: true
        color: "#D3FAB4"
        Component {
            id: contactDelegate
            Item {
                width: listviewdiomas.width; height: listviewdiomas.height
                Row {
                    Row{
                        Text { text: '<b>Traço/Pers:</b> ' + desc }

                        Button{
                            width:  listviewdiomas.width * 0.50
                            text: "REMOVER" + index

                            onClicked: {
                                console.log("KIMOCHI ~");
                              controllador.deleteTraco(desc);
                                modeltracos.remove(index);
                            }
                        }
                    }
                    Column{
                           // /Text { text: '<b>Alcance:</b> ' + alcance }
                           // Text { text: '<b>Duraçao:</b> ' + dura }
                           // Text { text: '<b>Compoenentes(v, s, m):</b> ' + v+" "+s+" "+m}
                    }
                }

            }
        }
        ListModel {
            id:modeltracos

        }

        ListView {
            anchors.fill: parent
            model: modeltracos
            delegate: contactDelegate
            //highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
            //focus: true
            objectName: "lv_carregando"

             Component.onCompleted:     {
                 //console.log("VALOR CARREGADO", controllador.getListTracos())

                 let i_int =  controllador.getListTracos();
                 //console.log("VALORES LORES: ", i_int[0]);




                 //list_ataq= controllador.getListaAtaquesToFront();
                 //console.log("VALOR LIST ATAQ: ", list_ataq);
                for(var o = 0;  o < i_int.length ; o++){
                    const desc = i_int[o][0];

                        modeltracos.append({"desc": desc});
                 }
             }
        }
    }

}
