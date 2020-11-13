#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions/e.cpp"
#include "../functions_double/nn.cpp"
/*
pp) Modifique oo) para que se reciba una segunda matriz N de caracteres junto con su longitud, y
    que cuando el resultado de nn) sea positivo, coloque en N una ‘x’ en la misma posición que se
    evaluó para M.

*/
// funcion que detectaria si hay un barco/mina
void pp(int** M,char** N,int& P, int& C, int n){
    pair<int , int> PairValidate= e(0 , n - 1); 
    if(haveOne(M,PairValidate.first, PairValidate.second, n)){
        P += 100;
        C++;
        N[PairValidate.first][PairValidate.second] = 'x';
    }else
    {
        P -= 100;
    }

}

