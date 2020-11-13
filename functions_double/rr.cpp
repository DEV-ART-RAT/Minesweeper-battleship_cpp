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
    int flag = 17;//se cambio el 13 para adatar el total de 1
    
    while (C < flag){
        cout<< (17 - C) <<" Restantes ."<<endl;
        data = e(1 , n); // usando e para obtener i, j
        data.first--;
        data.second--;
        if(haveOne(M,data.first, data.second, n)){
            P += 100;
            C++;
            N[data.first][data.second] = 'x';
        }else{
            P -= 100;
            N[data.first][data.second] = 'F';//se agrega por estetica (no lo mensionaba el ejercicio);
        }
        ss(N, n);//agreagdo por estetica, considerado en el acoplamiento
    cout<<"Puntaje: "<<P<<endl;
    }
    //cout<<"valor de P: "<<P<<endl;

}

