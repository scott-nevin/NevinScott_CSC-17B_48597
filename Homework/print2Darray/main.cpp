/*
    Scott Nevin
    09/04/14
    print2Darray
    Purpose: Print 2D array using classes and labels
*/

//Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <QApplication>
#include <QLabel>
using namespace std;

//user Libraries
#include "array2d.h"

//Global variables and constants

//Function Prototypes

//Execution begins here
int main(int argc, char **argv){

    //seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    //Declare variables
    int rows=10, cols=10;
    array2D myArray = array2D(rows, cols);

    //Print to label
    QApplication app(argc, argv);
    QLabel *label = new QLabel(myArray.toString());
    //label->show();
    (*label).show();
    return app.exec();

    return 0;
}

