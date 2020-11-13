#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions_double/ii.cpp"
/*
mm) Hacer una función en C++ que, dada una matriz M, use g) para generar un número entre 1 y 4, de
manera que:
    1. Al obtener un 1, use h) para obtener datos que sirvan de posición para ejecutar aa), pero
        en la variante generada en ii).
    2. Al obtener un 2, use h) para obtener datos que sirvan de posición para ejecutar bb), pero
        en la variante generada en ii).
    3. Al obtener un 3, use h) para obtener datos que sirvan de posición para ejecutar cc), pero
        en la variante generada en ii).
    4. Al obtener un 4, use h) para obtener datos que sirvan de posición para ejecutar dd), pero
        en la variante generada en ii).
*/

bool mmAux(int** array, int size, int myRandom){
    pair<int , int> data= generatorTwoRandom(0 , size - 1); 
    switch (myRandom){
        case 1:
            return iiaa(array, data.first, data.second, size);
        case 2:
            return iibb(array, data.first, data.second, size);
        case 3:
            return iicc(array, data.first, data.second, size);
        case 4:
            return iidd(array, data.first, data.second, size);
        default:
            return false;
    }
}

void mm(int** array, int size){
    int random1_4 = generatorRandom(1,4);
    mmAux(array,size,random1_4);
}

