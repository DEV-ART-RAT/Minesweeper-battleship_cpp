//g) Modifique f) para que el entero generado se encuentre dentro de un rango [A,B], 
// donde A y B serán nuevos parámetros para la función.
#include "../tools/tools.h"
int intRandomRange(int min,int max){
    int randomRange;
    // limpia si hay un random anterior
    srand (time(NULL));
    randomRange=rand() % ((max + 1) - min) + min;
    return randomRange;
}

//http://www.cplusplus.com/reference/cstdlib/srand/