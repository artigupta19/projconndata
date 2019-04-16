#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include<QPluginLoader>
#include<QDir>
#include<QSqlDriver>
#include<QSqlError>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

     QSqlDatabase db
}

login::~login()
{
    delete ui;
}
