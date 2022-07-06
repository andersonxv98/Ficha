QT += quick

SOURCES += \
        Models/AnimaisEVeiculos/animais.cpp \
        Models/AnimaisEVeiculos/genericovan.cpp \
        Models/AnimaisEVeiculos/veiculos.cpp \
        Models/Equipamentos/arma.cpp \
        Models/Equipamentos/armadura.cpp \
        Models/Equipamentos/equipamento_aventura.cpp \
        Models/Equipamentos/ferramentas.cpp \
        Models/Equipamentos/objetoequipamento.cpp \
        Models/Equipamentos/outros.cpp \
        Models/Equipamentos/propriedades_arma.cpp \
        Models/Jogador/AtaquesEMagia/ataquesemagia.cpp \
        Models/Jogador/AtaquesEMagia/componentes.cpp \
        Models/Jogador/AtaquesEMagia/listaataquesemagias.cpp \
        Models/Jogador/Caracteristicas/alinhamento.cpp \
        Models/Jogador/Caracteristicas/antecedente.cpp \
        Models/Jogador/Caracteristicas/classes.cpp \
        Models/Jogador/Caracteristicas/pontosxp.cpp \
        Models/Jogador/Caracteristicas/raca.cpp \
        Models/Jogador/Equipads/bracos.cpp \
        Models/Jogador/Equipads/maodireita.cpp \
        Models/Jogador/Equipads/maoesquerda.cpp \
        Models/Jogador/Equipads/ombrodireito.cpp \
        Models/Jogador/Equipads/ombroesquerdo.cpp \
        Models/Jogador/Equipads/pernas.cpp \
        Models/Jogador/Equipads/pes.cpp \
        Models/Jogador/Equipads/tronco.cpp \
        Models/Jogador/Proeficiencias/pericias.cpp \
        Models/Jogador/Proeficiencias/proeficiencias.cpp \
        Models/Jogador/Proeficiencias/testeresistencia.cpp \
        Models/Jogador/Tracos/fraquezas.cpp \
        Models/Jogador/Tracos/ideais.cpp \
        Models/Jogador/Tracos/personalidade.cpp \
        Models/Jogador/Tracos/vinculos.cpp \
        Models/Jogador/atributos.cpp \
        Models/Jogador/caracteristicas.cpp \
        Models/Jogador/equipados.cpp \
        Models/Jogador/idiomas.cpp \
        Models/Jogador/jogador.cpp \
        Models/Jogador/mochila.cpp \
        Models/Jogador/status.cpp \
        Models/Jogador/tracos.cpp \
        main.cpp

resources.files = main.qml 
resources.prefix = /$${TARGET}
RESOURCES += resources \
    Views/Ficha.qml \
    Views/SideBar.qml

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Views/Ficha.qml \
    Views/SideBar.qml \
    Views/TelaPrincipal.qml

HEADERS += \
    Models/AnimaisEVeiculos/animais.h \
    Models/AnimaisEVeiculos/genericovan.h \
    Models/AnimaisEVeiculos/veiculos.h \
    Models/Equipamentos/arma.h \
    Models/Equipamentos/armadura.h \
    Models/Equipamentos/equipamento_aventura.h \
    Models/Equipamentos/ferramentas.h \
    Models/Equipamentos/objetoequipamento.h \
    Models/Equipamentos/outros.h \
    Models/Equipamentos/propriedades_arma.h \
    Models/Jogador/AtaquesEMagia/ataquesemagia.h \
    Models/Jogador/AtaquesEMagia/componentes.h \
    Models/Jogador/AtaquesEMagia/listaataquesemagias.h \
    Models/Jogador/Caracteristicas/alinhamento.h \
    Models/Jogador/Caracteristicas/antecedente.h \
    Models/Jogador/Caracteristicas/classes.h \
    Models/Jogador/Caracteristicas/pontosxp.h \
    Models/Jogador/Caracteristicas/raca.h \
    Models/Jogador/Equipads/bracos.h \
    Models/Jogador/Equipads/maodireita.h \
    Models/Jogador/Equipads/maoesquerda.h \
    Models/Jogador/Equipads/ombrodireito.h \
    Models/Jogador/Equipads/ombroesquerdo.h \
    Models/Jogador/Equipads/pernas.h \
    Models/Jogador/Equipads/pes.h \
    Models/Jogador/Equipads/tronco.h \
    Models/Jogador/Proeficiencias/pericias.h \
    Models/Jogador/Proeficiencias/proeficiencias.h \
    Models/Jogador/Proeficiencias/testeresistencia.h \
    Models/Jogador/Tracos/fraquezas.h \
    Models/Jogador/Tracos/ideais.h \
    Models/Jogador/Tracos/personalidade.h \
    Models/Jogador/Tracos/vinculos.h \
    Models/Jogador/atributos.h \
    Models/Jogador/caracteristicas.h \
    Models/Jogador/equipados.h \
    Models/Jogador/idiomas.h \
    Models/Jogador/jogador.h \
    Models/Jogador/mochila.h \
    Models/Jogador/status.h \
    Models/Jogador/tracos.h
