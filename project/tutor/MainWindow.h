#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QWidget>

class QLabel;
class QPushButton;
class QSpinBox;
//class QuizDialog;

class MainWindow : public QDialog
{

    Q_OBJECT

public:
    MainWindow(QWidget *parent=0);

signals:

private slots:
    //void QuizDialog();

private:
    //QuizDialog *quizDialog;
    QLabel *title;
    QLabel *prompt;
    QLabel *numDig;
    QLabel *digits;
    QLabel *label;
    QSpinBox *spinbox;
    QPushButton *addition;
    QPushButton *subtraction;
    QPushButton *multiplication;
    QPushButton *division;
    QPushButton *closeButton;

};

#endif // MAINWINDOW_H
