#include "../tools/header.h"
#include "../tools/tools.h"
//gg) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 3 celdas en la
//dirección indicada.


bool ggaa(int** array, int i, int j, int size){
    int flag = 3;
    if (j >= flag){
        //*
        for(int k = 0; k <= flag; k++){
            if(array[i][j-k]==1){
                //cout<<"ggleftF";
                return false;     //agreagdo para no sobreescribir UNOS (estetica)
            }
        }//*/
        for(int k = 0; k <= flag; k++){
            array[i][j-k]=1;
        }
        //cout<<"\nggL->"<<"i:"<<i<<" j:"<<j;
        return true;
    }
    return false;
}

bool ggbb(int** array, int i, int j, int size){
    int flag = 3;
    if (j < size - flag){
        //*
        for(int k = 0; k <= flag; k++){
            if(array[i][j+k]==1){
                //cout<<"ggRF";
                return false;     //agreagdo para no sobreescribir UNOS (estetica)
            }
        }//*/
        for(int k = 0; k <= flag; k++){
            array[i][j+k]=1;
        }
        //cout<<"\nggR->"<<"i:"<<i<<" j:"<<j;
        return true;
    }
    return false;
}

bool ggcc(int** array, int i, int j, int size){
    int flag = 3;
    if (i < size - flag){
        //*
        for(int k = 0; k <= flag; k++){
            if(array[i+k][j]==1){
                //cout<<"ggDF";
                return false;     //agreagdo para no sobreescribir UNOS (estetica)
            }
        }//*/
        for(int k = 0; k <= flag; k++){
            array[i+k][j]=1;
        }
        //cout<<"\nggD->"<<"i:"<<i<<" j:"<<j;
        return true;
    }
    return false;
}

bool ggdd(int** array, int i, int j, int size){
    int flag = 3;
    if (i >= flag){
        //*
        for(int k = 0; k <= flag; k++){
            if(array[i-k][j]==1){
                //cout<<"ggUF";
                return false;     //agreagdo para no sobreescribir UNOS (estetica)
            }
        }//*/
        for(int k = 0; k <= flag; k++){
            array[i-k][j]=1;
        }
        //cout<<"\nggU->"<<"i:"<<i<<" j:"<<j;
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