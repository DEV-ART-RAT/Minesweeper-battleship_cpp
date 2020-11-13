#include "tools/headers.h"

int main(void)
{   
    int matrix[8][8]={{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3}};
    printMatrix(matrix,8,8);
    MatrixThreeStepInsertOne(matrix,0,0,'r');
    cout<<"Modificada\n";
    printMatrix(matrix,8,8);

    return 0;
}
