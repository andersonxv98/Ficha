import QtQuick
import QtQuick.Controls
import QtQuick.Window
import QtQuick.Layouts
Item {
    SwipeView {
        id: swipview

        currentIndex: 1
        width: segunda_partLayout.width
        height: segunda_partLayout.height
        anchors.fill: segunda_partLayout

        Item {
            id: firstPage

            Rectangle{
                id: esp1
                //Layout.preferredWidth: segunda_partLayout.width * 0.33
                //Layout.preferredHeight:  segunda_partLayout.height
                width: swipview.width
                height: swipview.height
                ColumnLayout{
                    Loader{

                     source:   "qrc:/Views/ConteudoPrimeiraParte.qml"
                    }
                }
            }
        }

            Rectangle{
                id: esp2
                //Layout.preferredWidth: segunda_partLayout.width * 0.33
                //Layout.preferredHeight:  segunda_partLayout.height
                width: swipview.width
                height: swipview.height
                color: "yellow"
                Rectangle{
                    Loader{
                        source: "qrc:/Views/ConteudoSegundaParte.qml"
                    }
                }
            }


            Rectangle{
                id: esp3
                //Layout.preferredWidth: segunda_partLayout.width * 0.33
                //Layout.preferredHeight:  segunda_partLayout.height
                width: swipview.width
                height: swipview.height
                color:"green"
                ColumnLayout{
                    Loader{
                        source: "qrc:/Views/ConteudoTerceiraParte.qml"
                    }
                }
            }

        }




    PageIndicator {
        id: indicator

        count: swipview.count
        currentIndex: swipview.currentIndex

        anchors.bottom: swipview.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }





}
