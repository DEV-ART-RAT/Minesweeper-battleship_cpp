#include "../tools/header.h"
#include "../tools/tools.h"

//z) Generalizar todo lo realizado en v), w), x) y y) en una sola función que sea capaz de soportar todos
//los casos

bool MatrixLeftStepValidation(int** array, int i, int size, int caso){
    return  A_MENOR_IGUAL_B(caso-1,i) ;
}
bool MatrixRightStepValidation(int** array, int i , int size, int caso){
    return  A_MENOR_B(i,size-caso-1) ;
}
bool MatrixDownStepValidation(int** array, int i, int size, int caso){
    return  A_MENOR_B(i,size-caso-1) ;
}
bool MatrixUpStepValidation(int** array, int i, int size, int caso){
    return  A_MENOR_IGUAL_B(caso-1,i) ;
}
bool z(int** array, int i, int j, int size, int caso){
    return  MatrixLeftStepValidation(array,j,size,caso) && MatrixRightStepValidation(array,j,size,caso) 
    && MatrixUpStepValidation(array,i,size,caso) && MatrixDownStepValidation(array,i,size,caso);
}