#include "../tools/header.h"
#include "../tools/tools.h"

//ii) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 5 celdas en la
//dirección indicada.

bool iiaa(int** array, int i, int j, int size){
    int step = 5;
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

bool iibb(int** array, int i, int j, int size){
    int step = 5;
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

bool iicc(int** array, int i, int j, int size){
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

bool iidd(int** array, int i, int j, int size){
    int step = 5;
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
void ii(int** array, int i, int j, int size,char move){
    switch (move) {
        case 'u':
            iidd(array,i,j,size);
            break;
        case 'd':
            iicc(array,i,j,size);
            break;
        case 'l':
            iiaa(array,i,j,size);
            break;
        case 'r':
            iibb(array,i,j,size);
            break;
    }
}