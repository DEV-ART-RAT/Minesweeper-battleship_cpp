#include "../tools/header.h"
#include "../tools/tools.h"

//e) Modifique d) para que, en lugar de pedir un entero, pida dos, y retorne ambos.
pair<int, int> e(int a, int b);

pair<int, int> e(int min, int max) {
     //pedimos dos datos que son el rango
    int first = 0,second=0;
    cout << "Introduzca un numero en el rango: ("<< min <<" , "<< max <<") Para la Fila :" <<endl;
    //while que valida el dato en los rangos
    do{     
        ValidationOfInt(first);
    }while(A_MENOR_B(first,min)||A_MENOR_B(max,first));
    cout << "Introduzca un numero en el rango: ("<< min <<" , "<< max <<") Para la Columna :" <<endl;
    //while que valida el dato en los rangos
    do{     
        ValidationOfInt(second);
    }while(A_MENOR_B(second,min)||A_MENOR_B(max,second));
    return pair<int ,int> (first, second);
}
// intente de otra forma
//struct TwoValuesRange { int first;int second; };
//
//TwoValuesRange Two(int min,int max){
//    TwoValuesRange Values;
//    int number1,number2;
//    cout<<"Primer numero:\n";
//    do{
//        cout << "Introduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
//        cin >>number1;
//    }while(number1<min || number1>max);
//    cout<<"Segundo numero:\n";
//    do{
//        cout << "Introduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
//        cin >>number2;
//    }while(number2<min || number2>max);
//    Values.first=number1;
//    Values.second=number2;
//    return Values;
//}
