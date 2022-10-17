QT += quick \
        widgets

SOURCES += \
        Controllers/ControllerTest.cpp \
        Controllers/salvar.cpp \
        Models/AnimaisEVeiculos/animais.cpp \
        Models/AnimaisEVeiculos/genericovan.cpp \
        Models/AnimaisEVeiculos/veiculos.cpp \
        Models/Equipamentos/arma.cpp \
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
        Models/Jogador/atributos.cpp \
        Models/Jogador/caracteristicas.cpp \
        Models/Jogador/caracteristicasehabilidades.cpp \
        Models/Jogador/defeitos.cpp \
        Models/Jogador/equipados.cpp \
        Models/Jogador/ideais.cpp \
        Models/Jogador/idiomas.cpp \
        Models/Jogador/jogador.cpp \
        Models/Jogador/ligacoes.cpp \
        Models/Jogador/mochila.cpp \
        Models/Jogador/status.cpp \
        Models/Jogador/statuspericias.cpp \
        Models/Jogador/tracos.cpp \
        main.cpp

resources.files = main.qml 
resources.prefix = /$${TARGET}
RESOURCES += resources \
    Views/Ficha.qml \
    Views/SideBar.qml \
    Views/SegundaParteFicha.qml \
    Views/PrimeiraParteFicha.qml \
    Views/PrimeiraParteAntecedentes.qml \
    Views/SegundaParteAntecedentes.qml \
    Views/ConteudoTerceiraParte.qml \
    Views/TracosEpersonalidade.qml \
    Views/ConteudoSegundaParte.qml \
    Views/ClasseDeArmaduraEOutrosRow.qml \
    Views/StatusView.qml \
    Views/PontodeVida.qml \
    Views/DadodeVidaEoutro.qml \
    Views/AtaquesEconjuracao.qml \
    Views/ConteudoPrimeiraParte.qml \
    Views/OutrasProeficienciasIdiomas.qml \
    Views/AtributosPericiaseoutros.qml \
    Views/Atributos.qml \
    Views/TesteResistenciaPericia.qml \
    Views/Percepcao.qml \
    Views/IdiomasEOutros.qml \
    Views/NovaJanela.qml \
    Views/EquipamentosView.qml \
    Views/NewIdioma.qml \
    Views/NewEquip.qml \
    Views/TracodePersonalidade.qml \
    Views/CaracteristicasEHabilidades.qml \
     Views/Ideais.qml \
     Views/Ligacoes.qml \
     Views/Defeitos.qml \
    Views/Imgs/Ficha.png

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Views/AtaquesEconjuracao.qml \
    Views/Atributos.qml \
    Views/AtributosPericiaseoutros.qml \
    Views/CaracteristicasEHabilidades.qml \
    Views/ClasseDeArmaduraEOutrosRow.qml \
    Views/ConteudoPrimeiraParte.qml \
    Views/ConteudoSegundaParte.qml \
    Views/ConteudoTerceiraParte.qml \
    Views/DadodeVidaEoutro.qml \
    Views/Defeitos.qml \
    Views/EquipamentosView.qml \
    Views/Ficha.qml \
    Views/Habilidade.qml \
    Views/Ideais.qml \
    Views/IdiomasEOutros.qml \
    Views/Ligacoes.qml \
    Views/NewEquip.qml \
    Views/NewIdioma.qml \
    Views/NovaJanela.qml \
    Views/OutrasProeficienciasIdiomas.qml \
    Views/Percepcao.qml \
    Views/PontodeVida.qml \
    Views/PrimeiraParteAntecedentes.qml \
    Views/PrimeiraParteFicha.qml \
    Views/SegundaParteAntecedentes.qml \
    Views/SegundaParteFicha.qml \
    Views/SideBar.qml \
    Views/Imgs/Ficha.png \
    Views/StatusView.qml \
    Views/TracodePersonalidade.qml \
    Views/TracosEpersonalidade.qml \
    Views/TesteResistenciaPericia.qml \
    jornadacaranguejo


HEADERS += \
    Controllers/ControllerTest.h \
    Controllers/salvar.h \
    Models/AnimaisEVeiculos/animais.h \
    Models/AnimaisEVeiculos/genericovan.h \
    Models/AnimaisEVeiculos/veiculos.h \
    Models/Equipamentos/arma.h \
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
    Models/Jogador/atributos.h \
    Models/Jogador/caracteristicas.h \
    Models/Jogador/caracteristicasehabilidades.h \
    Models/Jogador/defeitos.h \
    Models/Jogador/equipados.h \
    Models/Jogador/ideais.h \
    Models/Jogador/idiomas.h \
    Models/Jogador/jogador.h \
    Models/Jogador/ligacoes.h \
    Models/Jogador/mochila.h \
    Models/Jogador/status.h \
    Models/Jogador/statuspericias.h \
    Models/Jogador/tracos.h
