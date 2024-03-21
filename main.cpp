
#include <QApplication>
#include "weatherforecast.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WeatherForecast w;
    w.show();

    return a.exec();
}
