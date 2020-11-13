#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions/e.cpp"
#include "../functions_double/nn.cpp"

/*
oo) Hacer una función en C++ que reciba, por referencia, un entero P, un entero C y una matriz M
        cuadrada junto con su longitud n. 
    La función debe usar e) para obtener datos que sirvan de
        posición para poder utilizar nn). Si el resultado es positivo, debe aumentar P en 100, y aumentar
        C en 1.  
    Si el resultado es negativo, debe restarle 100 al valor de P.
*/

void oo(int** M,int& P, int& C, int n){
    pair<int , int> data= e(0 , n - 1);
    if(haveOne(M,data.first, data.second, n)){
        P += 100;
        C++;
    }else
    {
        P -= 100;
    }

}

