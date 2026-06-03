class Solution {
    public boolean isPalindrome(int x) {
        int i;
        int y=x;
        int temp=0;
        if(x<0){
            return false;
        }
        else if(x==0){
            return true;
        }

        else {
        while(x>=1){
       i = x%10;
       x=x/10;
      temp = temp*10+i;
        }
        
        if(temp==y){
            return true;
        }
        }
        return false;
} 
    
}