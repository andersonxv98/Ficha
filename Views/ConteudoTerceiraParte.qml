import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    ColumnLayout{
        id: conteudoTerceiraParte
        anchors.fill: parent
        Rectangle{
            id: conteudoTerceiraParte_pt1
            Layout.preferredHeight: esp3.height * 0.33
            Layout.preferredWidth: esp3.width
            //color: "purple"
            ColumnLayout{
                Loader{
                    source: "qrc:/Views/TracosEpersonalidade.qml"
                }
            }
        }

        Rectangle{
            id:  conteudoTerceiraParte_pt2
            Layout.preferredHeight: esp3.height * 0.66
            Layout.preferredWidth: esp3.width
            color: "#94E6FF"
            ColumnLayout{
                Loader{
                    source: "qrc:/Views/CaracteristicasEHabilidades.qml"
                }
            }
        }
    }
}
