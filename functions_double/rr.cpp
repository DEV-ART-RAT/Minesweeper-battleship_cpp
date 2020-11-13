#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions/e.cpp"
#include "../functions_double/nn.cpp"
#include "../functions_double/ss.cpp"

/*
rr) Modifique qq) para que al final imprima en pantalla el valor de P.
*/

void rr(int** M, char** N, int& P, int& C, int n){
    pair<int , int> data;
    int flag = 17;
    
    while (C < flag){
        cout<< (17 - C) <<" Restantes ."<<endl;
        data = e(1 , n); 
        data.first--;
        data.second--;
        if(haveOne(M,data.first, data.second, n)){
            P += 100;
            C++;
            N[data.first][data.second] = 'x';
        }else{
            P -= 100;
            N[data.first][data.second] = 'O';
        }
        ss(N, n);
    cout<<"Puntaje: "<<P<<endl;
    }

}

