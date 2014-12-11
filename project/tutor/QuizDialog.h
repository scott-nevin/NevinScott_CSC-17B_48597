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
    int numAns;
    QuizDialog(QWidget *parent=0);

public slots:
    void checkAnswer();
    void nextQ();

signals:

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

#endif // QUIZDIALOG_H
