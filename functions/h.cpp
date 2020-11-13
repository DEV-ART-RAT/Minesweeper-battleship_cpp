#include "../tools/header.h"
#include "../tools/tools.h"

//h) Modifique g) para que, en lugar de generar un entero, genere dos, y retorne ambos.

pair<int,int> generatorTwoRandom(int min, int max);

//genera un par de numeros al azar
pair<int,int> generatorTwoRandom(int min, int max){ 
    return pair<int ,int> (rand() % (max - min + 1) + min, rand() % (max - min + 1) + min);
}
//Tambien intente de otra forma

//struct TwoValuesRandom { int firstR;int secondR; };
//TwoValuesRandom TwoRandom(int min,int max){
//    TwoValuesRandom ValuesRandom;
//    srand (time(NULL));
//    ValuesRandom.firstR=rand() % ((max + 1) - min) + min;
//    srand (time(NULL));
//    ValuesRandom.secondR==rand() % ((max + 1) - min) + min;
//    return ValuesRandom;
//}