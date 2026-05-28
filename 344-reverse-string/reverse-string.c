void reverseString(char* s, int sSize) {
    
    int i;
    char j;
    
    for(i=0;i<sSize/2;i++){
      j = s[i];
      s[i]= s[sSize-1-i];
      s[sSize-1-i]= j;
    
    }
    

    for(i=0;i<sSize;i++){
        printf("%c",s[i]);
    }
}