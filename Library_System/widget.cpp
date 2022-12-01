#include "widget.h"
#include "./ui_widget.h"
#include <QPixmap>
#include "login.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/simra/OneDrive/Desktop/PHOTOS/Images.jpg");
    ui->label_LibraryPic->setPixmap(pix);

    QPixmap pix_1("C:/Users/simra/OneDrive/Desktop/PHOTOS/facebook.png");
    ui->label_Facebook->setPixmap(pix_1);

    QPixmap pix_2("C:/Users/simra/OneDrive/Desktop/PHOTOS/instagram.png");
    ui->label_Instagram->setPixmap(pix_2);

    QPixmap pix_3("C:/Users/simra/OneDrive/Desktop/PHOTOS/youtube.png");
    ui->label_Youtube->setPixmap(pix_3);

    QPixmap pix_4("C:/Users/simra/OneDrive/Desktop/PHOTOS/twitter.png");
    ui->label_Twitter->setPixmap(pix_4);

    QPixmap pix_5("C:/Users/simra/OneDrive/Desktop/PHOTOS/ac-logo.svg");
    ui->label_Logo->setPixmap(pix_5);
}


void Widget::on_pushButton_Login_clicked()
{
    connect(ui->pushButton_Login,&QPushButton::clicked,[=](){
        Widget * login = new login (this);
        this->hide();
        login ->show();
   });
}

Widget::~Widget()
{
    delete ui;
}
