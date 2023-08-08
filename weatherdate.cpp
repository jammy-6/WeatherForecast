#include <weatherdate.h>

Today::Today(){
    date = "0000-00-00";
    city = "null";
    fl = u8"无数据";
    fx = u8"无数据";
    ganmao = u8"无数据";
    notice = u8"无数据";
    pm25 = u8"无数据";
    quality = u8"无数据";
    shidu = u8"无数据";
    sunrise = "00:01";
    sunset = "23:59";
    wendu = "null";
    type = u8"无数据";

}
Today & Today::operator=(const QJsonObject& jsonObj){

    date = jsonObj["date"].toString();
    wendu = jsonObj["temp"].toString();
    city = jsonObj["city"].toString();
    shidu = jsonObj["humidity"].toString();
    QJsonObject aqi = jsonObj["aqi"].toObject();
    pm25 = aqi["pm2_5"].toString();
    quality = aqi["quality"].toString();
    ganmao = aqi["aqiinfo"].toObject()["affect"].toString();
    fx = jsonObj["winddirect"].toString();
    fl = jsonObj["windpower"].toString();
    type = jsonObj["weather"].toString();
    sunrise = jsonObj["daily"].toArray().at(0).toObject()["sunrise"].toString();
    sunset = jsonObj["daily"].toArray().at(0).toObject()["sunset"].toString();
    notice = jsonObj["index"].toArray().at(1).toObject()["detail"].toString();
    return *this;
}

Forecast::Forecast(){

}
Forecast & Forecast::operator=(const QJsonObject&jsonObj){
    date = jsonObj["daytime"].toString();
    high = jsonObj["day_high_temperature"].toString();
    low = jsonObj["night_low_temperature"].toString();
    aqi = jsonObj["aqi"].toObject()["aqi"].toString();
    type = jsonObj["day_weather"].toString();
    weather_url = jsonObj["day_weather_pic"].toString();
    return *this;
}
