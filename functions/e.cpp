//e) Modifique d) para que, en lugar de pedir un entero, pida dos, y retorne ambos.
#include "../tools/tools.h"
//#include "../functions/d.cpp" -> No se llama porque en el main ya lo hice
struct TwoValuesRange { int first;int second; };

TwoValuesRange Two(int min,int max){
    TwoValuesRange Values;
    int number1,number2;
    cout<<"Primer numero:\n";
    do{
        cout << "Introduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
        cin >>number1;
    }while(number1<min || number1>max);
    cout<<"Segundo numero:\n";
    do{
        cout << "Introduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
        cin >>number2;
    }while(number2<min || number2>max);
    Values.first=number1;
    Values.second=number2;
    return Values;
}

// Vi que no se podia llamar al anterior pero tambien era tarde asi que :
// TwoValuesRange Two(int min,int max){
//     TwoValuesRange Values;
//     int number1,number2;
//     cout<<"Primer numero:\n";
//     number1=inputIntRange(min,max);
//     cout<<"Segundo numero:\n";
//     number2=inputIntRange(min,max);
//     Values.first=number1;
//     Values.second=number2;
//     return Values;
// }


//Ejemplo de llamada:
/*
    TwoValuesRange d=Two(0,3);
    cout<<d.first<<endl;
    cout<<d.second<<endl;

*/
//Ayuda :
//https://stackoverflow.com/questions/36645510/returning-2-values-within-a-function
