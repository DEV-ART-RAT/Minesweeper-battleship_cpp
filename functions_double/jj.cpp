#include "../tools/header.h"
#include "../tools/tools.h"

//jj) Generalizar todo lo realizado en ff), gg), hh) y ii) en una sola función que sea capaz de soportar
//todos los casos.

bool jjaa(int** array, int i, int j, int size, int numberCase){
    if (j >= numberCase){
        for(int k = 0; k <= numberCase; k++){
            array[i][j]=1;
            array[i][j-k]=1;
        }
        return true;
    }
    return false;
}

bool jjbb(int** array, int i, int j, int size, int numberCase){
    if (j < size - numberCase){
        for(int k = 0; k<= numberCase; k++){
            array[i][j]=1;
            array[i][j+k]=1;
        }
        return true;
    }
    return false;
}

bool jjcc(int** array, int i, int j, int size, int numberCase){
    if (i < size - numberCase){
        for(int k = 0; k<= numberCase; k++){
            array[i][j]=1;
            array[i+k][j]=1;
        }
        return true;
    }
    return false;
}

bool jjdd(int** array, int i, int j, int size, int numberCase){
    if (i >= numberCase){
        for(int k = 0; k<= numberCase; k++){
            array[i][j]=1;
            array[i-k][j]=1;
        }
        return true;
    }
    return false;
}

bool ee(int** array, int i, int j, int size, int numberCase){
    return  jjaa(array,i,j,size,numberCase) && jjbb(array,i,j,size,numberCase)
    && jjdd(array,i,j,size,numberCase) && jjcc(array,i, j ,size,numberCase);
}