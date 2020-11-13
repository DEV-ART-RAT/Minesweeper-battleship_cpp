#include "../tools/header.h"
#include "../tools/tools.h"

//w) Modificar los casos q), r), s) y t) para que, en lugar de checar una celda en la dirección indicada,
//chequee si es posible avanzar 3 celdas en dicha dirección.


bool MatrixLeftThreeStepValidation(int** array, int i, int size){
    return  i >= 2 ;
}

bool MatrixRightThreeStepValidation(int** array, int i , int size){
    return  i < size -2 ;
}

bool MatrixDownThreeStepValidation(int** array, int i, int size){
    return  i < size -2 ;
}

bool MatrixUpThreeStepValidation(int** array, int i, int size){
    return  i >= 2 ;
}