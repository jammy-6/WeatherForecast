#ifndef WEATHER_H
#define WEATHER_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QList>
#include <QLabel>
#include <QContextMenuEvent>
#include <weather_tool.h>
#include <weatherdate.h>
#include <QNetworkAccessManager>
#include <QMessageBox>
#include <QNetworkReply>
#include <QDate>
#include <QHttpMultiPart>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    void contextMenuEvent(QContextMenuEvent *event);

    ~Widget();
    QPoint cur_pos;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void getWeatherInfo();
    void parseJson(const QJsonObject&);
    void setUI();
    QImage getImage(const QString &url);
private slots:
    void exit_fun();
    void parseRequest(QNetworkReply *);
private:
    Ui::Widget *ui;

    //退出菜单
    QMenu *menu;
    QAction *exit;

    //url请求数据
    QNetworkAccessManager *manager;
    QString province;
    QString city,last_city;
    QString area;
    QString today_url;
    QString forecast_url;


    //ui控件
    QList<QLabel *> forecast_week_list;
    QList<QLabel *> forecast_date_list;
    QList<QLabel *> forecast_aqi_list;
    QList<QLabel *> forecast_type_list;
    QList<QLabel *> forecast_typeIco_list;
    QList<QLabel *> forecast_high_list;
    QList<QLabel *> forecast_low_list;

    //工具类
    WeatherTool tool;
    QDate date;
    Today today;
    Forecast forecast[6];
};
#endif // WEATHER_H
