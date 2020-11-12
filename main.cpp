#include "tools/headers.h"

int main(void)
{   
    char matrix[6][5]={{'a','b','c'},{'d','e','c'},{'a','b','c'},{'a','b','c'},{'d','e','c'},{'a','b','c'}    };
    cout<<"\n"<<((MatrixUp(matrix,1,3)==false)? "No":"Yes")<<"\n";

    return 0;
}
