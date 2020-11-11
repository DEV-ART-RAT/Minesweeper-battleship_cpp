// a) Hacer una función en C++ que le pida al usuario su nombre y retorne este valor.
#include "../tools/tools.h"
string username();
string username(){
    string name;
    cin>>name;
    return name;
}