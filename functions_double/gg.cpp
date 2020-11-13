#include "../tools/header.h"
#include "../tools/tools.h"
//gg) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 3 celdas en la
//dirección indicada.


bool ggaa(int** array, int i, int j, int size){
    int flag = 3;
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

bool ggbb(int** array, int i, int j, int size){
    int flag = 3;
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

bool ggcc(int** array, int i, int j, int size){
    int flag = 3;
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

bool ggdd(int** array, int i, int j, int size){
    int flag = 3;
    if (i >= flag){
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