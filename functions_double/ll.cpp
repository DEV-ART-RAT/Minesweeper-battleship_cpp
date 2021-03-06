#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions_double/gg.cpp"
/*
ll) Hacer una función en C++ que, dada una matriz M, use g) para generar un número entre 1 y 4, de
manera que:
    1. Al obtener un 1, use h) para obtener datos que sirvan de posición para ejecutar aa), pero
        en la variante generada en gg).
    2. Al obtener un 2, use h) para obtener datos que sirvan de posición para ejecutar bb), pero
        en la variante generada en gg).
    3. Al obtener un 3, use h) para obtener datos que sirvan de posición para ejecutar cc), pero
        en la variante generada en gg).
    4. Al obtener un 4, use h) para obtener datos que sirvan de posición para ejecutar dd), pero
        en la variante generada en gg).
*/

bool llAux(int** array, int size,int rando){
    pair<int , int> randomGeneratePair= generatorTwoRandom(0 , SIZEONE(size));

    switch (rando){
        case 1:
            return ggaa(array, randomGeneratePair.first, randomGeneratePair.second, size);
        case 2:
            return ggbb(array, randomGeneratePair.first, randomGeneratePair.second, size);
        case 3:
            return ggcc(array, randomGeneratePair.first, randomGeneratePair.second, size);
        case 4:
            return ggdd(array, randomGeneratePair.first, randomGeneratePair.second, size);
        default:
            return false;
    }
}

void ll(int** array, int size){
    int random1_4 = generatorRandom(1,4);
    llAux(array,size,random1_4);
}

