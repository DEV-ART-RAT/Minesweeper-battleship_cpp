//Modifique c = (Hacer una función en C++ que le pida al usuario
//un número entero y retorne este valor.) para que el entero solicitado 
// se encuentre dentro de un rango [A,B], donde A y B serán nuevos parámetros para la función.
#include "../tools/tools.h"
int inputIntRange(int,int);
int inputIntRange(int min,int max){
    int number;
    cout << "Introduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
    cin.exceptions(std::istream::failbit);
    while(true){
        try{
            cin>>number;
            if (!(number <= max && number>=min)) {
                throw  number;
                // falla por fuera de rango
            }
            else if(number <= max && number>=min){
                return number;   
                // se logra meter el numero
            }
        }
        // usuario metio numero pero no el que queriamos
        catch (int number) {
        cout <<"\nIntroduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
        }
        // limpiando si el usuario mete cualquier cosa menos un numero
        catch (std::ios_base::failure &fail) {  
            cout << "\nIntroduzca un numero en el rango: ["<<min<<","<<max<<"]" << endl;
            cin.clear();
            std::string tmp;
            getline(cin, tmp);
        }
    
}}