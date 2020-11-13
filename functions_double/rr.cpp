#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions/e.cpp"
#include "../functions_double/nn.cpp"
#include "../functions_double/ss.cpp"

/*
rr) Modifique qq) para que al final imprima en pantalla el valor de P.
*/

void rr(int** M, char** N, int& P, int& C, int n){
    pair<int , int> PairData;
    int flag = 10;
    while (C < flag){
        cout<< (flag-C) <<" Restantes :"<<endl;
        PairData = e(1 , n); 
        PairData.first--;
        PairData.second--;
        if(haveOne(M,PairData.first, PairData.second, n)){
            P += 100;
            C++;
            N[PairData.first][PairData.second] = 'x';
        }else{
            P -= 100;
            N[PairData.first][PairData.second] = 'O';
        }
        ss(N, n);
    cout<<"Su puntaje es : "<<P<<endl;
    }

}

