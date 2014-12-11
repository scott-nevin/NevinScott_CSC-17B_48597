#ifndef SUB_H
#define SUB_H

#include <QDialog>
#include <QString>
#include "MainWindow.h"

class QLabel;
class QPushButton;
class QLineEdit;

class SUB : public QDialog
{

    Q_OBJECT

public:
    int numAns;
    SUB(QWidget *parent=0);

public slots:
    void checkAnswer();
    void nextQ();


private slots:


private:
    QLabel *num_1;
    QLabel *operation;
    QLabel *num_2;
    QLabel *equation;
    QLabel *answer;
    QPushButton *check;
    QPushButton *close;
    QPushButton *next;
    QLineEdit *response;

};
#endif // SUB_H
