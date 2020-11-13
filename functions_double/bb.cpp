#include "../tools/header.h"
#include "../tools/head.h"
#include "../tools/tools.h"
//bb) Modifique aa) para que coloque los 1 en la celda dada y en la de su derecha.

//coloca 1 en la posicion y derecha
bool bb(int** array, int i, int j, int size){
    if (A_MENOR_IGUAL_B(i,SIZEONE(size))){
        array[i][j]=1;
        array[i][j+1]=1;
        return true;
    }
    return false;
}
