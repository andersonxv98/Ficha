import QtQuick
import QtQuick.Controls




ApplicationWindow{
    id: mainwindow
    visible: true
    width: 1024
    height: 800
    title: qsTr("Hello World")
    //visibility: "FullScreen"
    visibility: "Windowed"

    StackView{
        id:stack
        initialItem: "qrc:/Views/Ficha.qml"
    }
    Drawer{
        Loader{
            source: "qrc:/Views/SideBar.qml"
        }
}

}
