#include "../tools/header.h"
#include "../tools/tools.h"
//c) Hacer una función en C++ que le pida al usuario un número entero y retorne este valor.
int c();

int c(){
    int integer;
    cout << "Ingrese un Numero : " << endl;
    //validamos el entero;
    ValidationOfInt(integer);
    return integer;
}



