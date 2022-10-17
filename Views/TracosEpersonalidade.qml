import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
Item {
    ColumnLayout{
        id: colum_tracospersonalidade
        anchors.fill: parent
        objectName: "tracosviews"
        Rectangle{
            id: tracopersonalidade_id
            Layout.preferredWidth: conteudoTerceiraParte_pt1.width
             Layout.preferredHeight: conteudoTerceiraParte_pt1.height * 0.25
            color:  "lightgreen"
                Rectangle{
                    Loader{
                        source: "qrc:/Views/TracodePersonalidade.qml"

                    }
                }
        }
        Rectangle{
            id: ideais_id
            Layout.preferredWidth: conteudoTerceiraParte_pt1.width
             Layout.preferredHeight: conteudoTerceiraParte_pt1.height * 0.25
            color:  "lightgreen"
            Rectangle{
                Loader{
                    source: "qrc:/Views/Ideais.qml"

                }
            }


        }
        Rectangle{
            id: especialidades_id
            Layout.preferredWidth: conteudoTerceiraParte_pt1.width
             Layout.preferredHeight: conteudoTerceiraParte_pt1.height * 0.25
            color:  "lightgreen"
            Rectangle{
                Loader{
                    source: "qrc:/Views/Ligacoes.qml"

                }
            }

        }
        Rectangle{
            id: fraquezas_id
            Layout.preferredWidth: conteudoTerceiraParte_pt1.width
             Layout.preferredHeight: conteudoTerceiraParte_pt1.height * 0.25
            color:  "lightgreen"
            Rectangle{
                Loader{
                    source: "qrc:/Views/Defeitos.qml"

                }
            }

        }
    }
}
