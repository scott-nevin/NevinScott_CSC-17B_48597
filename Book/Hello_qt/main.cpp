/*  Scott Nevin
    Program 1
    Page 3
    Purpose: Hello World Program
*/

//Libraries
#include <QApplication>
#include <QLabel>

//Global Variables and constants

//Function prototypes

//Execution begins here
int main(int argc, char **argv){

    //Declare variables
    QApplication app(argc, argv);
    QLabel *label = new QLabel("<h2><i>Hello</i>""<font color=red> Qt!</font></h2>");
    label->show();
    //exit stage right
    return app.exec();
}



