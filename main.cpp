#include "tools/headers.h"

int main(void)
{   
    int* array =NewArray<int>(3);
    ArrayZero(array,3);
    printArrayBar(array,3);
    return 0;
}
