#include "weather.h"
#include "ui_weather.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置无边框
    setWindowFlag(Qt::FramelessWindowHint);
    setFixedSize(width(),height());
    //添加退出功能
    menu = new QMenu(ui->widget);
    exit = new QAction(QIcon(":/weatherIco/close.ico"),QString("exit"),menu);
    menu->addAction(exit);
    connect(exit,SIGNAL(triggered(bool)),this,SLOT(exit_fun()));

    ui->city_search->setStyleSheet("QLineEdit{border: 1px solid gray; border-radius: 4px; background:argb(47, 47, 47, 130); color:rgb(255, 255, 255);} QLineEdit:hover{border-color:rgb(101, 255, 106); }");

    //添加ui控件
    forecast_week_list << ui->datecn1 << ui->datecn2 << ui->datecn3 << ui->datecn4 << ui->datecn5 << ui->datecn6;
    forecast_date_list << ui->datenum1 << ui->datenum2 << ui->datenum3 << ui->datenum4 << ui->datenum5 << ui->datenum6;
    forecast_aqi_list << ui->quality1 << ui->quality2 << ui->quality3 << ui->quality4 << ui->quality5 << ui->quality6;
    forecast_type_list << ui->type1 << ui->type2 << ui->type3 << ui->type4 << ui->type5 << ui->type6;
    forecast_typeIco_list << ui->typeicon1 << ui->typeicon2 << ui->typeicon3 << ui->typeicon4 << ui->typeicon5 << ui->typeicon6;
    forecast_high_list << ui->temperature_max1 << ui->temperature_max2 << ui->temperature_max3 << ui->temperature_max4 << ui->temperature_max5 << ui->temperature_max6;
    forecast_low_list << ui->temperature_min1 << ui->temperature_min2 << ui->temperature_min3 << ui->temperature_min4 << ui->temperature_min5 << ui->temperature_min6;

    // dateLb和WeekLb样式表设置
    for (int i = 0; i < 6; i++)
    {
        forecast_date_list[i]->setStyleSheet("background-color: rgba(0, 255, 255, 100);");
        forecast_week_list[i]->setStyleSheet("background-color: rgba(0, 255, 255, 100);");
    }
    WeatherTool tool;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::exit_fun(){

    qApp->exit(0);
}


void Widget::contextMenuEvent(QContextMenuEvent *event){
    menu->exec(QCursor::pos());
    event->accept();
}

void Widget::mousePressEvent(QMouseEvent *event){
    cur_pos = event->globalPos()-pos();
}


void Widget::mouseMoveEvent(QMouseEvent *event){
    move(event->globalPos()-cur_pos);
}

