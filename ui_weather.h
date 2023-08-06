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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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
    QLineEdit *city_search;
    QLabel *datelb;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *temperature_max5;
    QLabel *datenum6;
    QLabel *quality3;
    QLabel *temperature_min2;
    QLabel *quality2;
    QLabel *type2;
    QLabel *typeicon3;
    QLabel *datenum3;
    QLabel *datecn5;
    QLabel *typeicon1;
    QLabel *type4;
    QLabel *datecn2;
    QLabel *datenum2;
    QLabel *temperature_max3;
    QLabel *type5;
    QLabel *typeicon2;
    QLabel *temperature_min4;
    QLabel *type3;
    QLabel *temperature_min3;
    QLabel *temperature_max2;
    QLabel *quality4;
    QLabel *typeicon4;
    QLabel *temperature_max1;
    QLabel *quality5;
    QLabel *datecn6;
    QLabel *quality1;
    QLabel *datecn1;
    QLabel *datecn3;
    QLabel *datenum4;
    QLabel *typeicon5;
    QLabel *temperature_max4;
    QLabel *temperature_min5;
    QLabel *temperature_min1;
    QLabel *datenum5;
    QLabel *datecn4;
    QLabel *type1;
    QLabel *datenum1;
    QLabel *quality6;
    QLabel *type6;
    QLabel *typeicon6;
    QLabel *temperature_max6;
    QLabel *label_37;
    QLabel *temperature_min6;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *location_icon;
    QLabel *location_text;
    QLabel *leaficon;
    QLabel *quality_lb;
    QLabel *type_icon;
    QLabel *label_9;
    QLabel *temperature;
    QLabel *label_10;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLabel *label_12;
    QTextEdit *textEdit;
    QToolButton *search_btn;
    QToolButton *refresh_btn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 450);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 800, 450));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/weaUI/weaUI.png);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
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
"\n"
""));
        city_search = new QLineEdit(widget);
        city_search->setObjectName(QString::fromUtf8("city_search"));
        city_search->setGeometry(QRect(570, 10, 171, 31));
        city_search->setStyleSheet(QString::fromUtf8(""));
        datelb = new QLabel(widget);
        datelb->setObjectName(QString::fromUtf8("datelb"));
        datelb->setGeometry(QRect(190, 3, 451, 41));
        datelb->setStyleSheet(QString::fromUtf8("font: 20pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255, 0);"));
        datelb->setAlignment(Qt::AlignCenter);
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 45, 781, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 183, 351, 1));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 353, 351, 1));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 190, 351, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 1, 1, 2);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 1, 1, 2);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 2, 1, 1, 2);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 3, 1, 1, 2);

        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(340, 50, 451, 401));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        temperature_max5 = new QLabel(gridLayoutWidget_2);
        temperature_max5->setObjectName(QString::fromUtf8("temperature_max5"));
        temperature_max5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max5, 6, 4, 1, 1);

        datenum6 = new QLabel(gridLayoutWidget_2);
        datenum6->setObjectName(QString::fromUtf8("datenum6"));

        gridLayout_2->addWidget(datenum6, 1, 5, 1, 1);

        quality3 = new QLabel(gridLayoutWidget_2);
        quality3->setObjectName(QString::fromUtf8("quality3"));
        quality3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(quality3, 2, 2, 1, 1);

        temperature_min2 = new QLabel(gridLayoutWidget_2);
        temperature_min2->setObjectName(QString::fromUtf8("temperature_min2"));
        temperature_min2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min2, 9, 1, 1, 1);

        quality2 = new QLabel(gridLayoutWidget_2);
        quality2->setObjectName(QString::fromUtf8("quality2"));
        quality2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(quality2, 2, 1, 1, 1);

        type2 = new QLabel(gridLayoutWidget_2);
        type2->setObjectName(QString::fromUtf8("type2"));
        type2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type2, 3, 1, 1, 1);

        typeicon3 = new QLabel(gridLayoutWidget_2);
        typeicon3->setObjectName(QString::fromUtf8("typeicon3"));
        typeicon3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon3, 4, 2, 2, 1);

        datenum3 = new QLabel(gridLayoutWidget_2);
        datenum3->setObjectName(QString::fromUtf8("datenum3"));
        datenum3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum3, 1, 2, 1, 1);

        datecn5 = new QLabel(gridLayoutWidget_2);
        datecn5->setObjectName(QString::fromUtf8("datecn5"));
        datecn5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn5, 0, 4, 1, 1);

        typeicon1 = new QLabel(gridLayoutWidget_2);
        typeicon1->setObjectName(QString::fromUtf8("typeicon1"));
        typeicon1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon1, 4, 0, 2, 1);

        type4 = new QLabel(gridLayoutWidget_2);
        type4->setObjectName(QString::fromUtf8("type4"));
        type4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type4, 3, 3, 1, 1);

        datecn2 = new QLabel(gridLayoutWidget_2);
        datecn2->setObjectName(QString::fromUtf8("datecn2"));
        datecn2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn2, 0, 1, 1, 1);

        datenum2 = new QLabel(gridLayoutWidget_2);
        datenum2->setObjectName(QString::fromUtf8("datenum2"));
        datenum2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum2, 1, 1, 1, 1);

        temperature_max3 = new QLabel(gridLayoutWidget_2);
        temperature_max3->setObjectName(QString::fromUtf8("temperature_max3"));
        temperature_max3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max3, 6, 2, 1, 1);

        type5 = new QLabel(gridLayoutWidget_2);
        type5->setObjectName(QString::fromUtf8("type5"));
        type5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type5, 3, 4, 1, 1);

        typeicon2 = new QLabel(gridLayoutWidget_2);
        typeicon2->setObjectName(QString::fromUtf8("typeicon2"));
        typeicon2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon2, 4, 1, 2, 1);

        temperature_min4 = new QLabel(gridLayoutWidget_2);
        temperature_min4->setObjectName(QString::fromUtf8("temperature_min4"));
        temperature_min4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min4, 9, 3, 1, 1);

        type3 = new QLabel(gridLayoutWidget_2);
        type3->setObjectName(QString::fromUtf8("type3"));
        type3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type3, 3, 2, 1, 1);

        temperature_min3 = new QLabel(gridLayoutWidget_2);
        temperature_min3->setObjectName(QString::fromUtf8("temperature_min3"));
        temperature_min3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min3, 9, 2, 1, 1);

        temperature_max2 = new QLabel(gridLayoutWidget_2);
        temperature_max2->setObjectName(QString::fromUtf8("temperature_max2"));
        temperature_max2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max2, 6, 1, 1, 1);

        quality4 = new QLabel(gridLayoutWidget_2);
        quality4->setObjectName(QString::fromUtf8("quality4"));
        quality4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(quality4, 2, 3, 1, 1);

        typeicon4 = new QLabel(gridLayoutWidget_2);
        typeicon4->setObjectName(QString::fromUtf8("typeicon4"));
        typeicon4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon4, 4, 3, 2, 1);

        temperature_max1 = new QLabel(gridLayoutWidget_2);
        temperature_max1->setObjectName(QString::fromUtf8("temperature_max1"));
        temperature_max1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max1, 6, 0, 1, 1);

        quality5 = new QLabel(gridLayoutWidget_2);
        quality5->setObjectName(QString::fromUtf8("quality5"));
        quality5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(quality5, 2, 4, 1, 1);

        datecn6 = new QLabel(gridLayoutWidget_2);
        datecn6->setObjectName(QString::fromUtf8("datecn6"));

        gridLayout_2->addWidget(datecn6, 0, 5, 1, 1);

        quality1 = new QLabel(gridLayoutWidget_2);
        quality1->setObjectName(QString::fromUtf8("quality1"));
        quality1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(quality1, 2, 0, 1, 1);

        datecn1 = new QLabel(gridLayoutWidget_2);
        datecn1->setObjectName(QString::fromUtf8("datecn1"));
        datecn1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn1, 0, 0, 1, 1);

        datecn3 = new QLabel(gridLayoutWidget_2);
        datecn3->setObjectName(QString::fromUtf8("datecn3"));
        datecn3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn3, 0, 2, 1, 1);

        datenum4 = new QLabel(gridLayoutWidget_2);
        datenum4->setObjectName(QString::fromUtf8("datenum4"));
        datenum4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum4, 1, 3, 1, 1);

        typeicon5 = new QLabel(gridLayoutWidget_2);
        typeicon5->setObjectName(QString::fromUtf8("typeicon5"));
        typeicon5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(typeicon5, 4, 4, 2, 1);

        temperature_max4 = new QLabel(gridLayoutWidget_2);
        temperature_max4->setObjectName(QString::fromUtf8("temperature_max4"));
        temperature_max4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_max4, 6, 3, 1, 1);

        temperature_min5 = new QLabel(gridLayoutWidget_2);
        temperature_min5->setObjectName(QString::fromUtf8("temperature_min5"));
        temperature_min5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min5, 9, 4, 1, 1);

        temperature_min1 = new QLabel(gridLayoutWidget_2);
        temperature_min1->setObjectName(QString::fromUtf8("temperature_min1"));
        temperature_min1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperature_min1, 9, 0, 1, 1);

        datenum5 = new QLabel(gridLayoutWidget_2);
        datenum5->setObjectName(QString::fromUtf8("datenum5"));
        datenum5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum5, 1, 4, 1, 1);

        datecn4 = new QLabel(gridLayoutWidget_2);
        datecn4->setObjectName(QString::fromUtf8("datecn4"));
        datecn4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datecn4, 0, 3, 1, 1);

        type1 = new QLabel(gridLayoutWidget_2);
        type1->setObjectName(QString::fromUtf8("type1"));
        type1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(type1, 3, 0, 1, 1);

        datenum1 = new QLabel(gridLayoutWidget_2);
        datenum1->setObjectName(QString::fromUtf8("datenum1"));
        datenum1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(datenum1, 1, 0, 1, 1);

        quality6 = new QLabel(gridLayoutWidget_2);
        quality6->setObjectName(QString::fromUtf8("quality6"));

        gridLayout_2->addWidget(quality6, 2, 5, 1, 1);

        type6 = new QLabel(gridLayoutWidget_2);
        type6->setObjectName(QString::fromUtf8("type6"));

        gridLayout_2->addWidget(type6, 3, 5, 1, 1);

        typeicon6 = new QLabel(gridLayoutWidget_2);
        typeicon6->setObjectName(QString::fromUtf8("typeicon6"));

        gridLayout_2->addWidget(typeicon6, 4, 5, 2, 1);

        temperature_max6 = new QLabel(gridLayoutWidget_2);
        temperature_max6->setObjectName(QString::fromUtf8("temperature_max6"));

        gridLayout_2->addWidget(temperature_max6, 6, 5, 1, 1);

        label_37 = new QLabel(gridLayoutWidget_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_37, 7, 0, 2, 6);

        temperature_min6 = new QLabel(gridLayoutWidget_2);
        temperature_min6->setObjectName(QString::fromUtf8("temperature_min6"));

        gridLayout_2->addWidget(temperature_min6, 9, 5, 1, 1);

        gridLayoutWidget_3 = new QWidget(widget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(130, 50, 151, 61));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        location_icon = new QLabel(gridLayoutWidget_3);
        location_icon->setObjectName(QString::fromUtf8("location_icon"));
        location_icon->setStyleSheet(QString::fromUtf8("image: url(:/weatherIco/location.ico)"));

        gridLayout_3->addWidget(location_icon, 0, 0, 1, 1);

        location_text = new QLabel(gridLayoutWidget_3);
        location_text->setObjectName(QString::fromUtf8("location_text"));
        location_text->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(60, 60, 60, 0);"));
        location_text->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(location_text, 0, 1, 1, 1);

        leaficon = new QLabel(widget);
        leaficon->setObjectName(QString::fromUtf8("leaficon"));
        leaficon->setGeometry(QRect(10, 60, 31, 21));
        leaficon->setStyleSheet(QString::fromUtf8("image: url(:/weatherIco/leaf.ico);\n"
"background-color:argb(255,255,255,0);"));
        quality_lb = new QLabel(widget);
        quality_lb->setObjectName(QString::fromUtf8("quality_lb"));
        quality_lb->setGeometry(QRect(40, 60, 69, 19));
        type_icon = new QLabel(widget);
        type_icon->setObjectName(QString::fromUtf8("type_icon"));
        type_icon->setGeometry(QRect(230, 80, 101, 91));
        type_icon->setAutoFillBackground(false);
        type_icon->setStyleSheet(QString::fromUtf8("border-image:url(:/day/day/\346\231\264.png);\n"
"background-color:argb(60,60,60,0);"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 10, 161, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\271\274\345\234\206\";\n"
"color: rgb(110, 255, 0);"));
        label_9->setAlignment(Qt::AlignCenter);
        temperature = new QLabel(widget);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setGeometry(QRect(70, 70, 121, 91));
        temperature->setStyleSheet(QString::fromUtf8("font: 36pt \"Microsoft YaHei UI\";"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 160, 131, 19));
        gridLayoutWidget_4 = new QWidget(widget);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 350, 334, 102));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(150, 100));

        gridLayout_4->addWidget(label_12, 0, 2, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(textEdit, 0, 1, 1, 1);

        search_btn = new QToolButton(widget);
        search_btn->setObjectName(QString::fromUtf8("search_btn"));
        search_btn->setGeometry(QRect(710, 10, 28, 26));
        search_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/weatherIco/search.ico);\n"
