#include "../tools/header.h"
#include "../tools/tools.h"

//g) Modifique f) para que el entero generado se encuentre dentro de un rango [A,B], donde A y B
//serán nuevos parámetros para la función.
int generatorRandom(int a, int b);

//(cargado con f)
int generatorRandom(int a, int b){   
    return rand() % (b - a + 1) + a;
}
