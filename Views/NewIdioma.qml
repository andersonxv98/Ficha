import QtQuick
import QtQuick.Controls
import QtQuick.Layouts



ApplicationWindow{
    id: novaWindow
    visible: false
    width: 800
    height: 200
    title: qsTr("Hello World")
    //visibility: "FullScreen"
    visibility: "Windowed"
    onClosing: {
        controllador.resetComponents()

    }

    Rectangle{

        id: viewnewhab
        anchors.fill: parent
        width: parent.width
        height: parent.height
        color: "lightblue"
         RowLayout{
             Rectangle{
                 id: firstparte
                 //anchors.fill: viewnewhab
                 Layout.preferredHeight: viewnewhab.height
                 Layout.preferredWidth: viewnewhab.width * 0.49
                 color: "lightgreen"
                ColumnLayout{
                    Rectangle{
                        id: rb6
                        //anchors.fill: viewnewhab
                        Layout.preferredHeight: firstparte.height * 0.14
                        Layout.preferredWidth: firstparte.width
                        color: "lightgreen"
                    RowLayout{
                        Text {
                            id: label_duracao
                            text: qsTr("Descrição")
                        }
                        TextField {

                            id: tb_duracao
                            text: qsTr("");
                            //anchors.centerIn: parent

                            objectName: "tb_duracao"


                        }

                        Button{
                            text: "Finalizar"
                            onClicked: {

                                  let r =  controllador.instanciarNovoIdioma(tb_duracao.text);
                                console.log("SORTEIA ISSO PRA MIM: ", r);
                                  let lwidiomas =  controllador.getListViewIdiomas();
                                lwidiomas.model.append({"desc" : r});

                                //tres_id.color = "red";
                               // modelidiomas.append(r)
                                //IdiomasListView.classsmedia.append(r);
                                    novaWindow.close()
                                }
                        }
                    }}


                }
}



}

}

}
