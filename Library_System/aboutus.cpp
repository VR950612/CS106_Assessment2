#include "aboutus.h"
#include "ui_aboutus.h"

aboutus::aboutus(QWidget *parent):
    QWidget(parent) ,
  ui(new Ui::aboutus)
{
    ui->setupUi(this);

    QPixmap pic("C:/Users/simra/OneDrive/Desktop/PHOTOS/ac-logo.svg");
    ui->label_Logo->setPixmap(pic);
};


aboutus::~aboutus()
{
    delete ui;
}


