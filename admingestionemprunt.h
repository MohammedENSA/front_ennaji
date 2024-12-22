#ifndef ADMINGESTIONEMPRUNT_H
#define ADMINGESTIONEMPRUNT_H

#include <QWidget>

namespace Ui {
class Admingestionemprunt;
}

class Admingestionemprunt : public QWidget
{
    Q_OBJECT

public:
    explicit Admingestionemprunt(QWidget *parent = nullptr);
    ~Admingestionemprunt();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::Admingestionemprunt *ui;
};

#endif // ADMINGESTIONEMPRUNT_H
