#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions/e.cpp"
#include "../functions_double/nn.cpp"
/*
qq) Haga una función que realice el proceso de pp) en un loop, deteniéndose hasta que el valor de C
sea igual a 13.

*/

void qqFuntion(int** M,char** N,int& P, int& C, int n){
    pair<int , int> PairData;
    
    while (C < 13)
    {
        PairData = e(0 , n - 1); 
        if(haveOne(M,PairData.first, PairData.second, n)){
            P += 100;
            C++;
            N[PairData.first][PairData.second] = 'x';
        }else
        {
            P -= 100;
        }  
    }
    

}

