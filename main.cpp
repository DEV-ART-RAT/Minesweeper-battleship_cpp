#include "tools/headers.h"

int main(void)
{   
    int matrix[3][3]={{4,2,3},{4,2,3},{4,2,3}};
    printMatrix(matrix,3,3);
    MatrixTwoStepInsertOne(matrix,0,0,'r');
    cout<<"Modificada\n";
    printMatrix(matrix,3,3);

    return 0;
}