""));
        refresh_btn = new QToolButton(widget);
        refresh_btn->setObjectName(QString::fromUtf8("refresh_btn"));
        refresh_btn->setGeometry(QRect(750, 10, 31, 31));
        refresh_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/weatherIco/refresh.ico);"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        city_search->setText(QCoreApplication::translate("Widget", "\345\237\216\345\270\202", nullptr));
        datelb->setText(QCoreApplication::translate("Widget", "2023-08-02", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\270\251\345\272\246", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\351\243\216\345\212\233", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_max5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datenum6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        quality3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        quality2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datenum3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn5->setText(QCoreApplication::translate("Widget", "\345\221\250\345\205\255", nullptr));
        typeicon1->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn2->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        datenum2->setText(QCoreApplication::translate("Widget", "01/02", nullptr));
        temperature_max3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min3->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_max2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        quality4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_max1->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        quality5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        quality1->setText(QCoreApplication::translate("Widget", "\344\274\230\350\264\250", nullptr));
        datecn1->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        datecn3->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        datenum4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_max4->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min1->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datenum5->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        datecn4->setText(QCoreApplication::translate("Widget", "\345\221\250\344\272\224", nullptr));
        type1->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        datenum1->setText(QCoreApplication::translate("Widget", "01/01", nullptr));
        quality6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        type6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        typeicon6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_max6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_37->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        temperature_min6->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        location_icon->setText(QString());
        location_text->setText(QCoreApplication::translate("Widget", "\351\225\277\346\262\231", nullptr));
        leaficon->setText(QString());
        quality_lb->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        type_icon->setText(QString());
        label_9->setText(QCoreApplication::translate("Widget", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
        temperature->setText(QCoreApplication::translate("Widget", "9\302\260", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "\345\244\232\347\251\277\347\202\271\350\241\243\346\234\215", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "<html><head/><body><p>\346\204\237<br/>\345\206\222<br/>\346\214\207<br/>\346\225\260</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        search_btn->setText(QString());
        refresh_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHER_H
