#include "../tools/header.h"
#include "../tools/tools.h"
//d) Modifique c) para que el entero solicitado se encuentre dentro de un rango [A,B], donde A y B
//serán nuevos parámetros para la función.
int d(int a, int b);

int d(int min, int max)
{
    //pedimos dos datos que son el rango
    int number = 0;
    cout << "Introduzca un numero en el rango: ("<< min <<" , "<< max <<") " <<endl;
    //while que valida el dato en los rangos
    do{     
        ValidationOfInt(number);
    }while(A_MENOR_B(number,min)||A_MENOR_B(max,number));
    return number;
}

// Lo estaba validando de otra forma :VV

// int getInt(int min,int max){
//     int number;
//     cout << "Introduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
//     cin.exceptions(std::istream::failbit);
//     while(true){
//         try{
//             cin>>number;
//             if (!(number <= max && number>=min)) {
//                 throw  number;
//                 // falla por fuera de rango
//             }
//             else if(number <= max && number>=min){
//                 return number;
//                 // se logra meter el numero
//             }
//         }
//         // usuario metio numero pero no el que queriamos
//         catch (int number) {
//         cout <<"\nIntroduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
//         }
//         // limpiando si el usuario mete cualquier cosa menos un numero
//         catch (std::ios_base::failure &fail) {
//             cout << "\nIntroduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
//             cin.clear();
//             std::string tmp;
//             getline(cin, tmp);
//         }

// }}