int finalPositionOfSnake(int n, char** commands, int commandsSize) {
int i,j,k;
int beg=0;

int a[10][10];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        a[i][j]=beg++;
    }
}
int start=a[0][0];
j=0;
k=0;
for(i=0;i<commandsSize;i++){
    if(strcmp(commands[i],"RIGHT")==0){
        j++;
        start=a[k][j];
    }
     if(strcmp(commands[i],"UP")==0){
        k--;
        start=a[k][j];
    }
     if(strcmp(commands[i],"DOWN")==0){
        k++;
        start=a[k][j];
    }
     if(strcmp(commands[i],"LEFT")==0){
        j--;
        start=a[k][j];
    }

}
return start;
}