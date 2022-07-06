import QtQuick
import QtQuick.Controls
import "qrc:Views/"  as Views

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    //Views.

    StackView{
        id:stack
        width: 200
        height: 200
        initialItem: "qrc:/Views/Ficha.qml"
    }
    Drawer{
        Loader{
            source: "qrc:/Views/SideBar.qml"
        }
    }

}
