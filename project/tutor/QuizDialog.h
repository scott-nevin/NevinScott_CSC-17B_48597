#ifndef QUIZDIALOG_H
#define QUIZDIALOG_H

#include <QDialog>
#include <QString>
#include "MainWindow.h"

class QLabel;
class QPushButton;
class QLineEdit;

class QuizDialog : public QDialog
{

    Q_OBJECT

public:
    QuizDialog(QWidget *parent=0);

public slots:
    //void handler();
    void checkAnswer(int);

signals:
    //void sig_1(int);

private slots:
    //int setDig();
   // void checkAnswer(int, int);

private:
    //int numType;
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

#endif // QUIZDIALOG_H
