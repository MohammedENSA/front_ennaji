#ifndef ADMINGESTIONUTILISATEUR_H
#define ADMINGESTIONUTILISATEUR_H

#include <QWidget>

namespace Ui {
class Admingestionutilisateur;
}

class Admingestionutilisateur : public QWidget
{
    Q_OBJECT

public:
    explicit Admingestionutilisateur(QWidget *parent = nullptr);
    ~Admingestionutilisateur();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::Admingestionutilisateur *ui;
};

#endif // ADMINGESTIONUTILISATEUR_H
