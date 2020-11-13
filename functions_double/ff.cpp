#include "../tools/header.h"
#include "../tools/tools.h"

//ff) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 2 celdas en la
//dirección indicada.

//izquierda
bool ffaa(int** array, int i, int j, int size){
    int flag = 2;
    if (j >= flag){
        for(int k = 0; k <= flag; k++){
            if(array[i][j-k]==1){
                return false;     
            }
        }
        for(int k = 0; k <= flag; k++){
            array[i][j-k]=1;
        }
        return true;
    }
    return false;
}

//derecha
bool ffbb(int** array, int i, int j, int size){
    int flag = 2;
    if (j < size - flag){
        for(int k = 0; k <= flag; k++){
            if(array[i][j+k]==1){
                return false;   
            }
        }
        for(int k = 0; k <= flag; k++){
            array[i][j+k]=1;
        }
        return true;
    }
    return false;
}

// abajo
bool ffcc(int** array, int i, int j, int size){
    int flag = 2;
    if (i < size - flag){
        for(int k = 0; k <= flag; k++){
            if(array[i+k][j]==1){
                return false;    
            }
        }
        for(int k = 0; k <= flag; k++){
            array[i+k][j]=1;
        }
        return true;
    }
    return false;
}
//arriba
bool ffdd(int** array, int i, int j, int size){
    int flag = 2;
    if (i >= flag){//*
        for(int k = 0; k <= flag; k++){
            if(array[i-k][j]==1){
                return false;    
            }
        }
        for(int k = 0; k <= flag; k++){
            array[i-k][j]=1;
        }
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