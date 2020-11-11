//b) Hacer una función en C++ que dada una variable de tipo int por referencia, 
//y un valor V, inicialice la variable con el valor V.
#include "../tools/tools.h"
void initVariable(int&,int);

void initVariable(int &i,int V){
    i=V;
};