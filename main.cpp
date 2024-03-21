#include "weather.h"
#include "ui_weather.h"
#include <QApplication>
#include "weatherforecast.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WeatherForecast w;
    w.setWindowFlag(Qt::FramelessWindowHint);
    w.show();

    return a.exec();
}
