#ifndef ADMINGESTIONLIVRE_H
#define ADMINGESTIONLIVRE_H

#include <QWidget>

namespace Ui {
class AdmingestionLivre;
}

class AdmingestionLivre : public QWidget
{
    Q_OBJECT

public:
    explicit AdmingestionLivre(QWidget *parent = nullptr);
    ~AdmingestionLivre();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::AdmingestionLivre *ui;
};

#endif // ADMINGESTIONLIVRE_H
