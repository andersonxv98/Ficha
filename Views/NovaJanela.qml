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
                            text: qsTr("Nome da Habilidade")
                            //anchors.left: rl_1.left
                        }
                        TextField {

                            id: tb_nomehabilidade
                            text: qsTr("");
                            //anchors.centerIn: rl_1

                            objectName: "tb_nomehabilidade"

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
                                text: qsTr("Nivel de Evocação")
                            }
                            TextField {

                                id: tb_nvlevocacao
                                text: qsTr("");
                               // anchors.centerIn: parent

                                objectName: "tb_nvlevocacao"

                                onTextChanged:  {
                                   console.log("MEC: ",controllador.testeDeEntrada())
                                        controllador.setText(tb_nvlevocacao.text)
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
                            text: qsTr("Tempo de Conjuração")
                        }
                        TextField {

                            id: tb_tempoconjuracao
                            text: qsTr("");
                            //anchors.centerIn: parent

                            objectName: "tb_tempoconjuracao"

                            onTextChanged:  {
                               console.log("MEC: ",controllador.testeDeEntrada())
                                    controllador.setText(tb_tempoconjuracao.text)
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
                            text: qsTr("Alcance da Habilidade")
                        }
                        TextField {

                            id: tb_alcance
                            text: qsTr("");
                            //anchors.centerIn: parent

                            objectName: "tb_alcance"

                            onTextChanged:  {
                               console.log("MEC: ",controllador.testeDeEntrada())
                                    controllador.setText(tb_alcance.text)
                                }
                        }
                    }}
                    Rectangle{
                        id: rb5
                        //anchors.fill: viewnewhab
                        Layout.preferredHeight: firstparte.height * 0.14
                        Layout.preferredWidth: firstparte.width
                        color: "lightgreen"
                    RowLayout{

                        Text {
                            id: label_componentes
                            text: qsTr("Compoenentes")
                            Layout.preferredHeight: rb5.height
                            Layout.preferredWidth: rb5.width * 0.2
                        }

                        CheckBox{
                            text: "V(Verbal)"
                            //checked: clicked()
                            Layout.preferredHeight: rb5.height
                            Layout.preferredWidth: rb5.width * 0.2
                            objectName: "v"
                            onClicked:  {
                                controllador.changeV();
                            }

                        }
                        CheckBox{
                            text: "S(Somático)"
                            //checked: clicked()
                            Layout.preferredHeight: rb5.height
                            Layout.preferredWidth: rb5.width * 0.2
                            objectName: "s"
                            onCheckableChanged: {
                                controllador.changeS();
                            }
                        }
                        CheckBox{
                            id: cb3
                            text: "M(Material)"
                            //checked: clicked()
                            onCheckStateChanged: tb_material.visibilidade = true
                            Layout.preferredHeight: rb5.height
                            Layout.preferredWidth: rb5.width * 0.2
                            objectName: "m"
                            //onCanceled: campomaterial.visibilidade= false
                            onCheckableChanged: {
                                controllador.changeM();
                            }


                        }
                        TextField{
                            property bool visibilidade: false
                            id: tb_material
                            visible: visibilidade
                            Layout.preferredHeight: rb5.height
                            Layout.preferredWidth: rb5.width * 0.2
                            objectName: "tb_materialcomponente"
                        }
                    }
                    }
                    Rectangle{
                        id: rb6
                        //anchors.fill: viewnewhab
                        Layout.preferredHeight: firstparte.height * 0.14
                        Layout.preferredWidth: firstparte.width
                        color: "lightgreen"
                    RowLayout{
                        Text {
                            id: label_duracao
                            text: qsTr("Duração")
                        }
                        TextField {

                            id: tb_duracao
                            text: qsTr("");
                            //anchors.centerIn: parent

                            objectName: "tb_duracao"

                            onTextChanged:  {
                               console.log("MEC: ",controllador.testeDeEntrada())
                                    controllador.setText(tb_duracao.text)
                                }
                        }

                        Button{
                            text: "Finalizar"
                            onClicked: {
                                    controllador.instanciarNovaHabilidade(tb_nomehabilidade.text, tb_nvlevocacao.text,  tb_tempoconjuracao.text,tb_alcance.text, tb_duracao.text, tb_material.text, tb_descricao.text )
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
