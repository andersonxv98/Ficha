import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    ColumnLayout{
        id: statusview_id
        anchors.fill: parent

            Rectangle{
                id: classearmaduraeoutros_id
                Layout.preferredHeight: conteudoSegundaParte_pt1.height * 0.33
                Layout.preferredWidth: conteudoSegundaParte_pt1.width
                //color: "#FEEB0F"
            RowLayout{
                Loader{
                    source: "qrc:/Views/ClasseDeArmaduraEOutrosRow.qml" //classe de armadura, iniciativa  deslocamento
                }
            }

        }



        Rectangle{
            id: pontodevidaseoutros_id
            Layout.preferredHeight: conteudoSegundaParte_pt1.height * 0.33
            Layout.preferredWidth: conteudoSegundaParte_pt1.width
            //color: "#FEEB0F"

        Loader{
            source: "qrc:/Views/PontodeVida.qml" //classe de armadura, iniciativa  deslocamento
        }
    }
        Rectangle{
            id: dadodevidaeoutros_id
            Layout.preferredHeight: conteudoSegundaParte_pt1.height * 0.33
            Layout.preferredWidth: conteudoSegundaParte_pt1.width
            //color: "#FEEB0F"

        Loader{
            source: "qrc:/Views/DadodeVidaEoutro.qml" //classe de armadura, iniciativa  deslocamento
            onLoaded: {

            }

        }
}

}

}
