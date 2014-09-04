#include "array2d.h"

array2D::array2D(int r, int c){

    //set size of array
    nRows = r;
    nCols = c;

    //create temporary 2D array
    int** tempArray = new int*[nRows];

    //Create individual arrays
    for(int i=0;i<nCols;i++){
        tempArray[i]=getArray(nCols);
    }

    //set array equal to temp array
    array = tempArray;

}

array2D::~array2D(){

    for(int i=0;i<nCols;i++){

        delete [] array[i];
    }
    delete [] array;
}

char * array2D::toString(){

    std::stringstream thing;
    for(int i=0;i<nRows;i++){
        for(int j=0;j<nCols;j++){
            thing<<array[i][j]<<"    ";
        }
        thing<<"\n\n";
    }

    int size = thing.str().length()+1;
    char* output = new char[size];
    for(int i=0;i<size;i++){
        output[i] = thing.str()[i];
    }
    return output;
}

int array2D::getNum(){

    //generate random number
    return rand()%90+10;
}

int * array2D::getArray(int c){

    //Declare variables
    int *temp = new int[c];

    //populate arrays
    for(int i=0;i<c;i++){
        temp[i]=getNum();
    }

    return temp;
}
