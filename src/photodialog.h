#ifndef PHOTODIALOG_H
#define PHOTODIALOG_H

#include <QDialog>

namespace Ui {
class photodialog;
}

class photodialog : public QDialog
{
    Q_OBJECT

public:
    explicit photodialog(QWidget *parent = 0);
    ~photodialog();

private:
    Ui::photodialog *ui;
};

#endif // PHOTODIALOG_H
