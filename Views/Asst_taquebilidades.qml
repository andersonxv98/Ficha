import QtQuick
import QtQuick.Controls
import QtQuick.Layouts


    Rectangle{
        //property color c: "blue"
        //id: rootItemitem
          property int w: 0
          property int h: 0
        //property color  c: "blue"
          width: w
          height: h

          color: "gray"
            ColumnLayout{
                RowLayout{
                Text {
                    id: lb_valorhabilidade
                    text: qsTr("valorhabilidade")
                }
                Text {
                    id: lb_valorhabilidadenome
                    text: qsTr("Nome Habilidade")
                }
                }
                RowLayout{
                Text {
                    id: lb_nvlvalue
                    text: qsTr("valuenvl")
                }
                Text {
                    id: lb_nvlvaluestaci
                    text: qsTr("Nvl")
                }
                }
                RowLayout{
                Text {
                    id: lb_tempovalue
                    text: qsTr("tempovalue")
                }
                Text {
                    id: lb_tempor3
                    text: qsTr("TEMPO CONJ.")
                }
                }
                RowLayout{
                    Text {
                        id: lb_alcancevalue
                        text: qsTr("ALcance Value")
                    }
                    Text {
                        id: lb_alcancee
                        text: qsTr("Alcance")
                    }
                }
                RowLayout{
                    Text {
                        id: lb_duracaovalue
                        text: qsTr("dura minha")
                    }
                    Text {
                        id: lb_duraaminha
                        text: qsTr("duração")
                    }
                }
         }}

