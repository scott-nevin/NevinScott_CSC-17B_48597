/* Scott Nevin
   Main Window implementation
   12/10/14
*/

#include <QtGui>

#include "MainWindow.h"
#include "QuizDialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent){

    int num;
    //char a=1, b=2, c=3, d=4;

    //declare quiz dialog
    QuizDialog *subDialog = new QuizDialog;


    //add Labels
    setWindowTitle("Math Tutor");
    title = new QLabel("<h2><i>Welcome to Math Tutor!</i>");
    prompt = new QLabel("Please select a category to begin answering questions!");
    numDig = new QLabel("Select Number of Digits:");
    digits = new QLabel("digit numbers");

    //add buttons
    addition = new QPushButton("Addition");
    subtraction = new QPushButton("Subtraction");
    multiplication = new QPushButton("Multiplication");
    division = new QPushButton("Division");
    closeButton = new QPushButton("Quit");

    //add spinboxes
    spinbox = new QSpinBox;
    spinbox->setRange(1,5);
    spinbox->setValue(2);

    //connect spinboxes
    label = new QLabel("2");
    connect(spinbox, SIGNAL(valueChanged(QString)), label, SLOT(setText(QString)));
    //connect(spinbox, SIGNAL(valueChanged(int)), subDialog, SLOT(setDig(int)));
    num = spinbox->value();

    //connect buttons
    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(addition, SIGNAL(clicked()), subDialog,SLOT(show()));
    //connect(addition, SIGNAL(clicked()), subDialog, SLOT(setDig()));

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

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(numDig);
    rightLayout->addWidget(spinbox);

    QHBoxLayout *newLayout = new QHBoxLayout;
    newLayout->addWidget(label);
    newLayout->addWidget(digits);
    newLayout->addStretch();

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(layout);
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    mainLayout->addLayout(newLayout);
    mainLayout->addWidget(closeButton);
    setLayout(mainLayout);

};
