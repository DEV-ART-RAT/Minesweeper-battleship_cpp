#include "../tools/header.h"
#include "../tools/tools.h"
//hh) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 4 celdas en la
//dirección indicada.


bool hhaa(int** array, int i, int j, int size){
    int flag = 4;
    if (j >= flag){
        for(int k = 0; k <= flag; k++){
            array[i][j]=1;
            array[i][j-k]=1;
        }
        return true;
    }
    return false;
}

bool hhbb(int** array, int i, int j, int size){
    int flag = 4;
    if (j < size - flag){
        for(int k = 0; k<= flag; k++){
            array[i][j]=1;
            array[i][j+k]=1;
        }
        return true;
    }
    return false;
}

bool hhcc(int** array, int i, int j, int size){
    int flag = 4;
    if (i < size - flag){
        for(int k = 0; k<= flag; k++){
            array[i][j]=1;
            array[i+k][j]=1;
        }
        return true;
    }
    return false;
}

bool hhdd(int** array, int i, int j, int size){
    int flag = 4;
    if (i >= flag){
        for(int k = 0; k<= flag; k++){
            array[i][j]=1;
            array[i-k][j]=1;
        }
        return true;
    }
    return false;
}

void hh(int** array, int i, int j, int size,char move){
    switch (move) {
        case 'u':
            hhdd(array,i,j,size);
            break;
        case 'd':
            hhcc(array,i,j,size);
            break;
        case 'l':
            hhaa(array,i,j,size);
            break;
        case 'r':
            hhbb(array,i,j,size);
            break;
    }
}