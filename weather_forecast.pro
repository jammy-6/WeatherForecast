QT       += network core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    weather_tool.cpp \
    weatherdate.cpp \
    weatherforecast.cpp

HEADERS += \
    weather_tool.h \
    weatherdate.h \
    weatherforecast.h

FORMS += \
    weatherforecast.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    file.qrc \
    icons/icons.qrc \
    images/images.qrc \
#    file/file.qrc

DISTFILES += \
    city_info.json \
    icons/close.ico \
    icons/leaf.ico \
    icons/location.ico \
    icons/refresh.ico \
    icons/search.ico \
    images/weaUI.png \
#    file/city_info.json\
