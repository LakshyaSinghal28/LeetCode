class Solution {
    public double myPow(double x, int n) {
     
     long N = n;

      if (N < 0) {
            return power(1 / x, -N);
        }

     return power(x,N);
    }
 public double power(double x, long n){
    if(n==1){
        return x;
    }

    if(n==0){
        return 1;
    }

    
        double half = power(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        }
 
         return x * half * half;
 }
}