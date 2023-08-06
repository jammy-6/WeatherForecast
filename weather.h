#ifndef WEATHER_H
#define WEATHER_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include<QList>
#include <QLabel>
#include <QContextMenuEvent>
#include <weather_tool.h>
#include <weatherdate.h>
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

private slots:
    void exit_fun();

private:
    Ui::Widget *ui;
    QMenu *menu;
    QAction *exit;

    //ui控件
    QList<QLabel *> forecast_week_list;
    QList<QLabel *> forecast_date_list;
    QList<QLabel *> forecast_aqi_list;
    QList<QLabel *> forecast_type_list;
    QList<QLabel *> forecast_typeIco_list;
    QList<QLabel *> forecast_high_list;
    QList<QLabel *> forecast_low_list;

    Today today;
    Forecast forecast[6];
};
#endif // WEATHER_H
