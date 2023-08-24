#ifndef WEATHER_TOOL_H
#define WEATHER_TOOL_H

#include <QCoreApplication>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QFile>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <map>
#include <QDebug>
#include <string.h>

using namespace std;
class WeatherTool{
public:
    WeatherTool();


    QString  operator[](const QString &cityname);

private:
    std::map<QString,QString> m_city2code;

};
//unsigned char CharToHex(unsigned char x)
//{
//    return (unsigned char)(x > 9 ? x + 55 : x + 48);
//}
// URL encode
void UrlEncode(const string &src, string &str_encode);
QString date2weekday(int dayOfWeekInt);

#endif // WEATHER_TOOL_H
