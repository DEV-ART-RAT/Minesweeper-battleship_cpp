#include "../tools/header.h"
#include "../tools/tools.h"

//h) Modifique g) para que, en lugar de generar un entero, genere dos, y retorne ambos.

pair<int,int> generatorTwoRandom(int a, int b);

pair<int,int> generatorTwoRandom(int a, int b){ 
    return pair<int ,int> (rand() % (b - a + 1) + a, rand() % (b - a + 1) + a);
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