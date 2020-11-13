//u) Fusionar los casos q), r), s) y t) en una sola función.

// OJO :::::
// el argumento pos hace referencia a adonde se verificara, por lo que si tiene:
//'a' ->all ; 'u' -> up ; 'd' = down ; 'l' = left ; 'r' = right   

template <typename T>
bool MatrixOnePos(T matrix, int posR,int posC,char pos);

template <typename T>
bool MatrixOnePos(T matrix, int posR,int posC,char pos){
    posR,posC-=1;
    int moves=1;
    int Right=posC+moves,Left=posC-moves,Up=posR-moves,Down=posR+moves,Mcols,Mrow,MaxCol,MaxRow;   
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);Mrow=sizeof(matrix[0]);
    MaxCol=Mcols-1;
    MaxRow=Mrow-1;
    //left ; right ; Down ; Up
    switch (pos)
    {
    case 'a':
        return (Left<0||Right>MaxCol || Down>MaxRow || Up<0)?false:true;
        break;
    case 'l':
        return((Left<0)?false:true);
    case 'r':
        return((Right>MaxCol)?false:true);
    case 'd':
        return((Down>MaxRow)?false:true);
    case 'u':
        return((Up<0)?false:true);

    default:
        return false;
        break;
    }
};

/*
   char matrix[16][16]={{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'}};
    
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++)
            cout<<((MatrixOnePos(matrix,i,j,'a')==false)? "No":"Yes")<<"\t";
        cout<<"\n";
    }

    */