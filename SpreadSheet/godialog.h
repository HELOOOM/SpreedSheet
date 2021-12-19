#ifndef GODIALOG_H
#define GODIALOG_H

#include <QDialog>

namespace Ui {
class godialog;
}

class godialog : public QDialog
{
    Q_OBJECT

public:
    explicit godialog(QWidget *parent = nullptr);
    ~godialog();
    QString getText()const;

private:
    Ui::godialog *ui;
};

#endif // GODIALOG_H
