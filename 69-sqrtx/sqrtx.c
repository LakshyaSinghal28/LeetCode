int mySqrt(int x) {
   double  i;

    for(i=1;i<=x;i++){
        if(i*i == x){
            return i;
        }
        else if(i*i> x){
            return i-1;
        }
    }
    return 0;
}