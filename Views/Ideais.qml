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
                        Text { text: '<b>Ideais:</b> ' + desc }
                        Button{
                            //width:  listvieideais.width * 0.50
                            text: "REMOVER" + index
                            onClicked: {

                                     controllador.deleteIdeais(desc);
                                    modelidiomas.remove(index);
                            }
                        }
                    }
                    Column{
                    }
                }
            }
        }
        ListModel {
            id:modelidiomas
        }
        ListView {
            anchors.fill: parent
            model: modelidiomas
            delegate: contactDelegate
            //highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
            focus: true
            objectName: "lv_carregando"
             Component.onCompleted:     {


                 let i_int =  controllador.getlistIdeais();

                 //list_ataq= controllador.getListaAtaquesToFront();
                 //console.log("VALOR LIST ATAQ: ", list_ataq);
                for(var o = 0;  o < i_int.length ; o++){
                    const desc = i_int[o][0];

                        modelidiomas.append({"desc": desc});
                 }
             }
        }
    }

}
