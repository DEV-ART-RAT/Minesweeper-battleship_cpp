#include "../tools/header.h"
#include "../tools/tools.h"
//gg) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 3 celdas en la
//dirección indicada.

//izquierda
bool ggaa(int** array, int i, int j, int size){
    int step = 3;
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
bool ggbb(int** array, int i, int j, int size){
    int step = 3;
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
bool ggcc(int** array, int i, int j, int size){
  int step = 3;
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
bool ggdd(int** array, int i, int j, int size){
     int step = 3;
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

void gg(int** array, int i, int j, int size,char move){
    switch (move) {
        case 'u':
            ggdd(array,i,j,size);
            break;
        case 'd':
            ggcc(array,i,j,size);
            break;
        case 'l':
            ggaa(array,i,j,size);
            break;
        case 'r':
            ggbb(array,i,j,size);
            break;
    }
}