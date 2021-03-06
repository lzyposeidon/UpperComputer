#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
    class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = 0);
    ~SignUp();
    bool dataClear();

signals:
    void readytoSignup(QString carNum, int money);

private slots:
    bool dataToUpClass();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
