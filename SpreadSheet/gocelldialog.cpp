#include "gocelldialog.h"
#include "ui_gocelldialog.h"


gocelldialog::gocelldialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gocelldialog)
{
    ui->setupUi(this);

       QRegExp exp{"[A-Z][0-9][0-2]"};

       ui->lineEdit->setValidator(new QRegExpValidator(exp));
}
QString gocelldialog::getText() const {
    return ui->lineEdit->text();
}
gocelldialog::~gocelldialog()
{
    delete ui;
}
