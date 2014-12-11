
/* Scott Nevin
   Quiz Dialog implementation
   12/10/14
*/

#include <QtGui>
#include <QString>
#include <ctime>
#include <QMessageBox>
#include <QSignalMapper>

#include "mul.h"
#include "MainWindow.h"

//function prototypes
int genM();

MUL::MUL(QWidget *parent)
    : QDialog(parent){

    //generate numbers
    int gen_1=genM();
    int gen_2=genM();
    numAns = gen_1 * gen_2;
    //emit checkAnswer(numAns);

    //send to handler
   // handler(gen_1, gen_2, dummy);
    //dummy=false;

    //add Labels
    setWindowTitle("Questions");
    QString tmp = QString::number(gen_1);
    num_1 = new QLabel(tmp);
    operation = new QLabel("x");
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

void MUL::checkAnswer(){


    QString text = response->text();
    QString correct = QString::number(numAns);

    if(text==correct){
        QMessageBox::information(this, "Good Job!", "CORRECT!", QMessageBox::Ok);

    }
    else{
        QMessageBox::warning(this, "Try Again", "INCORRECT!", QMessageBox::Ok);
    }

}


int genM(){

    return rand()%90+10;
}

void MUL::nextQ(){

    MUL *subDialog = new MUL;
    subDialog->show();
    connect(next, SIGNAL(clicked()), this, SLOT(close()));

}


