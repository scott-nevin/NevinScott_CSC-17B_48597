/*
 * Scott Nevin
 * August 27th, 2014
 * Purpose: Hello World GUI
*/

//Libraries
#include <QApplication>
#include <QLabel>

//function prototypes

//Execution Begins Here
int main(int argc, char **argv){

    QApplication app(argc, argv);
    QLabel *label = new QLabel("\n  Hello World!\n");
    //label->show();
    (*label).show();
    return app.exec();
}


