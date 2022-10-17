import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Item {

    Rectangle {
        id: listviewbilities

        width: conteudoSegundaParte_pt2.width; height: conteudoSegundaParte_pt2.height
        clip: true

        Component {
            id: contactDelegate
            Item {
                width: listviewbilities.width; height: listviewbilities.height * 0.33
                Row {


                    Column{
                    Text { text: '<b>id:</b> ' + id_habilidade }
                    Text { text: '<b>Nome:</b> ' + nome }
                    Text { text: '<b>Nvl:</b> ' + nvl }
                    Text { text: '<b>Tempo Conj:</b> ' + tempo }
                    Button{
                        width:  listviewbilities.width * 0.5
                        text: "REMOVER" + index
                        onClicked: {
                            console.log("KIMOCHI ~ ATAQUESHABILITIES");
                          controllador.deleteHabilidade(id_habilidade);
                           modelAtaquehabilidades.remove(index);
                        }
                    }
                    }
                    Column{
                    Text { text: '<b>Alcance:</b> ' + alcance }
                    Text { text: '<b>Duraçao:</b> ' + dura }
                    Text { text: '<b>Compoenentes(v, s, m):</b> ' + v+" "+s+" "+m}
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
            //focus: true
            objectName: "lv_carregando"

             Component.onCompleted:     {
                 console.log("VALOR CARREGADO", controllador.getIntanciasObj())

                 let i_int =  controllador.getlistaHabilidades();
                 console.log("VALORES LORES: ", i_int[0][0]);




                 //list_ataq= controllador.getListaAtaquesToFront();
                 //console.log("VALOR LIST ATAQ: ", list_ataq);
                for(var o = 0;  o < i_int.length ; o++){
                    const id_habilidade = i_int[o][0];
                    const nome = i_int[o][1];
                    const nvl = i_int[o][2];
                    const tempo = i_int[o][3];
                    const alcance = i_int[o][4];
                    const dura = i_int[o][5];
                    const v = i_int[o][6];
                    const s = i_int[o][7];
                    const m = i_int[o][8];
                    console.log("VALOR NOME DENTRO DA REPETICAO DO QML: ", nome);
                     //let listaAtaqueEtudoMais = controllador.getEachQstringValueOnHAbilities(o);
                        modelAtaquehabilidades.append({"id_habilidade": id_habilidade,"nome": nome, "nvl": nvl,  "tempo": tempo, "alcance": alcance, "dura": dura, "v": v, "s": s, "m" : m });

                 }
             }
        }
    }



}
