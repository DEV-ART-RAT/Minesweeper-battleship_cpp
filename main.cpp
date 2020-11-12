#include "tools/headers.h"

int main(void)
{   
    char matrix[8][8]={{'a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c'}};
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++)
            cout<<"\t"<<((MatrixThreePos(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }


    return 0;
}
