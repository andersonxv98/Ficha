import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import "qrc:/Views" as Views

Item {

    property alias classsmedia: modelidiomas
    Rectangle {
        id: listviewdiomas
        width: tres_id.width; height: tres_id.height
        clip: true
        objectName: "retanguloidiomas"
        Component {
            id: contactDelegate
            Item {
                id: obj_idioma
                width: listviewdiomas.width; height: listviewdiomas.height * 0.40
                Row {
                    Column{
                    Text {
                        text: '<b>Idioma/Proef:</b> ' + desc;
                            color: ListView.isCurrentItem ? "red" : "blue";
                    }
                    Button{
                        width:  listviewdiomas.width * 0.5
                        text: "REMOVER" + index
                        onClicked: {
                            console.log("KIMOCHI ~ Delete");
                           controllador.deleteIdioma(desc);
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
            id: modelidiomas
        }

        ListView {
            id: lvidiomas
            anchors.fill: parent
            model: modelidiomas
            delegate: contactDelegate
            objectName: "lv_carregando"
             Component.onCompleted:     {
                 let i_int =  controllador.getIdiomasOnView();
                 console.log("VALORES LORES: ", i_int[0]);
                for(var o = 0;  o < i_int.length ; o++){
                    const desc = i_int[o][0];

                        modelidiomas.append({"desc": desc});
                 }
             }
        }
    }

}


