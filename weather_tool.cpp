#include <weather_tool.h>
 unsigned char CharToHex(unsigned char x)
{
    return (unsigned char)(x > 9 ? x + 55 : x + 48);
}

//extern unsigned char CharToHex(unsigned char x);
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
