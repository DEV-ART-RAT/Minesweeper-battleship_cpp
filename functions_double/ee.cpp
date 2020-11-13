#include "../tools/header.h"
#include "../tools/head.h"
#include "../tools/tools.h"
#include "../functions_double/aa.cpp"
#include "../functions_double/bb.cpp"
#include "../functions_double/cc.cpp"
#include "../functions_double/dd.cpp"
//ee) Fusionar los casos aa), bb), cc) y dd) en una sola función.

// returna verdadero si se cumplen todos
bool ee(int** array, int i, int j, int size){
    return  aa(array,i,j,size) && bb(array,i,j,size) 
    && dd(array,i,j,size) && cc(array,i, j ,size);
}