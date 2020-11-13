#include <string>
#include <iostream>
#pragma once
using namespace std;

void ValidationOfInt(int& dato){ 
    try{
        cout<<"Porfavor Digite un numero entero.\n";
        cin>>dato;}
    catch(exception e)
    {
        cout<<"Porfavor Digite un numero entero.\n";
        ValidationOfInt(dato);
    }
}
void ValidationOfString(string& dato){ 
    try{
        cout<<"Porfavor Digite un numero entero.\n";
        cin>>dato;}
    catch(exception e)
    {
        cout<<"Porfavor Digite un numero entero.\n";
        ValidationOfString(dato);
    }
}