#ifndef USERINFOS_H
#define USERINFOS_H

#include <QWidget>

namespace Ui {
class UserInfos;
}

class UserInfos : public QWidget
{
    Q_OBJECT

public:
    explicit UserInfos(QWidget *parent = nullptr);
    ~UserInfos();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::UserInfos *ui;
};

#endif // USERINFOS_H
