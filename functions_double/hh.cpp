#include "../tools/header.h"
#include "../tools/tools.h"
//hh) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 4 celdas en la
//dirección indicada.

//izquierda
bool hhaa(int** array, int i, int j, int size){
    int step = 4;
    if (A_MENOR_IGUAL_B(step,j)){
        for(int stepCount = 0; stepCount <= step; stepCount++)
            if(array[i][j-stepCount]==1)
                return false;     
        for(int stepCount = 0; stepCount <= step; stepCount++)
            array[i][j-stepCount]=1;
        return true;
    }
    return false;
}
//derecha
bool hhbb(int** array, int i, int j, int size){
    int step = 4;
    if (A_MENOR_B(j,size-step)){
        for(int stepCount = 0; stepCount <= step; stepCount++)
            if(array[i][j+stepCount]==1)
                return false;   
        for(int stepCount = 0; stepCount <= step; stepCount++)
            array[i][j+stepCount]=1;
        return true;
    }
    return false;
}
//abajo
bool hhcc(int** array, int i, int j, int size){
   int step = 4;
    if (A_MENOR_B(i,size-step)){
        for(int stepCount = 0; stepCount <= step; stepCount++)
            if(array[i+stepCount][j]==1)
                return false;    
        for(int stepCount = 0; stepCount <= step; stepCount++)
            array[i+stepCount][j]=1;
        return true;
    }
    return false;
}
//arriba
bool hhdd(int** array, int i, int j, int size){
   int step = 4;
    if (A_MENOR_IGUAL_B(step,i)){
        for(int stepCount = 0; stepCount <= step; stepCount++)
            if(array[i-stepCount][j]==1)
                return false;    
        for(int stepCount = 0; stepCount <= step; stepCount++)
            array[i-stepCount][j]=1;
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