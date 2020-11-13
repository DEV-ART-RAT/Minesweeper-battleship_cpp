#include "../tools/header.h"
#include "../tools/tools.h"
// a) Hacer una función en C++ que le pida al usuario su nombre y retorne este valor.
string a();

string a(){
    //preguntamos el nombre del usuario
    string name;
    cout<<"Digite su nombre de usuario: ";
    //pedimos el nombre
    cin >> name;
    //retornamos lo que pedimos
    return name;
}

