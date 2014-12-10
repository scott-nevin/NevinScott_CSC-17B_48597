/*  Scott Nevin
    Program 1
    Page 3
    Purpose: Hello World Program
*/

//Libraries
#include <QApplication>
#include <QLabel>
#include <QSlider>
#include <QSpinBox>
#include <QPushButton>
#include <QtGui>
#include <QFrame>
#include <QBoxLayout>
#include <QString>
#include <QObject>


//Global Variables and constants

//Function prototypes

//Execution begins here
int main(int argc, char **argv){

    //int num = 10;

    //Declare variables
    QApplication app(argc, argv);
    QWidget *window = new QWidget;

    //add titles
    window->setWindowTitle("Math Tutor");
    QLabel *title = new QLabel("<h2><i>Welcome to Math Tutor!</i>");
    QLabel *prompt = new QLabel("Please select a category to begin answering questions!");

    //add buttons
    QPushButton *addition = new QPushButton("Addition");
    QPushButton *subtraction = new QPushButton("Subtraction");
    QPushButton *multiplication = new QPushButton("Multiplication");
    QPushButton *division = new QPushButton("Division");
    QPushButton *closeButton = new QPushButton("Quit");

    //add spinboxes
    QSpinBox *spinbox = new QSpinBox;
    spinbox->setRange(1,5);

    //connect buttons
    QObject::connect(closeButton, SIGNAL(clicked()), &app, SLOT(quit()));

    //connect spinboxes
    QObject::connect(spinbox, SIGNAL(valueChanged(int)), &app, SLOT(value()));
    int num = spinbox->value();
    //print number as label
    QString tmp = QString::number(num);
    QLabel *label = new QLabel(tmp);

    //print number as label
    //QString tmp = QString::number(num);
    //QLabel *label = new QLabel(num);

    //layout
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(title);
    layout->addWidget(prompt);
    layout->addWidget(addition);
    layout->addWidget(subtraction);
    layout->addWidget(multiplication);
    layout->addWidget(division);
    layout->addWidget(spinbox);
    layout->addWidget(label);
    layout->addWidget(closeButton);
    window->setLayout(layout);
    window->show();

    //exit stage right
    return app.exec();
}

