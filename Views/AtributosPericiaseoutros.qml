import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Item {
    RowLayout{
        id: atributospericiaseoutros_id
        anchors.fill: parent
        Rectangle{
            id: atributos_lay
            Layout.preferredHeight: um_id.height
            Layout.preferredWidth: um_id.width * 0.3
            //color: "pink"
            ColumnLayout{
                Loader{
                    source: "qrc:/Views/Atributos.qml"
                }
            }

        }

        Rectangle{
            id:  periciaseoutro_lay
            Layout.preferredHeight: um_id.height
            Layout.preferredWidth: um_id.width * 0.7
            //color: "red"
            ColumnLayout{
                Loader{
                    source: "qrc:/Views/TesteResistenciaPericia.qml"
                }
            }

        }


    }
}
