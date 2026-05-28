char* restoreString(char* s, int* indices, int indicesSize) {
    int i,j;
    int temp;
    char temp1;

    for(i=0;i<indicesSize;i++){
        for(j=i;j<indicesSize;j++){
            if(indices[i]>indices[j]){
                temp=indices[i];
                indices[i]=indices[j];
                indices[j]=temp;

                temp1=s[i];
                s[i]=s[j];
                s[j]=temp1;
            }
        }
        
    }
  
  return s;

   // for(i=0;i<indicesSize-1;i++){
   //  return s[i];
  //  }


}