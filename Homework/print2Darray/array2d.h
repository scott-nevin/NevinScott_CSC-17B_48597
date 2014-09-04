#ifndef ARRAY2D_H
#define ARRAY2D_H

#include <cstdlib>
#include <sstream>

class array2D{

private:
    int nRows;
    int nCols;
    int **array;

public:
    array2D(int, int);
    ~array2D();
    char * toString();
    int getNum();
    int * getArray(int);

};

#endif // ARRAY2D_H
