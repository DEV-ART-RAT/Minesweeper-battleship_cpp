#include "../tools/header.h"
#include "../tools/tools.h"
//v) Modificar los casos q), r), s) y t) para que, en lugar de checar una celda en la dirección indicada,
//chequee si es posible avanzar 2 celdas en dicha dirección.

bool MatrixLeftTwoStepValidation(int** array, int i, int size){
    return  i >= 1 ;
}

bool MatrixRightTwoStepValidation(int** array, int i , int size){
    return  i < size -1 ;
}

bool MatrixDownTwoStepValidation(int** array, int i, int size){
    return  i < size -1 ;
}

bool MatrixUpTwoStepValidation(int** array, int i, int size){
    return  i >= 1 ;
}
/* Invento
 * template <typename T>
bool MatrixTwoPos(T matrix, int posR,int posC,char pos){
    posR,posC-=1;
    int moves=2;
    int Right=posC+moves,Left=posC-moves,Up=posR-moves,Down=posR+moves,Mcols,Mrow,MaxCol,MaxRow;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);Mrow=sizeof(matrix[0]);
     MaxCol=Mcols-1;
    MaxRow=Mrow-1;
    //left ; right ; Down ; Up
    switch (pos)
    {
    case 'a':
        return (Left<0||Right>MaxCol || Down>MaxRow || Up<0)?false:true;
        break;
    case 'l':
        return((Left<0)?false:true);
    case 'r':
        return((Right>MaxCol)?false:true);
    case 'd':
        return((Down>MaxRow)?false:true);
    case 'u':
        return((Up<0)?false:true);

    default:
        return false;
        break;
    }
}
 */