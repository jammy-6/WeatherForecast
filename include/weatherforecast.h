#ifndef WEATHERFORECAST_H
#define WEATHERFORECAST_H

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
#include <QPainter>
#include <QPen>
#include <QChart>
#include <QLineSeries>
#include <QChartView>
#include <QValueAxis>
#include <QScrollArea>
#include <algorithm>
#include <QTimer>
#include <QMutex>
#include <functional>
#include <QColor>
#include <QFrame>

namespace Ui {
class WeatherForecast;
}

class WeatherForecast : public QFrame
{
    Q_OBJECT

public:
    explicit WeatherForecast(QWidget *parent = nullptr);
    ~WeatherForecast();
    void contextMenuEvent(QContextMenuEvent *event);
    virtual bool eventFilter(QObject *watched, QEvent *event);
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void getWeatherInfo();
    void parseJson(const QJsonObject&);
    void paintSunSetUI();
    void paintLineChart();
    void setUI();
private slots:
    void exit_fun();
    void parseRequest(QNetworkReply *);
    void on_search_btn_clicked(bool checked);
    void on_refresh_btn_clicked(bool checked);
    void setImage(QNetworkReply *reply,int index);
private:
    Ui::WeatherForecast *ui;

    QPoint cur_pos;
    //退出菜单
    QMenu *menu;
    QAction *exit;
    QMutex mutex;
    //url请求数据
    QString appCode;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *image_manager[6];
    QString province;
    QString city,last_city;
    QString area;
    QString today_url;
    QString forecast_url;
    QImage images[6];


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
    //UI类
    QDate date;
    Today today;
    Forecast forecast[6];
    //定时刷新
    QTimer *timer;
};

#endif // WEATHERFORECAST_H
