char* reverseStr(char* s, int k) {
    char temp;
    int i;
    
    if(strlen(s)<=k){
     
      // int end=k-1;
        for(i=0;i<strlen(s)/2;i++){
         temp= s[i];
         s[i]=s[strlen(s)-1-i];
         s[strlen(s)-1-i]=temp;
        }
    
    }

    else if(strlen(s)<2*k && strlen(s)>=k){
       // int start =0;
        int end=k-1;

        for(i=0;i<=end/2;i++){
         temp= s[i];
         s[i]=s[end-i];
         s[end-i]=temp;
        }
    }
    else{
  int  l=strlen(s);
    
    for(i=0;i<l;i=i+2*k){
     int  end=i+k-1;

     if(end>=l){
      end=l-1;
     }

     int one=i;
     int last=end;
     while(one<last){
          temp= s[one];
         s[one]=s[last];
         s[last]=temp;

         one++;
         last--;
    }
    }
    }
return s;
}