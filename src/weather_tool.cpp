
#pragma execution_character_set("utf-8")
#include <weather_tool.h>


WeatherTool::WeatherTool(){
    //开始解析资源文件
    QString filepath= u8":/city_info.json";
    QFile file(filepath);
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
}

QString  WeatherTool::operator[](const QString &cityname){
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


 unsigned char CharToHex(unsigned char x)
{
    return (unsigned char)(x > 9 ? x + 55 : x + 48);
}


//extern unsigned char CharToHex(unsigned char x);
//对携带中文的url进行编码操作
void UrlEncode(const string &src, string &str_encode)
{
    unsigned char *p = (unsigned char *) src.c_str();
    unsigned char ch;

    while (*p) {
        ch = (unsigned char) *p;
        if (*p == ' ') {
            str_encode += '+';
        } else if (isalnum(ch) || strchr("-_.~!*'();:@&=+$,/?#[]", ch)) {
            str_encode += *p;
        } else {
            str_encode += '%';
            str_encode += CharToHex((unsigned char) (ch >> 4));
            str_encode += CharToHex((unsigned char) (ch % 16));
        }
        ++p;
    }

}


QString date2weekday(int dayOfWeekInt){
    QString dayOfWeekStr;
    switch (dayOfWeekInt) {
    case 1:
        dayOfWeekStr = "Monday";
        break;
    case 2:
        dayOfWeekStr = "Tuesday";
        break;
    case 3:
        dayOfWeekStr = "Wednesday";
        break;
    case 4:
        dayOfWeekStr = "Thursday";
        break;
    case 5:
        dayOfWeekStr = "Friday";
        break;
    case 6:
        dayOfWeekStr = "Saturday";
        break;
    case 7:
        dayOfWeekStr = "Sunday";
        break;
    default:
        dayOfWeekStr = "Invalid";
        break;
    }
    return dayOfWeekStr;
}
