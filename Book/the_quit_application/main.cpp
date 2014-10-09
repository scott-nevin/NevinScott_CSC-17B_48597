/*  Scott Nevin
    "The Quit Application"
    Page 6
    Purpose: Read a user's click
  */

//Libraries
#include <QApplication>
#include <QPushButton>

//Global variables and constants

//Function prototypes

//execution begins here
int main(int argc, char **argv){

    //Declare variables
    QApplication app(argc, argv);
    QPushButton *button = new QPushButton("Quit");
    QObject::connect(button, SIGNAL(clicked()),
            &app, SLOT(quit()));

    //show widget
    button->show();

    //exit stage right
    return app.exec();

}
