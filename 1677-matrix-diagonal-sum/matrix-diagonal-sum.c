int diagonalSum(int** mat, int matSize, int* matColSize) {
    
    int sum=0;
    int i,j;
    for(int i=0;i<matSize;i++){
        for(j=0;j<matSize;j++){
        if(i==j){
      sum=sum+mat[i][j];
        }
        else if(i==matSize-1 && j==0 )
        sum=sum+mat[i][j];

         else if(i==0 && j==matSize-1){
            sum=sum+mat[i][j];
         }
         else if(i+j==matSize-1){
            sum=sum+mat[i][j];
         }
            else continue;
         }
    }

    return sum;
}