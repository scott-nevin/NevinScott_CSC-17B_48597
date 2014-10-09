/*  Scott Nevin
    "The Age Application"
    Page 7
    Purpose: Allow user to input age by
             manipulating slider/spinbox
  */

//Libraries
#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

//Global variables and constants

//Function prototypes

//execution begins here
int main(int argc, char **argv){

    //Declare variables
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("Enter Your Age");
    QSpinBox *spinbox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);

    //set ranges
    spinbox->setRange(0,130);
    slider->setRange(0,130);

    //connect funcionality
    QObject::connect(spinbox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), spinbox, SLOT(setValue(int)));
    spinbox->setValue(35);

    //layout
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinbox);
    layout->addWidget(slider);
    window->setLayout(layout);

    //show window
    window->show();

    //exit stage right
    return app.exec();

}
