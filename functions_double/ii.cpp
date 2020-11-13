#include "../tools/header.h"
#include "../tools/tools.h"

//ii) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 5 celdas en la
//dirección indicada.

bool iiaa(int** array, int i, int j, int size){
    int flag = 5;
    if (j >= flag){
        //*
        for(int k = 0; k <= flag; k++){
            if(array[i][j-k]==1){
                //cout<<"iileftF";
                return false;     //agreagdo para no sobreescribir UNOS (estetica)
            }
        }//*/
        for(int k = 0; k <= flag; k++){
            array[i][j-k]=1;
        }
        //cout<<"\n iiL->"<<"i:"<<i<<" j:"<<j;
        return true;
    }
    return false;
}

bool iibb(int** array, int i, int j, int size){
    int flag = 5;
    if (j < size - flag){
        //*
        for(int k = 0; k <= flag; k++){
            if(array[i][j+k]==1){
                //cout<<"iiRigF";
                return false;     //agreagdo para no sobreescribir UNOS (estetica)
            }
        }//*/
        for(int k = 0; k <= flag; k++){
            array[i][j+k]=1;
        }
        //cout<<"\n iiR->"<<"i:"<<i<<" j:"<<j;
        return true;
    }
    return false;
}

bool iicc(int** array, int i, int j, int size){
    int flag = 5;
    if (i < size - flag){
        //*
        for(int k = 0; k <= flag; k++){
            if(array[i+k][j]==1){
                //cout<<"iiDowF";
                return false;     //agreagdo para no sobreescribir UNOS (estetica)
            }
        }//*/
        for(int k = 0; k <= flag; k++){
            array[i+k][j]=1;
        }
        //cout<<"\n iiD->"<<"i:"<<i<<" j:"<<j;
        return true;
    }
    return false;
}

bool iidd(int** array, int i, int j, int size){
    int flag = 5;
    if (i >= flag){
        //*
        for(int k = 0; k <= flag; k++){
            if(array[i-k][j]==1){
                //cout<<"iiUpF";
                return false;     //agreagdo para no sobreescribir UNOS (estetica)
            }
        }//*/
        for(int k = 0; k <= flag; k++){
            array[i-k][j]=1;
        }
        //cout<<"\n iiU->"<<"i:"<<i<<" j:"<<j;
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