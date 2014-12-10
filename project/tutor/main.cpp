/*  Scott Nevin
    Personal Project
    Math Tutor Program
*/

//Libraries
#include <QApplication>

#include "MainWindow.h"


//Global Variables and constants

//Function prototypes

//Execution begins here
int main(int argc, char *argv[]){

    //Create App
    QApplication app(argc,argv);
    MainWindow *dialog = new MainWindow;

    //Send to window
    dialog->show();

    //exit stage right
    return app.exec();

}




