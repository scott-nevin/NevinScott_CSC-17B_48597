
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

    //declare variables.
   // bool dummy = true;

    //generate numbers
    int gen_1=gen();
    int gen_2=gen();
    int numAns = gen_1 + gen_2;
    //emit checkAnswer(numAns);

    //send to handler
   // handler(gen_1, gen_2, dummy);
    //dummy=false;

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

    //signal mapping
    QSignalMapper* signalMapper = new QSignalMapper (this);
    signalMapper -> setMapping (check, numAns) ;
    connect (signalMapper, SIGNAL(mapped(int)), this,SLOT(checkAnswer(int))) ;

    //connect buttons
    connect(close, SIGNAL(clicked()), this, SLOT(close()));
    connect(check, SIGNAL(clicked()), this, SLOT(checkAnswer()));
   //emit checkAnswer(gen_1, gen_2);

/*
   QString text = response->text();
   QString userNum = QString::number(numAns);

   if(text==userNum){
        QMessageBox::information(this, "Good Job!", "CORRECT!", QMessageBox::Ok);

    }
    else{
        QMessageBox::warning(this, "Try Again", "INCORRECT!", QMessageBox::Ok);
    }
    */


    //print number as label
    //QString tmp = QString::number(num);
    //QLabel *label = new QLabel(tmp);

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

void QuizDialog::checkAnswer(int i){

    //int m=5,p = 5;

    //use data
    // to get sender
    QSignalMapper *temp = (QSignalMapper *)this->sender();
    QPushButton *btn = (QPushButton *)temp->mapping(data);
    // use btn

    QMessageBox::information(this, "Good Job!", "TEST", QMessageBox::Ok);

    QString text = response->text();
    QString correct = QString::number(i);

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


