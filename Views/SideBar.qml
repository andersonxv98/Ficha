import QtQuick
import QtQuick.Controls
import QtQuick.Window
Item {
    Drawer {
            id: drawerz
            width: 0.66 * parent.width
            height: parent.height
            Rectangle{

                color: "Red"
                Column{

                     Button {
                          text: "Criar Nova Ficha"
                         width: drawerz.width
                        //  height: drawerz.width / 3
                          onClicked: {
                              console.log("Front Drawer: criar ficha")
                          }
                      }
                      Button {
                          text: "Carregar Nova Ficha"

                          width: drawerz.width
                         //  height: drawerz.width / 3
                          onClicked:{
                             console.log("Front Drawer: carregar ficha")
                              controllador.carregarJogador();
                          }
                      }
                      Button {
                          text: "Salvar Ficha"
                          width: drawerz.width
                        //  height: drawerz.width / 3
                          onClicked: {
                              console.log("Front Drawer: criar ficha")
                              controllador.salvarJogador();
                          }
                      }
                      Button {
                          text: "Sair"
                         width: drawerz.width
                          // height: drawerz.width / 3
                          onClicked:{
                              console.log("Front Drawer: Sair do app")
                              Qt.quit()
                          }
                      }
            }
        }
    }
}
