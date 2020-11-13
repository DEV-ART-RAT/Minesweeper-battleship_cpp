#include "../tools/header.h"
#include "../tools/tools.h"

//jj) Generalizar todo lo realizado en ff), gg), hh) y ii) en una sola función que sea capaz de soportar
//todos los casos.

bool jjaa(int** array, int i, int j, int size, int Ncase){
    if (A_MENOR_IGUAL_B(Ncase,j)){
        for(int k = 0; k <= Ncase; k++){
            array[i][j]=1;
            array[i][j-k]=1;
        }
        return true;
    }
    return false;
}

bool jjbb(int** array, int i, int j, int size, int Ncase){
    if (A_MENOR_B(j,size - Ncase)){
        for(int k = 0; k<= Ncase; k++){
            array[i][j]=1;
            array[i][j+k]=1;
        }
        return true;
    }
    return false;
}

bool jjcc(int** array, int i, int j, int size, int Ncase){
    if (A_MENOR_B(i,size - Ncase)){
        for(int k = 0; k<= Ncase; k++){
            array[i][j]=1;
            array[i+k][j]=1;
        }
        return true;
    }
    return false;
}

bool jjdd(int** array, int i, int j, int size, int Ncase){
    if (A_MENOR_IGUAL_B(Ncase,i)){
        for(int k = 0; k<= Ncase; k++){
            array[i][j]=1;
            array[i-k][j]=1;
        }
        return true;
    }
    return false;
}

bool ee(int** array, int i, int j, int size, int Ncase){
    return  jjaa(array,i,j,size,Ncase) && jjbb(array,i,j,size,Ncase)
    && jjdd(array,i,j,size,Ncase) && jjcc(array,i, j ,size,Ncase);
}