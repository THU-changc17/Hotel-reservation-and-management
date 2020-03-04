#ifndef PLATFORM_H
#define PLATFORM_H

#include <QDialog>

namespace Ui {
class platform;
}

class platform : public QDialog
{
    Q_OBJECT

public:
    explicit platform(QWidget *parent = 0);
    ~platform();
private slots:

    void on_passBtn_clicked();

    void on_unpassBtn_clicked();

private:
    Ui::platform *ui;
};

#endif // PLATFORM_H
