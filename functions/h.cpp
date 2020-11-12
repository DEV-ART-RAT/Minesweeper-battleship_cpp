//h) Modifique g) para que, en lugar de generar un entero, genere dos, y retorne ambos.
#include "../tools/tools.h"
struct TwoValuesRandom { int firstR;int secondR; };
TwoValuesRandom TwoRandom(int min,int max){
    TwoValuesRandom ValuesRandom;
    srand (time(NULL));
    ValuesRandom.firstR=rand() % ((max + 1) - min) + min;
    srand (time(NULL));
    ValuesRandom.secondR==rand() % ((max + 1) - min) + min;
    return ValuesRandom;
}

/*

 TwoValuesRandom Random=TwoRandom(0,1000);
    cout<<Random.firstR<<endl;
    cout<<Random.secondR<<endl;

    */