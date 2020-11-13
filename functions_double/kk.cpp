#include <iostream>
#include "../functions/g.cpp"
#include "../functions/h.cpp"
#include "../functions_double/ff.cpp"
#pragma once

using namespace std;
/*
kk) Hacer una función en C++ que, dada una matriz M, use g) para generar un número entre 1 y 4, de
manera que:
    1. Al obtener un 1, use h) para obtener datos que sirvan de posición para ejecutar aa), pero
        en la variante generada en ff).
    2. Al obtener un 2, use h) para obtener datos que sirvan de posición para ejecutar bb), pero
        en la variante generada en ff).
    3. Al obtener un 3, use h) para obtener datos que sirvan de posición para ejecutar cc), pero
        en la variante generada en ff).
    4. Al obtener un 4, use h) para obtener datos que sirvan de posición para ejecutar dd), pero
        en la variante generada en ff).
*/
bool kkAux(int** , int , int );

void kk(int** array, int size){
    //random entre 1 y 4
    int random1_4 = generatorRandom(1,4); 
    kkAux(array,size,random1_4);
}

bool kkAux(int** array, int size, int myRandom){
    pair<int , int> data= generatorTwoRandom(0 , size - 1);
    switch (myRandom){
        case 1:
            return ffaa(array, data.first, data.second, size);
        case 2:
            return ffbb(array, data.first, data.second, size);
        case 3:
            return ffcc(array, data.first, data.second, size);
        case 4:
            return ffdd(array, data.first, data.second, size);
        default:
            return false;
    }
}
