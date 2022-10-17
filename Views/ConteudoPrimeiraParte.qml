import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    ColumnLayout{
        id: conteudoprimeiraparte_id
        anchors.fill: parent

        Rectangle{
            id: um_id
            Layout.preferredHeight: esp1.height * 0.65
            Layout.preferredWidth: esp1.width
            //color: "#0EE693"
            RowLayout{
                Loader{
                    source: "qrc:/Views/AtributosPericiaseoutros.qml"
                }
            }

        }

        Rectangle{

            id: dois_id
            Layout.preferredHeight: esp1.height * 0.05
            Layout.preferredWidth: esp1.width
            RowLayout{
                Loader{
                    source: "qrc:/Views/Percepcao.qml"
                }
            }

        }
        Rectangle{
            id:  tres_idesp
            Layout.preferredHeight: btn_addioma.height
            Layout.preferredWidth: dois_id.width
                Rectangle{
                    id:  tres_idesp2
                    height:  btn_addioma.height
                    width:  btn_addioma.width
                    anchors.top: tres_idesp.top
                    anchors.right: tres_idesp.right
                    Button{
                        id: btn_addioma
                        //width:  listviewdiomas.width * 0.5
                        text: "ADD Idioma/proefic"

                        onClicked: {
                            console.log("Crie seu  Idioma")
                            var component = Qt.createComponent("qrc:/Views/NewIdioma.qml")
                                       var newwindow    = component.createObject(mainwindow)

                                       newwindow.show()
                        }
                    }
                }

        }
        Rectangle{
            id:  tres_id
            Layout.preferredHeight: esp1.height * 0.20
            Layout.preferredWidth: esp1.width
            //color: "pink"

                Rectangle{
                    Loader{
                        source: "qrc:/Views/IdiomasEOutros.qml"
                    }
                }


        }
    }
}
