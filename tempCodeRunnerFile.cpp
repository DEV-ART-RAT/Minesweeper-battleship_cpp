 char matrix[10][10]={{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'}};
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            cout<<"\t"<<((MatrixTwoPos(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }