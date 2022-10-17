import QtQuick
import QtQuick.Controls
import QtQuick.Layouts



ApplicationWindow{
    id: novaWindow
    visible: false
    width: 800
    height: 200
    title: qsTr("Hello World")
    //visibility: "FullScreen"
    visibility: "Windowed"
    onClosing: {
        controllador.resetComponents()

    }

    Rectangle{
        id: viewnewhab
        anchors.fill: parent
        width: parent.width
        height: parent.height
        color: "lightblue"
         RowLayout{
             Rectangle{
                 id: firstparte
                 //anchors.fill: viewnewhab
                 Layout.preferredHeight: viewnewhab.height
                 Layout.preferredWidth: viewnewhab.width * 0.49
                 color: "lightgreen"
                ColumnLayout{
                    //Layout.preferredHeight: parent.height
                    //Layout.preferredWidth: parent.width * 0.49
                    Rectangle{
                        id: rb1
                        //anchors.fill: viewnewhab
                        Layout.preferredHeight: viewnewhab.height * 0.14
                        Layout.preferredWidth: viewnewhab.width
                        color: "lightgreen"
                    RowLayout{
                        id: rl_1
                        Text {
                            id: label_nomehabilidade
                            text: qsTr("Nome do Equipamento")
                            //anchors.left: rl_1.left
                        }
                        TextField {

                            id: tb_nomeequip
                            text: qsTr("");
                            //anchors.centerIn: rl_1

                            objectName: "tb_nome"

                            onTextChanged:  {
                               console.log("MEC: ",controllador.testeDeEntrada())
                                    controllador.setText(tb_nomehabilidade.text)
                                }
                        }
                    }
                    }
                    Rectangle{
                        id: rb2
                        //anchors.fill: viewnewhab
                        Layout.preferredHeight: firstparte.height * 0.14
                        Layout.preferredWidth: firstparte.width
                        color: "lightgreen"
                        RowLayout{
                            Text {
                                id: label_nvlevocacao
                                text: qsTr("Dano")
                            }
                            TextField {

                                id: tb_dano
                                text: qsTr("");
                               // anchors.centerIn: parent

                                objectName: "tb_dano"

                                onTextChanged:  {

                                    }

                            }
                        }
                    }
                    Rectangle{
                        id: rb3
                        //anchors.fill: viewnewhab
                        Layout.preferredHeight: firstparte.height * 0.14
                        Layout.preferredWidth: firstparte.width
                        color: "lightgreen"
                    RowLayout{
                        Text {
                            id: label_tempoconjuracao
                            text: qsTr("Tipo")
                        }
                        TextField {

                            id: tb_tipo
                            text: qsTr("");
                            //anchors.centerIn: parent

                            objectName: "tb_tipo"

                            onTextChanged:  {

                                }
                        }
                    }
                    }
                    Rectangle{
                        id: rb4
                        //anchors.fill: viewnewhab
                        Layout.preferredHeight: firstparte.height * 0.14
                        Layout.preferredWidth: firstparte.width
                        color: "lightgreen"
                    RowLayout{
                        Text {
                            id: label_alcance
                            text: qsTr("Peso")
                        }
                        TextField {

                            id: tb_peso
                            text: qsTr("");
                            //anchors.centerIn: parent

                            objectName: "tb_peso"

                            onTextChanged:  {

                                }
                        }
                    }}

                    Rectangle{
                        id: rb6
                        //anchors.fill: viewnewhab
                        Layout.preferredHeight: firstparte.height * 0.14
                        Layout.preferredWidth: firstparte.width
                        color: "lightgreen"
                    RowLayout{
                        Text {
                            id: label_duracao
                            text: qsTr("Preço")
                        }
                        TextField {

                            id: tb_preco
                            text: qsTr("");
                            //anchors.centerIn: parent

                            objectName: "tb_preco"

                            onTextChanged:  {

                                }
                        }

                        Button{
                            text: "Finalizar"
                            onClicked: {
                                    controllador.instanciarNovaHabilidade(tb_nomeequip.text, tb_dano.text,  tb_tempoconjuracao.text,tb_alcance.text, tb_duracao.text, tb_material.text, tb_descricao.text )
                                    novaWindow.close()
                                }
                        }
                    }}


                }
}

             Rectangle{
                 id: secondparte
                 //anchors.fill: viewnewhab
                 Layout.preferredHeight: viewnewhab.height
                 Layout.preferredWidth: viewnewhab.width * 0.49
                 color: "lightyellow"
                ColumnLayout{
                    //acnhors.fill: parent
                    Text {
                        id: lb_descricao
                        text: qsTr("Insira a Descricao (Opcional)")
                    }
                    Rectangle{
                        id: recgray
                        Layout.preferredHeight: secondparte.height * 0.86
                        Layout.preferredWidth: secondparte.width - 1
                        color: "gray"
                        TextArea {

                            id: tb_descricao
                            text: qsTr("");
                            //anchors.centerIn: parent
                            width: parent.width
                            height: parent.height
                            objectName: "tb_descricao"
                            anchors.fill: recgray
                            //TextEdit.Wrap: true
                            onTextChanged:  {
                               console.log("MEC: ",controllador.testeDeEntrada())
                                    controllador.setText(tb_descricao.text)
                                }
                        }
                    }
                }

}

}
}

}
