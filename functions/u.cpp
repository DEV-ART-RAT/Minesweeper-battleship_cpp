#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions/q.cpp"
#include "../functions/r.cpp"
#include "../functions/s.cpp"
#include "../functions/t.cpp"

//u) Fusionar los casos q), r), s) y t) en una sola función.
//funcion con pociciones i , j 
bool u(int** array, int i, int j, int size){
    return  MatrixLeftStepValidation(array,j,size) && MatrixRightStepValidation(array,j,size) 
    && MatrixUpStepValidation(array,i,size) && MatrixDownStepValidation(array,i,size);
}