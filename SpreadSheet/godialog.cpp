#include "godialog.h"
#include "ui_GoDialog.h"
#include <QRegExp>
#include <QRegExpValidator>

godialog::godialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::godialog)
{
    ui->setupUi(this);}
    QString godialog::getText() const {
        return ui->lineEdit->text();

}

godialog::~godialog()
{
    delete ui;
}
