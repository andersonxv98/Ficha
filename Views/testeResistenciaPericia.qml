import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
Item {
    signal textChanged(string msg)
    ColumnLayout{
        id: periciaseoutros_id
        anchors.fill: parent
        Rectangle{
            id: inspiracao_id
            Layout.preferredHeight: periciaseoutro_lay.height * 0.1
            Layout.preferredWidth: periciaseoutro_lay.width
            color: "#FFEA9C"

            CheckBox{
                checked: false
                text: "Inspiracao"
                anchors.centerIn: parent
                onClicked: {
                    console.log("YAMEEEEEEEEEEETEEEEEEEEE");
                }
            }
        }

        Rectangle{
            id:  bonus_proeficiencia_id
            Layout.preferredHeight: periciaseoutro_lay.height * 0.1
            Layout.preferredWidth: periciaseoutro_lay.width
            color: "#FFEA9C"
            TextEdit {

                id: bonus_proeficiencia_idtxt0
                text: qsTr("Bonus Proeficiencia");
                anchors.verticalCenter:   parent.verticalCenter
                anchors.left:  parent.left
                objectName: "lb_proeficiencia"


            }
            Text {

                id: bonus_proeficiencia_idtxt
                text: qsTr("Bonus Proeficiencia");
                anchors.horizontalCenter:  parent.horizontalCenter
                anchors.top: parent.top
                objectName: "_proeficiencia"


            }
            Button {

                id: btn_proeficiencia_idtxt
                text: qsTr("Alterar");
                anchors.horizontalCenter:  parent.horizontalCenter
                anchors.bottom: parent.bottom
                objectName: "btn_proeficiencia"

                onClicked: {
                   controllador.alterarBonus(bonus_proeficiencia_idtxt0.text);

                }

            }

        }

            Rectangle{
                id:  salvaguarda_id
                Layout.preferredHeight: periciaseoutro_lay.height  * 0.20
                Layout.preferredWidth: periciaseoutro_lay.width
                color: "#FFEA9C"


                ScrollView{
                    contentWidth: -1
                    anchors.fill: salvaguarda_id
                    ColumnLayout{
                        objectName: "resistenciateste"
                        Rectangle{
                            id:  salvaguarda_id2
                            Layout.preferredHeight: salvaguarda_id.height  * 0.20
                            Layout.preferredWidth: salvaguarda_id.width
                            color: "#FDE68B"
                            //objectName: "resistenciateste"
                                Text {
                                    id: salvaguarda_idtxt
                                    text: qsTr("SalvaGuarda");
                                   anchors.horizontalCenter:     salvaguarda_id2.horizontalCenter
                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                                Text {
                                    id: rt1
                                    text: qsTr("Forca");
                                    anchors.left:     parent.left
                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                        }
                        Rectangle{
                            id:  salvaguarda_id3
                            Layout.preferredHeight: salvaguarda_id.height  * 0.20
                            Layout.preferredWidth: parent.width
                            color: "#FDE68B"
                            //objectName: "resistenciateste"
                                Text {
                                    id: salvaguarda_idtxt2
                                    text: qsTr("SalvaGuarda");
                                    anchors.horizontalCenter:     salvaguarda_id3.horizontalCenter
                                    //anchors.horizontalCenter: parent.horizontalCenter


                                }
                                Text {
                                    id: rt2
                                    text: qsTr("Destreza");
                                   anchors.horizontalCenter:     parent.Center
                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                        }
                        Rectangle{
                            id:  salvaguarda_id4
                            Layout.preferredHeight: salvaguarda_id.height  * 0.20
                            Layout.preferredWidth: salvaguarda_id.width
                            color: "#FDE68B"
                            //objectName: "resistenciateste"
                                Text {
                                    id: salvaguarda_idtxt3
                                    text: qsTr("SalvaGuarda");
                                    anchors.horizontalCenter:     salvaguarda_id4.horizontalCenter
                                    //anchors.horizontalCenter: parent.horizontalCenter


                                }
                                Text {
                                    id: rt3
                                    text: qsTr("Constituicao");
                                   anchors.horizontalCenter:     parent.Center
                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                        }
                        Rectangle{
                            id:  salvaguarda_id5
                            Layout.preferredHeight: salvaguarda_id.height  * 0.20
                            Layout.preferredWidth: salvaguarda_id.width
                            color: "#FDE68B"
                            //objectName: "resistenciateste"
                                Text {
                                    id: salvaguarda_idtxt4
                                    text: qsTr("SalvaGuarda");
                                    anchors.horizontalCenter:     salvaguarda_id5.horizontalCenter
                                    //anchors.horizontalCenter: parent.horizontalCenter


                                }
                                Text {
                                    id: rt4
                                    text: qsTr("Inteligencia");
                                    anchors.horizontalCenter:     parent.Center
                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                        }
                        Rectangle{
                            id:  salvaguarda_id6
                            Layout.preferredHeight: salvaguarda_id.height  * 0.20
                            Layout.preferredWidth: salvaguarda_id.width
                            color: "#FDE68B"
                           // objectName: "resistenciateste"
                                Text {
                                    id: salvaguarda_idtxt5
                                    text: qsTr("SalvaGuarda");
                                    anchors.horizontalCenter:     salvaguarda_id6.horizontalCenter
                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                                Text {
                                    id: rt5
                                    text: qsTr("Sabedoria");
                                    anchors.horizontalCenter:     parent.Center
                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                        }
                        Rectangle{
                            id:  salvaguarda_id8
                            Layout.preferredHeight: salvaguarda_id.height  * 0.20
                            Layout.preferredWidth: salvaguarda_id.width
                            color: "#FDE68B"

                            //objectName: "resistenciateste"
                                Text {
                                    id: salvaguarda_idtxt6
                                    text: qsTr("SalvaGuarda");
                                    anchors.horizontalCenter:     salvaguarda_id8.horizontalCenter

                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                                Text {
                                    id: rt6
                                    text: qsTr("Carisma");
                                    anchors.horizontalCenter:     parent.Center
                                    //anchors.horizontalCenter: parent.horizontalCenter

                                }
                        }
                                }
                    }


            }

        Rectangle{
            id:  pericias_id
            color: "#FFEA9C"
            Layout.preferredHeight: periciaseoutro_lay.height * 0.55
            Layout.preferredWidth: periciaseoutro_lay.width

            ScrollView{
                ScrollBar.vertical.policy: ScrollBar.AlwaysOn
                contentWidth: -1
                anchors.fill: pericias_id
                ColumnLayout{
                    objectName: "pericias"
                        Rectangle{
                            id: per1
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                            //Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia1
                                text: qsTr("Acrobacia")
                             //   anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                     let r = controllador.changeStatusacrobacia();
                                    texttest.text = r;

                                }

                            }
                        }
                        Rectangle{
                            id: per2
                            Layout.preferredHeight: pericias_id.height *0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            //color: "#94B1FA"
                            Text {
                                id: texttest2
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia2
                                text: qsTr("Arcanismo")
                             //   anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r=  controllador.changeStatusarcanismo();
                                    texttest2.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per3
                           Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest3
                                text: qsTr("texto teste")
                                 x:  parent.width  * 0.2}
                            Text {
                                id: nomepericia3
                                text: qsTr("Atletismo")
                             //   anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                  let r=   controllador.changeStatusatletismo();
                                    texttest3.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per4
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            //color: "#94B1FA"
                            Text {
                                id: texttest4
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia4
                                text: qsTr("Atuação")
                            //    anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r = controllador.changeStatusatuacao();
                                    texttest4.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per5
                            Layout.preferredHeight: pericias_id.height *0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest5
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia5
                                text: qsTr("Blefar")
                            //    anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                  let r =  controllador.changeStatusblefar();
                                    texttest5.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per6
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            //color: "#94B1FA"
                            Text {
                                id: texttest6
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia6
                                text: qsTr("Furtividade")
                              //  anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                    let r =controllador.changeStatusfurtividade();
                                    texttest6.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per7
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest7
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia7
                                text: qsTr("História")
                           //     anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r = controllador.changeStatushistoria();
                                    texttest7.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per8
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                             //Layout.preferredHeight: 10
                            //color: "#94B1FA"
                            Text {
                                id: texttest8
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia8
                                text: qsTr("Intimidação")
                             //   anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r = controllador.changeStatusintimidacao();
                                    texttest8.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per9
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest9
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia9
                                text: qsTr("Intuição")
                             //   anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r = controllador.changeStatusintuicao();
                                    texttest9.text  = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per10
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                          //Layout.preferredHeight: 10
                            //color: "#FFEA9C"
                            Text {
                                id: texttest10
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia10
                                text: qsTr("Investigação")
                             //   anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                    let r =controllador.changeStatusinvestigacao();
                                    texttest10.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per11
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                            // Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest11
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia11
                                text: qsTr("Lidar Com Animais")
                            //    anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r = controllador.changeStatuslidarcomnimais();
                                    texttest11.text =  r;
                                }

                            }
                        }
                        Rectangle{
                            id: per12
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                            // Layout.preferredHeight: 10
                            //color: "#94B1FA"
                            Text {
                                id: texttest12
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia12
                                text: qsTr("Medicina")
                            //    anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r =  controllador.changeStatusmedicina();
                                    texttest12.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per13
                            Layout.preferredHeight: pericias_id.height *0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest13
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia13
                                text: qsTr("Natureza")
                             //   anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r = controllador.changeStatusnatureza();
                                    texttest13.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per14
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                             //Layout.preferredHeight: 10
                            //color: "#94B1FA"
                            Text {
                                id: texttest14
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia14
                                text: qsTr("Percepção")
                            //    anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r =  controllador.changeStatuspercepcao();
                                    texttest14.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per15
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                            // Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest15
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }                            Text {
                                id: nomepericia15
                                text: qsTr("Persuasão")
                            //    anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                  let r =  controllador.changeStatuspersuasao();
                                    texttest15.text = r;
                                }

                            }
                        }
                        Rectangle{
                            id: per16
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                            // Layout.preferredHeight: 10
                           // color: "#94B1FA"
                            Text {
                                id: texttest16
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia16
                                text: qsTr("Presdigitacao")
                              //  anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                  let r  =  controllador.changeStatuspresdigitacao();
                                    texttest16.text = r;
                                }

                            }

                        }
                        Rectangle{
                            id: per17
                            Layout.preferredHeight: pericias_id.height * 0.08
                            Layout.preferredWidth: pericias_id.width
                            // Layout.preferredHeight: 10
                            color: "#94B1FA"
                            Text {
                                id: texttest17
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia17
                                text: qsTr("Religião")
                               // anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                   let r =  controllador.changeStatusreligiao();
                                    texttest17.text =  r;
                                }

                            }
                        }
                        Rectangle{
                            id: per18
                            Layout.preferredHeight: pericias_id.height *0.08
                           Layout.preferredWidth: pericias_id.width
                           // Layout.preferredHeight: 10
                            //color: "#94B1FA"
                            Text {
                                id: texttest18
                                text: qsTr("texto teste")
                                x:  parent.width  * 0.2
                            }
                            Text {
                                id: nomepericia18
                                text: qsTr("Sobrevivencia")
                                //anchors.right: parent.right
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            CheckBox{
                                text: ""
                                //checked: clicked()
                                //Layout.preferredHeight: rb5.height
                                //Layout.preferredWidth: rb5.width * 0.2
                                objectName: "v"
                                onClicked:  {
                                    let r = controllador.changeStatussobrevivencia();
                                    texttest18.text =r;
                                }

                            }
                        }
            }
            }




}
}
}
