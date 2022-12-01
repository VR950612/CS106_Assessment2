#include "login.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QWidget(parent) ,
  ui(new Ui::login)
{
    ui->setupUi(this);

    QPixmap pi("C:/Users/simra/OneDrive/Desktop/PHOTOS/ac-logo.svg");
    ui->label_Logo->setPixmap(pi);
};

login::~login()
{
    delete ui;
}

