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
    char type;
    MainWindow(QWidget *parent=0);

public slots:

private slots:
    //void QuizDialog();

private:
    //QuizDialog *quizDialog;
    QLabel *title;
    QLabel *prompt;
    QPushButton *addition;
    QPushButton *subtraction;
    QPushButton *multiplication;
    QPushButton *division;
    QPushButton *closeButton;

};

#endif // MAINWINDOW_H
