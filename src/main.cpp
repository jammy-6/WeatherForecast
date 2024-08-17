#pragma execution_character_set("utf-8")
#include <QApplication>
#include "weatherforecast.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WeatherForecast w;
    w.show();

    return a.exec();
}
