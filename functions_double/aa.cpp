#include "../tools/header.h"
#include "../tools/head.h"
#include "../tools/tools.h"
//aa) Hacer una función en C++ que dada una matriz int y una posición en la matriz, coloque un 1 en la
//celda dada y en la celda a su izquierda.

//coloca 1 en la posicion y la izquierda
bool aa(int** array, int i, int j, int size){
    if (i >= 1){
        array[i][j]=1;
        array[i][j-1]=1;
        return true;
    }
    return false;
}