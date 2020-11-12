#include "tools/headers.h"

int main(void)
{   
    char matrix[6][6]={{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'}};
    
  for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cout<<"\t"<<((MatrixUp(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }


    return 0;
}
