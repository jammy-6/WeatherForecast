#ifndef WEATHERDATE_H
#define WEATHERDATE_H
#include <QJsonObject>
class Today{
public:
    QString date;
    QString wendu;
    QString city;
    QString shidu;
    QString pm25;
    QString quality;
    QString ganmao;
    QString fx;
    QString fl;
    QString type;
    QString sunrise;
    QString sunset;
    QString notice;
    Today();
    Today(const QJsonObject &);
};

class Forecast{
public:
    QString date;
    QString high;
    QString low;
    QString aqi;
    QString type;
    Forecast();
    Forecast(const QJsonObject &);
};

#endif // WEATHERDATE_H
