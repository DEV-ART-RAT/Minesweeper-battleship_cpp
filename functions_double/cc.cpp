#include "../tools/header.h"
#include "../tools/head.h"
#include "../tools/tools.h"
//cc) Modifique aa) para que coloque los 1 en la celda dada y en la de abajo.

//coloca 1 en la posicion y abajo
bool cc(int** array, int i, int j, int size){
    if (A_MENOR_IGUAL_B(i,SIZEONE(size))){
        array[i][j]=1;
        array[i+1][j]=1;
        return true;
    }
    return false;
}
