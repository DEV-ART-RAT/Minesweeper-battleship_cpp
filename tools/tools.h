#include <string>
#include <iostream>
#pragma once
using namespace std;

void ValidationOfInt(int& dato){ 
    try{
        cin>>dato;}
    catch(exception e)
    {
        cout<<"Porfavor Digite un numero entero dentro del rango.\n";
        ValidationOfInt(dato);
    }
}
void ValidationOfString(string& dato){ 
    try{
        cin>>dato;}
    catch(exception e)
    {
        cout<<"Porfavor Digite un  string.\n";
        ValidationOfString(dato);
    }
}