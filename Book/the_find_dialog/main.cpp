/*  Scott Nevin
    "The Find Dialog"
    Page 14-20
    Purpose: Open search dialog for user
  */

//Libraries
#include <QApplication>
#include "finddialog.h"

//Global variables and constants

//function prototypes

//begin execution here
int main(int argc, char **argv){

    //Declare Variables
    QApplication app(argc, argv);
    FindDialog *dialog = new FindDialog;
    dialog->show();

    //exit stage right
    return app.exec();

}
