#include "tools/headers.h"

int main(void)
{   
    char matrix[6][3]={{'a','b','c'},{'d','e','c'},{'a','b','c'},{'a','b','c'},{'d','e','c'},{'a','b','c'}    };
    cout<<"\n"<<((MatrixOnePos(matrix,1,2)==false)? "No":"Yes")<<"\n";
    return 0;
}
