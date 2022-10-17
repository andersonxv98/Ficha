import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Item {
    Rectangle {
        id: listviewequips

        width: conteudoSegundaParte_pt3.width; height: conteudoSegundaParte_pt3.height
        clip: true
        Component {
            id: contactDelegate
            Item {
                width: listviewequips.width; height: listviewequips.height * 0.33
                Row {

                    Column{
                    Text { text: '<b>Id:</b> ' + id_item }
                    Text { text: '<b>Nome:</b> ' + nome }
                    Text { text: '<b>Dano:</b> ' + dano }
                    Text { text: '<b>Tipo:</b> ' + tipo }
                    Button{
                        width:  listviewequips.width * 0.5
                        text: "REMOVER" + index
                        onClicked: {
                            console.log("KIMOCHI ~");
                             controllador.deleteMochila(id_item);
                             modelAtaquehabilidades.remove(index);
                        }
                    }
                    }
                    Column{
                    Text { text: '<b>Peso:</b> ' + peso }
                    Text { text: '<b>Preço:</b> ' + preco }
                    Button{
                        width:  listviewequips.width * 0.5
                        text: "Adicionar Status"
                        onClicked: {
                            console.log("KIMOCHI ~");
                             var i_int =  controllador.getlistaEquipamentos();
                            console.log("LORE LORE: ", i_int);
                        }
                    }

                    }
                }

            }
        }
        ListModel {
            id:modelAtaquehabilidades

        }

        ListView {
            anchors.fill: parent
            model: modelAtaquehabilidades
            delegate: contactDelegate
            //highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
            focus: true
            objectName: "lv_carregando"

             Component.onCompleted:     {
                 console.log("VALOR CARREGADO", controllador.getIntanciasObj())

                 let i_int =  controllador.getlistaEquipamentos();
                 console.log("VALORES LORES: ", i_int[0][0]);
                for(var o = 0;  o < i_int.length ; o++){
                    const id_item = i_int[o][0];
                    const nome = i_int[o][1];
                    const dano = i_int[o][2];
                    const tipo = i_int[o][3];
                    const peso = i_int[o][4];
                    const preco = i_int[o][5];

                        modelAtaquehabilidades.append({"id_item": id_item,"nome": nome, "dano": dano,  "tipo": tipo, "peso": peso, "preco": preco})//, "v": v, "s": s, "m" : m });

                 }
             }
        }
    }



}
