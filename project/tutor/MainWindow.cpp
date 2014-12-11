/* Scott Nevin
   Main Window implementation
   12/10/14
*/

#include <QtGui>
#include <ctime>

#include "MainWindow.h"
#include "QuizDialog.h"
#include "sub.h"
#include "mul.h"
#include "div.h"


MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent){

    //seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    int num;
    //char a=1, b=2, c=3, d=4;

    //declare quiz dialog
    QuizDialog *addDialog = new QuizDialog;
    SUB *subDialog = new SUB;
    MUL *mulDialog = new MUL;
    DIV *divDialog = new DIV;


    //add Labels
    setWindowTitle("Math Tutor");
    title = new QLabel("<h2><i>Welcome to Math Tutor!</i>");
    prompt = new QLabel("Please select a category to begin answering questions!");

    //add buttons
    addition = new QPushButton("Addition");
    subtraction = new QPushButton("Subtraction");
    multiplication = new QPushButton("Multiplication");
    division = new QPushButton("Division");
    closeButton = new QPushButton("Quit");

    //connect buttons
    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(addition, SIGNAL(clicked()), addDialog,SLOT(show()));
    connect(subtraction, SIGNAL(clicked()), subDialog,SLOT(show()));
    connect(multiplication, SIGNAL(clicked()), mulDialog,SLOT(show()));
    connect(division, SIGNAL(clicked()), divDialog,SLOT(show()));

    //print number as label
    //QString tmp = QString::number(num);
    //QLabel *label = new QLabel(num);

    //layout
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(title);
    layout->addWidget(prompt);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addWidget(addition);
    leftLayout->addWidget(subtraction);
    leftLayout->addWidget(multiplication);
    leftLayout->addWidget(division);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(layout);
    mainLayout->addLayout(leftLayout);
    mainLayout->addWidget(closeButton);
    setLayout(mainLayout);

};

