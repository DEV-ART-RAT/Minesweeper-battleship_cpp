//y) Modificar los casos q), r), s) y t) para que, en lugar de checar una celda en
// la dirección indicada, chequee si es posible avanzar 5 celdas en dicha dirección.


template <typename T>
bool MatrixFivePos(T matrix, int posR,int posC);

bool MatrixFivePos(int** matrix, int posR,int posC);

template <typename T>
bool MatrixFivePos(T matrix, int posR,int posC){
    int moves=5;
    int Right=posC+moves,Left=posC-moves,Up=posR-moves,Down=posR+moves,Mcols,Mrow,MaxCol,MaxRow;   
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);Mrow=sizeof(matrix[0]);
    MaxCol=Mcols-1;
    MaxRow=Mrow-1;
    //left ; right ; Down ; Up
    return (Left<0||Right>MaxCol || Down>MaxRow || Up<0)?false:true;
       
};

bool MatrixFivePos(int** matrix, int posR,int posC){
    int moves=5;
    int Right=posC+moves,Left=posC-moves,Up=posR-moves,Down=posR+moves,Mcols,Mrow,MaxCol,MaxRow;   
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);Mrow=sizeof(matrix[0]);
    MaxCol=Mcols-1;
    MaxRow=Mrow-1;
    //left ; right ; Down ; Up
    return (Left<0||Right>MaxCol || Down>MaxRow || Up<0)?false:true;
}

//MAIN
/*

    char matrix[16][16]={{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'}};
    
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++)
            cout<<((MatrixFivePos(matrix,i,j)==false)? "No":"Yes")<<"\t";
        cout<<"\n";
    }

*/