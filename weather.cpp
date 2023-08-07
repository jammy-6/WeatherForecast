#include "weather.h"
#include "ui_weather.h"
#include <string>
#include <QTimer>
using std::string;

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

    manager = new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(parseRequest(QNetworkReply*)));
    today_url = u8"https://jisutqybmf.market.alicloudapi.com/weather/query";
    forecast_url = u8"https://jmweather.market.alicloudapi.com/weather/query/15d";
    city=u8"广州";
    getWeatherInfo();

}

//解析天气预报数据(json)，初始化today以及forecast成员
void Widget::parseJson(const QJsonObject& jsonObj){

    if(jsonObj.contains("result"))
        today = jsonObj["result"].toObject();
    else if(jsonObj.contains("data")){
        for(int i=0;i<6;i++){
            forecast[i] = jsonObj["data"].toObject()["dayWeathers"].toArray().at(i).toObject();
        }
    }
    setUI();
}


//解析http请求，获取Json数据
void Widget::parseRequest(QNetworkReply * reply){
    qDebug()<<u8"parseRequest";
    //获取响应状态码
    QVariant status_code =reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    QByteArray data = reply->readAll();
    QJsonParseError err;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(data,&err);
    QJsonValue msg;
    //状态码不正确
    if(reply->error()!=QNetworkReply::NoError||status_code!=200){
        msg = jsonDoc[u8"msg"];
        qDebug()<<msg.toString();
        QMessageBox::warning(this,u8"警告",u8"获取天气数据失败！",QMessageBox::Ok,QMessageBox::No);
        return;
    }
    msg = jsonDoc[u8"msg"];
    qDebug()<<msg.toString();
    parseJson(jsonDoc.object());

}
QImage Widget::getImage(const QString &url){
    // 创建QNetworkAccessManager对象
    QNetworkAccessManager image_manager;

    // 创建一个事件循环
    QEventLoop loop;

    // 发送GET请求
    image_manager.get(QNetworkRequest(QUrl(url)));
    QImage image;
    // 连接信号与槽，处理请求完成后的响应
    connect(&image_manager,&QNetworkAccessManager::finished,[&](QNetworkReply* reply){
        if (reply->error() == QNetworkReply::NoError) {
            // 获取响应数据
            QByteArray imageData = reply->readAll();
            // 将数据转换为QImage
            image.loadFromData(imageData);
            loop.quit();
        }
    });
    loop.exec();
    return image;

}




//设置UI界面信息
void Widget::setUI(){
    //设置today的ui界面
    ui->datelb->setText(today.date);
    ui->temperature->setText(today.wendu);
    ui->quality_lb->setText(today.quality);
    ui->notice_lb->setText(today.notice);
    ui->location_text->setText(today.city);
    ui->wendu->setText(today.wendu);
    ui->shidu->setText(today.shidu);
    ui->pm2_5->setText(today.pm25);
    ui->fengli->setText(today.fl);
    ui->ganmao->setText(today.ganmao);

    //设置未来6天的ui界面
    for(int i=0;i<6;i++){
        QDate cur_date = QDate::fromString(forecast[i].date,"yyyyMMdd");
        forecast_date_list[i]->setText(cur_date.toString("MM/dd"));
        forecast_week_list[i]->setText(date2weekday(cur_date.dayOfWeek()));
        forecast_low_list[i]->setText(forecast[i].low);
        forecast_high_list[i]->setText(forecast[i].high);
        forecast_type_list[i]->setText(forecast[i].type);
        QImage image = getImage(forecast[i].weather_url);
        forecast_typeIco_list[i]->setScaledContents(true);
        forecast_typeIco_list[i]->setPixmap(QPixmap::fromImage(image));
        if(i==0)
            ui->type_icon->setPixmap(QPixmap::fromImage(image));
    }
}

void Widget::getWeatherInfo(){
    QString city_code = tool[city];


    if(city_code==u8"00000000"){
        QMessageBox::warning(this,u8"警告",u8"不存在该城市！",QMessageBox::Ok,QMessageBox::No);
        return;
    }
//    string encode;
//    UrlEncode(city.toStdString(),encode);
//    QString area = QString(encode.c_str());
    //正式开始http请求

    //获取今日天气信息
    QNetworkRequest request(today_url);
    request.setRawHeader(u8"Authorization",u8"APPCODE 6ba0931b2d604deba881134ce9114fc5");
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=utf-8");
    QByteArray requestBody = QString(u8"city="+city).toUtf8();
    manager->post(request,requestBody);

    //获取历史7天天气信息
    request.setUrl(forecast_url);
    requestBody = QString(u8"area="+city).toUtf8();
    manager->post(request,requestBody);


}



//右键弹出菜单
void Widget::contextMenuEvent(QContextMenuEvent *event){
    menu->exec(QCursor::pos());
    event->accept();
}

//鼠标左击更新坐标值
void Widget::mousePressEvent(QMouseEvent *event){
    cur_pos = event->globalPos()-pos();
}

//鼠标左击并移动更新窗体位置
void Widget::mouseMoveEvent(QMouseEvent *event){
    move(event->globalPos()-cur_pos);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::exit_fun(){

    qApp->exit(0);
}

