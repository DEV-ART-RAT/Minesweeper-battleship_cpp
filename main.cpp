#include "tools/headers.h"

int main(void)
{   
    char* array =NewArray<char>(3);
    ArraySpace(array,3);
    printArrayBarSpaceMargin(array,3);
    return 0;
}
