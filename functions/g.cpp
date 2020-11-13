#include "../tools/header.h"
#include "../tools/tools.h"

//g) Modifique f) para que el entero generado se encuentre dentro de un rango [A,B], donde A y B
//serán nuevos parámetros para la función.
int generatorRandom(int min, int max);

//(operador sobrecargado con f)  )
int generatorRandom(int min, int max){   
    return rand() % (max - min + 1) + min;
}
