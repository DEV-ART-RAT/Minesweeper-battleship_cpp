#include "../tools/header.h"
#include "../tools/tools.h"
/*
nn) Hacer una función en C++ que, dada una matriz M y una posición en la matriz, chequee si dicha
posición tiene un 1.
*/
// valida si hay un 1 en la pos
bool haveOne(int** array,int i, int j, int size){
    return array[i][j]==1 ;
}

