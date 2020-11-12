#include "tools/0all.h"

int main(void)
{   
    TwoValuesRandom Random=TwoRandom(0,1000);
    cout<<Random.firstR<<endl;
    cout<<Random.secondR<<endl;

    return 0;
}
