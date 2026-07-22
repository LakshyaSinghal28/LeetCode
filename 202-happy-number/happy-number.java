class Solution {
    public boolean isHappy(int n) {
        int square;
        int digit;
       // int m = n;
        while(n != 1 && n != 4){
            square =0;
            while(n>0){

                digit = n%10;
                square = square + (digit * digit);
                n = n/10;
              
            }
            n = square;
        }

        if(n == 1){
            return true;
        }
        else {
            return false;
        }
    }
}