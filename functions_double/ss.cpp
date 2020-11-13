#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions/p.cpp"

/*
ss) Hacer una función en C++ para que, dada una matriz de caracteres, utilice p) para cada una de
sus filas. (Es posible que sea necesario modificar p) un poco, y también colocar saltos de línea por
motivos estéticos).

*/

void ss(char** N, int n){

    for (int i = 0; i < n; i++)
    {
        printArrayCharBarMargin(N[i],n);
        std::cout << "\n" ;
    }
    

}

