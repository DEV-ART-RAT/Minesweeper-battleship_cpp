#include "../tools/header.h"
#include "../tools/tools.h"

//ff) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 2 celdas en la
//dirección indicada.

//izquierda
bool ffaa(int** array, int i, int j, int size){
    int step = 2;
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
bool ffbb(int** array, int i, int j, int size){
    int step = 2;
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

// abajo
bool ffcc(int** array, int i, int j, int size){
    int step = 2;
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
bool ffdd(int** array, int i, int j, int size){
    int step = 2;
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


//menu de ff
void ff(int** array, int i, int j, int size,char move){
    switch (move) {
        case 'u':
            ffdd(array,i,j,size);
            break;
        case 'd':
            ffcc(array,i,j,size);
            break;
        case 'l':
            ffaa(array,i,j,size);
            break;
        case 'r':
            ffbb(array,i,j,size);
            break;
    }
}