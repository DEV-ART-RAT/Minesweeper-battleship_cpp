//z)  Generalizar todo lo realizado en v), w), x) y y) en una sola función que sea 
//capaz de soportar todos los casos.

//OJO: No entendi muy bien con generalice por lo que hice que la funcion retornara un entero con el valor 
//de maximos pasos posibles

template <typename T>
int MatrixNumberPos(T matrix, int posR,int posC,int Number);

int MatrixNumberPos(int** matrix, int posR,int posC,int Number);

template <typename T>
int MatrixNumberPos(T matrix, int posR,int posC,int Number){
    switch (Number){
    case 0: 
        return 0;
        break;
    case 1:
        return((MatrixOnePos(matrix,posR,posC))?1:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    case 2:
        return((MatrixTwoPos(matrix,posR,posC))?2:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    case 3:
        return((MatrixThreePos(matrix,posR,posC))?3:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    case 4:
        return((MatrixFourPos(matrix,posR,posC))?4:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    case 5:
        return((MatrixFivePos(matrix,posR,posC))?5:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    default:
        return 0;
        break;
    };
};

int MatrixNumberPos(int** matrix, int posR,int posC,int Number){
    char pos='a';
  switch (Number){
    case 0: 
        return 0;
        break;
    case 1:
        return((MatrixOnePos(matrix,posR,posC,pos))?1:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    case 2:
        return((MatrixTwoPos(matrix,posR,posC,pos))?2:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    case 3:
        return((MatrixThreePos(matrix,posR,posC,pos))?3:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    case 4:
        return((MatrixFourPos(matrix,posR,posC,pos))?4:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    case 5:
        return((MatrixFivePos(matrix,posR,posC,pos))?5:(MatrixNumberPos(matrix,posR,posC,Number-1)));
        break;
    default:
        return 0;
        break;
    };
}

//MAIN
/*
 char matrix[16][16]={{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'}};
    
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++)
            cout<<"\t"<<MatrixNumberPos(matrix,i,j,5);
        cout<<"\n";
    }

*/