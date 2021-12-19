#ifndef GOCELLDIALOG_H
#define GOCELLDIALOG_H
#include "ui_gocelldialog.h"

#include <QDialog>
#include <QRegExp>
#include <QRegExpValidator>

namespace Ui {
class gocelldialog;
}

class gocelldialog : public QDialog
{
    Q_OBJECT

public:
    explicit gocelldialog(QWidget *parent = nullptr);
    ~gocelldialog();
    QString getText()const;


private:
    Ui::gocelldialog *ui;
};

#endif // GOCELLDIALOG_H
