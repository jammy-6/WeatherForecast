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
#include <iostream>
class WeatherTool{
public:
    WeatherTool(){
        //开始解析资源文件
        QString filepath = QCoreApplication::applicationDirPath();
        filepath += u8"/city_info.json";
        QFile file = QFile(filepath);
        if(file.open(QIODevice::ReadOnly|QIODevice::Text)){
            QByteArray data = file.readAll();
            file.close();
            QJsonParseError error;
            QJsonDocument jsonDoc = QJsonDocument::fromJson(data,&error);
            QJsonValue city_infos = jsonDoc[u8"result"];
            QJsonArray city_infos_arr = city_infos.toArray();
            for(int i=0;i<city_infos_arr.size();i++){
                QString city_name = city_infos_arr.at(i).toObject().value(u8"city").toString();
                QString city_code = city_infos_arr.at(i).toObject().value(u8"citycode").toString();
                if(city_code!=u8"null"){
                    m_city2code[city_name] = city_code;
                }
            }
        }
        qDebug()<<m_city2code[u8"广州"];

    }


    const QString & operator[](const QString &cityname){
        auto it = m_city2code.find(cityname);
        if(it==m_city2code.end()){
            it = m_city2code.find(cityname+u8"市");
        }
        if(it==m_city2code.end()){
            it = m_city2code.find(cityname+u8"县");
        }
        if(it!=m_city2code.end()){
            return it->second;
        }
        else{
            return u8"00000000";
        }
    }

private:
    std::map<QString,QString> m_city2code;

};


#endif // WEATHER_TOOL_H
