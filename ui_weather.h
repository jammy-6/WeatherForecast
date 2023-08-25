/********************************************************************************
** Form generated from reading UI file 'weather.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHER_H
#define UI_WEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *fengli;
    QLabel *label_1;
    QLabel *shidu;
    QLabel *wendu;
    QLabel *pm2_5;
    QLabel *label_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *line_chart;
    QLabel *temperature_max5;
    QLabel *temperature_min6;
    QLabel *type2;
    QLabel *temperature_max2;
    QLabel *typeicon5;
    QLabel *datecn2;
    QLabel *temperature_max1;
    QLabel *type4;
    QLabel *temperature_min4;
    QLabel *temperature_max3;
    QLabel *type1;
    QLabel *temperature_min3;
    QLabel *typeicon2;
    QLabel *typeicon3;
    QLabel *datenum1;
    QLabel *datenum3;
    QLabel *datecn3;
    QLabel *typeicon4;
    QLabel *temperature_min1;
    QLabel *typeicon1;
    QLabel *datenum4;
    QLabel *temperature_min2;
    QLabel *type5;
    QLabel *datenum2;
    QLabel *typeicon6;
    QLabel *temperature_max4;
    QLabel *temperature_min5;
    QLabel *datenum6;
    QLabel *datecn5;
    QLabel *datenum5;
    QLabel *datecn6;
    QLabel *type3;
    QLabel *datecn4;
    QLabel *temperature_max6;
    QLabel *datecn1;
    QLabel *type6;
    QLabel *temperature;
    QLabel *notice_lb;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLabel *sunarc;
    QTextEdit *ganmao;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *city_search;
    QToolButton *search_btn;
    QToolButton *refresh_btn;
    QLabel *type_icon;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *leaficon;
    QLabel *quality_lb;
    QLabel *label_9;
    QLabel *datelb;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *location_icon;
    QLabel *location_text;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1000, 538);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1000, 538));
        widget->setToolTipDuration(0);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	image: url(:/StockSnap_XX0FZY0UPY.jpg);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"QLabel{\n"
"	font: 25 10pt \"Microsoft YaHei\";\n"
"	border-radius: 4px;\n"
"	background-color: argb(60, 60, 60, 130);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"Line{\n"
"	background-color: rgb(0, 85, 0);\n"
"}\n"
"\n"
"\n"
""));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 200, 351, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        fengli = new QLabel(gridLayoutWidget);
        fengli->setObjectName(QString::fromUtf8("fengli"));
        fengli->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fengli, 3, 1, 1, 2);

        label_1 = new QLabel(gridLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        shidu = new QLabel(gridLayoutWidget);
        shidu->setObjectName(QString::fromUtf8("shidu"));
        shidu->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shidu, 0, 1, 1, 2);

        wendu = new QLabel(gridLayoutWidget);
        wendu->setObjectName(QString::fromUtf8("wendu"));
        wendu->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(wendu, 1, 1, 1, 2);

        pm2_5 = new QLabel(gridLayoutWidget);
        pm2_5->setObjectName(QString::fromUtf8("pm2_5"));
        pm2_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm2_5, 2, 1, 1, 2);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(380, 70, 611, 451));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        line_chart = new QLabel(gridLayoutWidget_2);
        line_chart->setObjectName(QString::fromUtf8("line_chart"));
        line_chart->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(line_chart, 6, 0, 2, 6);

        temperature_max5 = new QLabel(gridLayoutWidget_2);
        temperature_max5->setObjectName(QString::fromUtf8("temperature_max5"));
        temperature_max5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max5, 5, 4, 1, 1);

        temperature_min6 = new QLabel(gridLayoutWidget_2);
        temperature_min6->setObjectName(QString::fromUtf8("temperature_min6"));
        temperature_min6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min6, 8, 5, 1, 1);

        type2 = new QLabel(gridLayoutWidget_2);
        type2->setObjectName(QString::fromUtf8("type2"));
        type2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type2, 2, 1, 1, 1);

        temperature_max2 = new QLabel(gridLayoutWidget_2);
        temperature_max2->setObjectName(QString::fromUtf8("temperature_max2"));
        temperature_max2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max2, 5, 1, 1, 1);

        typeicon5 = new QLabel(gridLayoutWidget_2);
        typeicon5->setObjectName(QString::fromUtf8("typeicon5"));
        typeicon5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon5, 3, 4, 2, 1);

        datecn2 = new QLabel(gridLayoutWidget_2);
        datecn2->setObjectName(QString::fromUtf8("datecn2"));
        datecn2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn2, 0, 1, 1, 1);

        temperature_max1 = new QLabel(gridLayoutWidget_2);
        temperature_max1->setObjectName(QString::fromUtf8("temperature_max1"));
        temperature_max1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max1, 5, 0, 1, 1);

        type4 = new QLabel(gridLayoutWidget_2);
        type4->setObjectName(QString::fromUtf8("type4"));
        type4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type4, 2, 3, 1, 1);

        temperature_min4 = new QLabel(gridLayoutWidget_2);
        temperature_min4->setObjectName(QString::fromUtf8("temperature_min4"));
        temperature_min4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min4, 8, 3, 1, 1);

        temperature_max3 = new QLabel(gridLayoutWidget_2);
        temperature_max3->setObjectName(QString::fromUtf8("temperature_max3"));
        temperature_max3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max3, 5, 2, 1, 1);

        type1 = new QLabel(gridLayoutWidget_2);
        type1->setObjectName(QString::fromUtf8("type1"));
        type1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type1, 2, 0, 1, 1);

        temperature_min3 = new QLabel(gridLayoutWidget_2);
        temperature_min3->setObjectName(QString::fromUtf8("temperature_min3"));
        temperature_min3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min3, 8, 2, 1, 1);

        typeicon2 = new QLabel(gridLayoutWidget_2);
        typeicon2->setObjectName(QString::fromUtf8("typeicon2"));
        typeicon2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon2, 3, 1, 2, 1);

        typeicon3 = new QLabel(gridLayoutWidget_2);
        typeicon3->setObjectName(QString::fromUtf8("typeicon3"));
        typeicon3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon3, 3, 2, 2, 1);

        datenum1 = new QLabel(gridLayoutWidget_2);
        datenum1->setObjectName(QString::fromUtf8("datenum1"));
        datenum1->setStyleSheet(QString::fromUtf8(""));
        datenum1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum1, 1, 0, 1, 1);

        datenum3 = new QLabel(gridLayoutWidget_2);
        datenum3->setObjectName(QString::fromUtf8("datenum3"));
        datenum3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum3, 1, 2, 1, 1);

        datecn3 = new QLabel(gridLayoutWidget_2);
        datecn3->setObjectName(QString::fromUtf8("datecn3"));
        datecn3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn3, 0, 2, 1, 1);

        typeicon4 = new QLabel(gridLayoutWidget_2);
        typeicon4->setObjectName(QString::fromUtf8("typeicon4"));
        typeicon4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon4, 3, 3, 2, 1);

        temperature_min1 = new QLabel(gridLayoutWidget_2);
        temperature_min1->setObjectName(QString::fromUtf8("temperature_min1"));
        temperature_min1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min1, 8, 0, 1, 1);

        typeicon1 = new QLabel(gridLayoutWidget_2);
        typeicon1->setObjectName(QString::fromUtf8("typeicon1"));
        typeicon1->setStyleSheet(QString::fromUtf8("background-image: url(https://img.jumdata.com/weather-icon/d00.png);"));
        typeicon1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon1, 3, 0, 2, 1);

        datenum4 = new QLabel(gridLayoutWidget_2);
        datenum4->setObjectName(QString::fromUtf8("datenum4"));
        datenum4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum4, 1, 3, 1, 1);

        temperature_min2 = new QLabel(gridLayoutWidget_2);
        temperature_min2->setObjectName(QString::fromUtf8("temperature_min2"));
        temperature_min2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min2, 8, 1, 1, 1);

        type5 = new QLabel(gridLayoutWidget_2);
        type5->setObjectName(QString::fromUtf8("type5"));
        type5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type5, 2, 4, 1, 1);

        datenum2 = new QLabel(gridLayoutWidget_2);
        datenum2->setObjectName(QString::fromUtf8("datenum2"));
        datenum2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum2, 1, 1, 1, 1);

        typeicon6 = new QLabel(gridLayoutWidget_2);
        typeicon6->setObjectName(QString::fromUtf8("typeicon6"));
        typeicon6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon6, 3, 5, 2, 1);

        temperature_max4 = new QLabel(gridLayoutWidget_2);
        temperature_max4->setObjectName(QString::fromUtf8("temperature_max4"));
        temperature_max4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max4, 5, 3, 1, 1);

        temperature_min5 = new QLabel(gridLayoutWidget_2);
        temperature_min5->setObjectName(QString::fromUtf8("temperature_min5"));
        temperature_min5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min5, 8, 4, 1, 1);

        datenum6 = new QLabel(gridLayoutWidget_2);
        datenum6->setObjectName(QString::fromUtf8("datenum6"));
        datenum6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum6, 1, 5, 1, 1);

        datecn5 = new QLabel(gridLayoutWidget_2);
        datecn5->setObjectName(QString::fromUtf8("datecn5"));
        datecn5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn5, 0, 4, 1, 1);

        datenum5 = new QLabel(gridLayoutWidget_2);
        datenum5->setObjectName(QString::fromUtf8("datenum5"));
        datenum5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum5, 1, 4, 1, 1);

        datecn6 = new QLabel(gridLayoutWidget_2);
        datecn6->setObjectName(QString::fromUtf8("datecn6"));
        datecn6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn6, 0, 5, 1, 1);

        type3 = new QLabel(gridLayoutWidget_2);
        type3->setObjectName(QString::fromUtf8("type3"));
        type3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type3, 2, 2, 1, 1);

        datecn4 = new QLabel(gridLayoutWidget_2);
        datecn4->setObjectName(QString::fromUtf8("datecn4"));
        datecn4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn4, 0, 3, 1, 1);

        temperature_max6 = new QLabel(gridLayoutWidget_2);
        temperature_max6->setObjectName(QString::fromUtf8("temperature_max6"));
        temperature_max6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max6, 5, 5, 1, 1);

        datecn1 = new QLabel(gridLayoutWidget_2);
        datecn1->setObjectName(QString::fromUtf8("datecn1"));
        datecn1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn1, 0, 0, 1, 1);

        type6 = new QLabel(gridLayoutWidget_2);
        type6->setObjectName(QString::fromUtf8("type6"));
        type6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type6, 2, 5, 1, 1);

        temperature = new QLabel(widget);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setGeometry(QRect(140, 60, 101, 101));
        temperature->setStyleSheet(QString::fromUtf8("font: 36pt \"Microsoft YaHei UI\";"));
        notice_lb = new QLabel(widget);
        notice_lb->setObjectName(QString::fromUtf8("notice_lb"));
        notice_lb->setGeometry(QRect(10, 110, 121, 81));
        notice_lb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        notice_lb->setWordWrap(true);
        gridLayoutWidget_4 = new QWidget(widget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 370, 351, 151));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(20, 16777215));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        sunarc = new QLabel(gridLayoutWidget_4);
        sunarc->setObjectName(QString::fromUtf8("sunarc"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sunarc->sizePolicy().hasHeightForWidth());
        sunarc->setSizePolicy(sizePolicy);
        sunarc->setMinimumSize(QSize(200, 100));

        gridLayout_4->addWidget(sunarc, 0, 2, 1, 1);

        ganmao = new QTextEdit(gridLayoutWidget_4);
        ganmao->setObjectName(QString::fromUtf8("ganmao"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ganmao->sizePolicy().hasHeightForWidth());
        ganmao->setSizePolicy(sizePolicy1);
        ganmao->setMaximumSize(QSize(140, 120));
        ganmao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout_4->addWidget(ganmao, 0, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(720, 0, 271, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        city_search = new QLineEdit(horizontalLayoutWidget);
        city_search->setObjectName(QString::fromUtf8("city_search"));
        sizePolicy1.setHeightForWidth(city_search->sizePolicy().hasHeightForWidth());
        city_search->setSizePolicy(sizePolicy1);
        city_search->setMaximumSize(QSize(16777215, 30));
        city_search->setSizeIncrement(QSize(0, 0));
        city_search->setStyleSheet(QString::fromUtf8(""));

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

        type_icon = new QLabel(widget);
        type_icon->setObjectName(QString::fromUtf8("type_icon"));
        type_icon->setGeometry(QRect(230, 70, 121, 101));
        type_icon->setAutoFillBackground(false);
        type_icon->setStyleSheet(QString::fromUtf8("background-color:argb(60,60,60,0);"));
        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 60, 111, 45));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        leaficon = new QLabel(horizontalLayoutWidget_2);
        leaficon->setObjectName(QString::fromUtf8("leaficon"));
        sizePolicy1.setHeightForWidth(leaficon->sizePolicy().hasHeightForWidth());
        leaficon->setSizePolicy(sizePolicy1);
        leaficon->setMinimumSize(QSize(0, 0));
        leaficon->setMaximumSize(QSize(40, 16777215));
        leaficon->setStyleSheet(QString::fromUtf8("image: url(:/weatherIco/leaf.ico);\n"
"background-color:argb(255,255,255,0);"));

        horizontalLayout_2->addWidget(leaficon);

        quality_lb = new QLabel(horizontalLayoutWidget_2);
        quality_lb->setObjectName(QString::fromUtf8("quality_lb"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\260\217\347\261\263\345\205\260\344\272\255"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        quality_lb->setFont(font);
        quality_lb->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\260\217\347\261\263\345\205\260\344\272\255\";"));
        quality_lb->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(quality_lb);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 171, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\271\274\345\234\206\";\n"
"color: rgb(110, 255, 0);"));
        label_9->setAlignment(Qt::AlignCenter);
        datelb = new QLabel(widget);
        datelb->setObjectName(QString::fromUtf8("datelb"));
        datelb->setGeometry(QRect(390, 10, 201, 33));
        sizePolicy2.setHeightForWidth(datelb->sizePolicy().hasHeightForWidth());
        datelb->setSizePolicy(sizePolicy2);
        datelb->setStyleSheet(QString::fromUtf8("font: 22pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255, 0);"));
        datelb->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_3 = new QWidget(widget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(190, 10, 159, 52));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        location_icon = new QLabel(gridLayoutWidget_3);
        location_icon->setObjectName(QString::fromUtf8("location_icon"));
        sizePolicy1.setHeightForWidth(location_icon->sizePolicy().hasHeightForWidth());
        location_icon->setSizePolicy(sizePolicy1);
        location_icon->setMinimumSize(QSize(0, 0));
        location_icon->setMaximumSize(QSize(16777215, 40));
        location_icon->setStyleSheet(QString::fromUtf8("QLabel#location_icon{\n"
"image: url(:/weatherIco/location.ico);\n"
"}"));

        gridLayout_3->addWidget(location_icon, 1, 0, 1, 1);

        location_text = new QLabel(gridLayoutWidget_3);
        location_text->setObjectName(QString::fromUtf8("location_text"));
        sizePolicy1.setHeightForWidth(location_text->sizePolicy().hasHeightForWidth());
        location_text->setSizePolicy(sizePolicy1);
        location_text->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        location_text->setFont(font1);
        location_text->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(60, 60, 60, 0);"));
        location_text->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(location_text, 1, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\270\251\345\272\246", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\351\243\216\345\212\233", nullptr));
        fengli->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_1->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        shidu->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        wendu->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pm2_5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        line_chart->setText(QString());
        temperature_max5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_max2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn2->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        temperature_max1->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_max3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type1->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        temperature_min3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datenum1->setText(QCoreApplication::translate("Widget", "01/01", nullptr));
        datenum3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn3->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        typeicon4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min1->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon1->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datenum4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datenum2->setText(QCoreApplication::translate("Widget", "01/02", nullptr));
        typeicon6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_max4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datenum6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn5->setText(QCoreApplication::translate("Widget", "\345\221\250\345\205\255", nullptr));
        datenum5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn4->setText(QCoreApplication::translate("Widget", "\345\221\250\344\272\224", nullptr));
        temperature_max6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn1->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        type6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature->setText(QCoreApplication::translate("Widget", "31\302\260", nullptr));
        notice_lb->setText(QCoreApplication::translate("Widget", "\345\244\232\347\251\277\347\202\271\350\241\243\346\234\215\357\274\214\345\244\226\351\235\242\350\276\203\345\206\267\357\274\214\345\273\272\350\256\256\345\234\250\345\256\244\345\206\205\346\264\273\345\212\250", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "<html><head/><body><p>\346\210\267<br/>\345\244\226<br/>\346\214\207<br/>\346\225\260</p></body></html>", nullptr));
        sunarc->setText(QString());
        city_search->setText(QCoreApplication::translate("Widget", "\345\237\216\345\270\202", nullptr));
        search_btn->setText(QString());
        refresh_btn->setText(QString());
        type_icon->setText(QString());
        leaficon->setText(QString());
        quality_lb->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
        datelb->setText(QCoreApplication::translate("Widget", "2023-08-02", nullptr));
        location_icon->setText(QString());
        location_text->setText(QCoreApplication::translate("Widget", "\351\225\277\346\262\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
