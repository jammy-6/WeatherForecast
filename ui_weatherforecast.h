/********************************************************************************
** Form generated from reading UI file 'weatherforecast.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERFORECAST_H
#define UI_WEATHERFORECAST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherForecast
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *datecn4;
    QLabel *line_chart;
    QLabel *typeicon4;
    QLabel *typeicon2;
    QLabel *temperature_min4;
    QLabel *datecn1;
    QLabel *typeicon6;
    QLabel *temperature_min5;
    QLabel *datecn5;
    QLabel *datecn2;
    QLabel *datecn3;
    QLabel *type2;
    QLabel *datenum3;
    QLabel *datecn6;
    QLabel *type5;
    QLabel *temperature_max3;
    QLabel *temperature_min2;
    QLabel *temperature_max5;
    QLabel *type1;
    QLabel *datenum1;
    QLabel *temperature_min6;
    QLabel *temperature_max6;
    QLabel *datenum4;
    QLabel *type6;
    QLabel *datenum2;
    QLabel *temperature_max4;
    QLabel *datenum5;
    QLabel *type4;
    QLabel *temperature_min3;
    QLabel *type3;
    QLabel *typeicon3;
    QLabel *temperature_min1;
    QLabel *datenum6;
    QLabel *typeicon5;
    QLabel *temperature_max1;
    QLabel *typeicon1;
    QLabel *temperature_max2;
    QLabel *datelb;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *city_search;
    QToolButton *search_btn;
    QToolButton *refresh_btn;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLabel *sunarc;
    QTextEdit *ganmao;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *fengli_2;
    QLabel *label_7;
    QLabel *wendu_2;
    QLabel *pm2_6;
    QLabel *label_8;
    QLabel *shidu_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *type_icon;
    QHBoxLayout *horizontalLayout_2;
    QLabel *leaficon;
    QLabel *quality_lb;
    QLabel *notice_lb;
    QLabel *temperature;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_6;
    QLabel *location_text;
    QLabel *label_9;
    QLabel *location_icon;

    void setupUi(QFrame *WeatherForecast)
    {
        if (WeatherForecast->objectName().isEmpty())
            WeatherForecast->setObjectName(QString::fromUtf8("WeatherForecast"));
        WeatherForecast->resize(1000, 538);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WeatherForecast->sizePolicy().hasHeightForWidth());
        WeatherForecast->setSizePolicy(sizePolicy);
        WeatherForecast->setMinimumSize(QSize(1, 0));
        WeatherForecast->setStyleSheet(QString::fromUtf8("QFrame#WeatherForecast{\n"
"border-image: url(:/weaUI/weaUI.png);\n"
"}\n"
"QLabel{\n"
"	font: 25 10pt \\Microsoft YaHei\\;\n"
"	border-radius: 4px;\n"
"   background-color: argb(60, 60, 60, 130);\n"
"   color: rgb(255, 255, 255);\n"
"}"));
        gridLayoutWidget_2 = new QWidget(WeatherForecast);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(390, 70, 611, 461));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        datecn4 = new QLabel(gridLayoutWidget_2);
        datecn4->setObjectName(QString::fromUtf8("datecn4"));
        datecn4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datecn4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn4, 0, 3, 1, 1);

        line_chart = new QLabel(gridLayoutWidget_2);
        line_chart->setObjectName(QString::fromUtf8("line_chart"));
        line_chart->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);"));
        line_chart->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line_chart, 6, 0, 2, 6);

        typeicon4 = new QLabel(gridLayoutWidget_2);
        typeicon4->setObjectName(QString::fromUtf8("typeicon4"));
        typeicon4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon4, 3, 3, 2, 1);

        typeicon2 = new QLabel(gridLayoutWidget_2);
        typeicon2->setObjectName(QString::fromUtf8("typeicon2"));
        typeicon2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon2, 3, 1, 2, 1);

        temperature_min4 = new QLabel(gridLayoutWidget_2);
        temperature_min4->setObjectName(QString::fromUtf8("temperature_min4"));
        temperature_min4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_min4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min4, 8, 3, 1, 1);

        datecn1 = new QLabel(gridLayoutWidget_2);
        datecn1->setObjectName(QString::fromUtf8("datecn1"));
        datecn1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datecn1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn1, 0, 0, 1, 1);

        typeicon6 = new QLabel(gridLayoutWidget_2);
        typeicon6->setObjectName(QString::fromUtf8("typeicon6"));
        typeicon6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon6, 3, 5, 2, 1);

        temperature_min5 = new QLabel(gridLayoutWidget_2);
        temperature_min5->setObjectName(QString::fromUtf8("temperature_min5"));
        temperature_min5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_min5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min5, 8, 4, 1, 1);

        datecn5 = new QLabel(gridLayoutWidget_2);
        datecn5->setObjectName(QString::fromUtf8("datecn5"));
        datecn5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datecn5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn5, 0, 4, 1, 1);

        datecn2 = new QLabel(gridLayoutWidget_2);
        datecn2->setObjectName(QString::fromUtf8("datecn2"));
        datecn2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datecn2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn2, 0, 1, 1, 1);

        datecn3 = new QLabel(gridLayoutWidget_2);
        datecn3->setObjectName(QString::fromUtf8("datecn3"));
        datecn3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datecn3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn3, 0, 2, 1, 1);

        type2 = new QLabel(gridLayoutWidget_2);
        type2->setObjectName(QString::fromUtf8("type2"));
        type2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        type2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type2, 2, 1, 1, 1);

        datenum3 = new QLabel(gridLayoutWidget_2);
        datenum3->setObjectName(QString::fromUtf8("datenum3"));
        datenum3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datenum3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum3, 1, 2, 1, 1);

        datecn6 = new QLabel(gridLayoutWidget_2);
        datecn6->setObjectName(QString::fromUtf8("datecn6"));
        datecn6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datecn6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn6, 0, 5, 1, 1);

        type5 = new QLabel(gridLayoutWidget_2);
        type5->setObjectName(QString::fromUtf8("type5"));
        type5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        type5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type5, 2, 4, 1, 1);

        temperature_max3 = new QLabel(gridLayoutWidget_2);
        temperature_max3->setObjectName(QString::fromUtf8("temperature_max3"));
        temperature_max3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_max3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max3, 5, 2, 1, 1);

        temperature_min2 = new QLabel(gridLayoutWidget_2);
        temperature_min2->setObjectName(QString::fromUtf8("temperature_min2"));
        temperature_min2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_min2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min2, 8, 1, 1, 1);

        temperature_max5 = new QLabel(gridLayoutWidget_2);
        temperature_max5->setObjectName(QString::fromUtf8("temperature_max5"));
        temperature_max5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_max5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max5, 5, 4, 1, 1);

        type1 = new QLabel(gridLayoutWidget_2);
        type1->setObjectName(QString::fromUtf8("type1"));
        type1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        type1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type1, 2, 0, 1, 1);

        datenum1 = new QLabel(gridLayoutWidget_2);
        datenum1->setObjectName(QString::fromUtf8("datenum1"));
        datenum1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datenum1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum1, 1, 0, 1, 1);

        temperature_min6 = new QLabel(gridLayoutWidget_2);
        temperature_min6->setObjectName(QString::fromUtf8("temperature_min6"));
        temperature_min6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_min6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min6, 8, 5, 1, 1);

        temperature_max6 = new QLabel(gridLayoutWidget_2);
        temperature_max6->setObjectName(QString::fromUtf8("temperature_max6"));
        temperature_max6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_max6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max6, 5, 5, 1, 1);

        datenum4 = new QLabel(gridLayoutWidget_2);
        datenum4->setObjectName(QString::fromUtf8("datenum4"));
        datenum4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datenum4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum4, 1, 3, 1, 1);

        type6 = new QLabel(gridLayoutWidget_2);
        type6->setObjectName(QString::fromUtf8("type6"));
        type6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        type6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type6, 2, 5, 1, 1);

        datenum2 = new QLabel(gridLayoutWidget_2);
        datenum2->setObjectName(QString::fromUtf8("datenum2"));
        datenum2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datenum2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum2, 1, 1, 1, 1);

        temperature_max4 = new QLabel(gridLayoutWidget_2);
        temperature_max4->setObjectName(QString::fromUtf8("temperature_max4"));
        temperature_max4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_max4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max4, 5, 3, 1, 1);

        datenum5 = new QLabel(gridLayoutWidget_2);
        datenum5->setObjectName(QString::fromUtf8("datenum5"));
        datenum5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datenum5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum5, 1, 4, 1, 1);

        type4 = new QLabel(gridLayoutWidget_2);
        type4->setObjectName(QString::fromUtf8("type4"));
        type4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        type4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type4, 2, 3, 1, 1);

        temperature_min3 = new QLabel(gridLayoutWidget_2);
        temperature_min3->setObjectName(QString::fromUtf8("temperature_min3"));
        temperature_min3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_min3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min3, 8, 2, 1, 1);

        type3 = new QLabel(gridLayoutWidget_2);
        type3->setObjectName(QString::fromUtf8("type3"));
        type3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        type3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type3, 2, 2, 1, 1);

        typeicon3 = new QLabel(gridLayoutWidget_2);
        typeicon3->setObjectName(QString::fromUtf8("typeicon3"));
        typeicon3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon3, 3, 2, 2, 1);

        temperature_min1 = new QLabel(gridLayoutWidget_2);
        temperature_min1->setObjectName(QString::fromUtf8("temperature_min1"));
        temperature_min1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_min1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min1, 8, 0, 1, 1);

        datenum6 = new QLabel(gridLayoutWidget_2);
        datenum6->setObjectName(QString::fromUtf8("datenum6"));
        datenum6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        datenum6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum6, 1, 5, 1, 1);

        typeicon5 = new QLabel(gridLayoutWidget_2);
        typeicon5->setObjectName(QString::fromUtf8("typeicon5"));
        typeicon5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon5, 3, 4, 2, 1);

        temperature_max1 = new QLabel(gridLayoutWidget_2);
        temperature_max1->setObjectName(QString::fromUtf8("temperature_max1"));
        temperature_max1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_max1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max1, 5, 0, 1, 1);

        typeicon1 = new QLabel(gridLayoutWidget_2);
        typeicon1->setObjectName(QString::fromUtf8("typeicon1"));
        typeicon1->setStyleSheet(QString::fromUtf8(""));
        typeicon1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon1, 3, 0, 2, 1);

        temperature_max2 = new QLabel(gridLayoutWidget_2);
        temperature_max2->setObjectName(QString::fromUtf8("temperature_max2"));
        temperature_max2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        temperature_max2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max2, 5, 1, 1, 1);

        datelb = new QLabel(WeatherForecast);
        datelb->setObjectName(QString::fromUtf8("datelb"));
        datelb->setGeometry(QRect(430, 10, 201, 33));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(datelb->sizePolicy().hasHeightForWidth());
        datelb->setSizePolicy(sizePolicy1);
        datelb->setStyleSheet(QString::fromUtf8("font: 22pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255, 0);"));
        datelb->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(WeatherForecast);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(720, 10, 271, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        city_search = new QLineEdit(horizontalLayoutWidget);
        city_search->setObjectName(QString::fromUtf8("city_search"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(city_search->sizePolicy().hasHeightForWidth());
        city_search->setSizePolicy(sizePolicy2);
        city_search->setMaximumSize(QSize(16777215, 30));
        city_search->setSizeIncrement(QSize(0, 0));
        city_search->setStyleSheet(QString::fromUtf8("QLineEdit{border: 1px solid gray; border-radius: 4px; background:argb(47, 47, 47, 130); color:white;} QLineEdit:hover{border-color:rgb(101, 255, 106); }"));

        horizontalLayout->addWidget(city_search);

        search_btn = new QToolButton(horizontalLayoutWidget);
        search_btn->setObjectName(QString::fromUtf8("search_btn"));
        search_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/weatherIco/search.ico);\n"
""));

        horizontalLayout->addWidget(search_btn);

        refresh_btn = new QToolButton(horizontalLayoutWidget);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/weatherIco/refresh.ico);"));

        horizontalLayout->addWidget(refresh_btn);

        gridLayoutWidget_4 = new QWidget(WeatherForecast);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 390, 371, 141));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(20, 16777215));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        sunarc = new QLabel(gridLayoutWidget_4);
        sunarc->setObjectName(QString::fromUtf8("sunarc"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sunarc->sizePolicy().hasHeightForWidth());
        sunarc->setSizePolicy(sizePolicy3);
        sunarc->setMinimumSize(QSize(200, 100));
        sunarc->setStyleSheet(QString::fromUtf8("color: rgb(255, 41, 87);"));

        gridLayout_4->addWidget(sunarc, 0, 2, 1, 1);

        ganmao = new QTextEdit(gridLayoutWidget_4);
        ganmao->setObjectName(QString::fromUtf8("ganmao"));
        sizePolicy2.setHeightForWidth(ganmao->sizePolicy().hasHeightForWidth());
        ganmao->setSizePolicy(sizePolicy2);
        ganmao->setMaximumSize(QSize(140, 120));
        ganmao->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"                            background-color: rgba(0, 0, 255, 128); \n"
"                            color: white; \n"
"                        }"));

        gridLayout_4->addWidget(ganmao, 0, 1, 1, 1);

        gridLayoutWidget = new QWidget(WeatherForecast);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 230, 371, 151));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        fengli_2 = new QLabel(gridLayoutWidget);
        fengli_2->setObjectName(QString::fromUtf8("fengli_2"));
        fengli_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        fengli_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(fengli_2, 3, 1, 1, 2);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        wendu_2 = new QLabel(gridLayoutWidget);
        wendu_2->setObjectName(QString::fromUtf8("wendu_2"));
        wendu_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        wendu_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wendu_2, 1, 1, 1, 2);

        pm2_6 = new QLabel(gridLayoutWidget);
        pm2_6->setObjectName(QString::fromUtf8("pm2_6"));
        pm2_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        pm2_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(pm2_6, 2, 1, 1, 2);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        shidu_2 = new QLabel(gridLayoutWidget);
        shidu_2->setObjectName(QString::fromUtf8("shidu_2"));
        shidu_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                         background-color: rgba(0, 173, 255, 128); \n"
"                         border: 2px solid rgba(0, 120, 195, 255); \n"
"                         border-radius: 10px;\n"
"                         padding: 5px; \n"
"                         font: bold 14px; \n"
"                         color: white;\n"
"                     }"));
        shidu_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(shidu_2, 0, 1, 1, 2);

        gridLayoutWidget_5 = new QWidget(WeatherForecast);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 50, 371, 171));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        type_icon = new QLabel(gridLayoutWidget_5);
        type_icon->setObjectName(QString::fromUtf8("type_icon"));
        type_icon->setAutoFillBackground(false);
        type_icon->setStyleSheet(QString::fromUtf8("background-color:argb(60,60,60,0);"));
        type_icon->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(type_icon, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leaficon = new QLabel(gridLayoutWidget_5);
        leaficon->setObjectName(QString::fromUtf8("leaficon"));
        sizePolicy2.setHeightForWidth(leaficon->sizePolicy().hasHeightForWidth());
        leaficon->setSizePolicy(sizePolicy2);
        leaficon->setMinimumSize(QSize(0, 0));
        leaficon->setMaximumSize(QSize(40, 16777215));
        leaficon->setStyleSheet(QString::fromUtf8("image: url(:/weatherIco/leaf.ico);\n"
"background-color:argb(255,255,255,0);"));

        horizontalLayout_2->addWidget(leaficon);

        quality_lb = new QLabel(gridLayoutWidget_5);
        quality_lb->setObjectName(QString::fromUtf8("quality_lb"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\260\217\347\261\263\345\205\260\344\272\255"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        quality_lb->setFont(font);
        quality_lb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 18pt \"\345\260\217\347\261\263\345\205\260\344\272\255\";"));
        quality_lb->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(quality_lb);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        notice_lb = new QLabel(gridLayoutWidget_5);
        notice_lb->setObjectName(QString::fromUtf8("notice_lb"));
        notice_lb->setStyleSheet(QString::fromUtf8("QLabel {\n"
"                            background-color: rgba(0, 0, 255, 128); \n"
"                            color: white; \n"
"                        }"));
        notice_lb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        notice_lb->setWordWrap(true);

        gridLayout_5->addWidget(notice_lb, 1, 0, 1, 1);

        temperature = new QLabel(gridLayoutWidget_5);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setStyleSheet(QString::fromUtf8("font: 36pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);"));
        temperature->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(temperature, 0, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(WeatherForecast);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 0, 371, 51));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        location_text = new QLabel(gridLayoutWidget_3);
        location_text->setObjectName(QString::fromUtf8("location_text"));
        sizePolicy2.setHeightForWidth(location_text->sizePolicy().hasHeightForWidth());
        location_text->setSizePolicy(sizePolicy2);
        location_text->setMinimumSize(QSize(150, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        location_text->setFont(font1);
        location_text->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Microsoft YaHei UI\";\n"
""));
        location_text->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(location_text, 1, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\271\274\345\234\206\";\n"
"color: rgb(110, 255, 0);"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_9, 1, 0, 1, 1);

        location_icon = new QLabel(gridLayoutWidget_3);
        location_icon->setObjectName(QString::fromUtf8("location_icon"));
        location_icon->setEnabled(true);
        sizePolicy2.setHeightForWidth(location_icon->sizePolicy().hasHeightForWidth());
        location_icon->setSizePolicy(sizePolicy2);
        location_icon->setMinimumSize(QSize(34, 48));
        location_icon->setMaximumSize(QSize(16777215, 40));
        location_icon->setStyleSheet(QString::fromUtf8("image: url(:/weatherIco/location.ico);\n"
""));
        location_icon->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(location_icon, 1, 1, 1, 1);


        retranslateUi(WeatherForecast);

        QMetaObject::connectSlotsByName(WeatherForecast);
    } // setupUi

    void retranslateUi(QFrame *WeatherForecast)
    {
        WeatherForecast->setWindowTitle(QApplication::translate("WeatherForecast", "Frame", nullptr));
        datecn4->setText(QApplication::translate("WeatherForecast", "\345\221\250\344\272\224", nullptr));
        line_chart->setText(QString());
        typeicon4->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        typeicon2->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_min4->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datecn1->setText(QApplication::translate("WeatherForecast", "\346\230\250\345\244\251", nullptr));
        typeicon6->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_min5->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datecn5->setText(QApplication::translate("WeatherForecast", "\345\221\250\345\205\255", nullptr));
        datecn2->setText(QApplication::translate("WeatherForecast", "\344\273\212\345\244\251", nullptr));
        datecn3->setText(QApplication::translate("WeatherForecast", "\346\230\216\345\244\251", nullptr));
        type2->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datenum3->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datecn6->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        type5->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_max3->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_min2->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_max5->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        type1->setText(QApplication::translate("WeatherForecast", "\351\230\264", nullptr));
        datenum1->setText(QApplication::translate("WeatherForecast", "01/01", nullptr));
        temperature_min6->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_max6->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datenum4->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        type6->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datenum2->setText(QApplication::translate("WeatherForecast", "01/02", nullptr));
        temperature_max4->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datenum5->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        type4->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_min3->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        type3->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        typeicon3->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_min1->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datenum6->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        typeicon5->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_max1->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        typeicon1->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        temperature_max2->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        datelb->setText(QApplication::translate("WeatherForecast", "2023-08-02", nullptr));
        city_search->setText(QApplication::translate("WeatherForecast", "\345\237\216\345\270\202", nullptr));
        search_btn->setText(QString());
        refresh_btn->setText(QString());
        label_11->setText(QApplication::translate("WeatherForecast", "<html><head/><body><p>\346\210\267<br/>\345\244\226<br/>\346\214\207<br/>\346\225\260</p></body></html>", nullptr));
        sunarc->setText(QString());
        label_5->setText(QApplication::translate("WeatherForecast", "\346\270\251\345\272\246", nullptr));
        label_6->setText(QApplication::translate("WeatherForecast", "\351\243\216\345\212\233", nullptr));
        fengli_2->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("WeatherForecast", "\346\271\277\345\272\246", nullptr));
        wendu_2->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        pm2_6->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("WeatherForecast", "PM2.5", nullptr));
        shidu_2->setText(QApplication::translate("WeatherForecast", "TextLabel", nullptr));
        type_icon->setText(QString());
        leaficon->setText(QString());
        quality_lb->setText(QApplication::translate("WeatherForecast", "\344\274\230", nullptr));
        notice_lb->setText(QApplication::translate("WeatherForecast", "\345\244\232\347\251\277\347\202\271\350\241\243\346\234\215\357\274\214\345\244\226\351\235\242\350\276\203\345\206\267\357\274\214\345\273\272\350\256\256\345\234\250\345\256\244\345\206\205\346\264\273\345\212\250", nullptr));
        temperature->setText(QApplication::translate("WeatherForecast", "31\302\260", nullptr));
        location_text->setText(QApplication::translate("WeatherForecast", "\351\225\277\346\262\231", nullptr));
        label_9->setText(QApplication::translate("WeatherForecast", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
        location_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WeatherForecast: public Ui_WeatherForecast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERFORECAST_H
