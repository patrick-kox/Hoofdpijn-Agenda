#ifndef OVER_H
#define OVER_H

#include <QDialog>

namespace Ui {
class Over;
}

class Over : public QDialog
{
    Q_OBJECT

public:
    explicit Over(QWidget *parent = nullptr);
    ~Over();

private:
    Ui::Over *ui;
};

#endif // OVER_H
