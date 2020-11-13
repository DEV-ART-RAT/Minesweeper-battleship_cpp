#include "../tools/header.h"
#include "../tools/tools.h"
// b) Hacer una función en C++ que dada una variable de tipo int por referencia, y un valor V, 
//inicialice la variable con el valor V.
void b(int& ref, int v);

void b(int& ref, int v){
    //igualamos el valor que nos dan en V para que a lo tome
    ref = v;
}