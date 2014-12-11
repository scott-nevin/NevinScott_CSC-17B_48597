
/* Scott Nevin
   Quiz Dialog implementation
   12/10/14
*/

#include <QtGui>
#include <QString>
#include <ctime>
#include <QMessageBox>
#include <QSignalMapper>

#include "QuizDialog.h"
#include "MainWindow.h"

//function prototypes
int gen();

QuizDialog::QuizDialog(QWidget *parent)
    : QDialog(parent){

    //seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    //generate numbers
    int gen_1=gen();
    int gen_2=gen();
    numAns = gen_1 + gen_2;

    //add Labels
    setWindowTitle("Questions");
    QString tmp = QString::number(gen_1);
    num_1 = new QLabel(tmp);
    operation = new QLabel("+");
    QString tmp_1 = QString::number(gen_2);
    num_2 = new QLabel(tmp_1);
    equation = new QLabel("= ?");
    answer = new QLabel("Answer");
    //emit checkAnswer(gen_1, gen_2);

    //add buttons
    check = new QPushButton("Check");
    next = new QPushButton("Next");
    close = new QPushButton("Close");

    //add line edit
    response = new QLineEdit;

    //connect buttons
    connect(close, SIGNAL(clicked()), this, SLOT(close()));
    connect(check, SIGNAL(clicked()), this, SLOT(checkAnswer()));
    connect(next, SIGNAL(clicked()), this, SLOT(nextQ()));
    connect(next, SIGNAL(clicked()), this, SLOT(close()));


    //layout
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(num_1);
    layout->addWidget(operation);
    layout->addWidget(num_2);
    layout->addWidget(equation);
    layout->addStretch();

    QHBoxLayout *leftLayout = new QHBoxLayout;
    leftLayout->addWidget(answer);
    leftLayout->addWidget(response);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(check);

    QHBoxLayout *newLayout = new QHBoxLayout;
    newLayout->addStretch();
    newLayout->addWidget(next);
    newLayout->addWidget(close);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(layout);
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    mainLayout->addLayout(newLayout);
    setLayout(mainLayout);

}

void QuizDialog::checkAnswer(){


    QString text = response->text();
    QString correct = QString::number(numAns);

    if(text==correct){
        QMessageBox::information(this, "Good Job!", "CORRECT!", QMessageBox::Ok);

    }
    else{
        QMessageBox::warning(this, "Try Again", "INCORRECT!", QMessageBox::Ok);
    }

}


int gen(){

    return rand()%90+10;
}

void QuizDialog::nextQ(){

    QuizDialog *subDialog = new QuizDialog;
    subDialog->show();
    connect(next, SIGNAL(clicked()), this, SLOT(close()));

}


