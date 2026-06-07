class Solution {
    public int climbStairs(int n) {

        int a=0,j=1;
        int k=0;
        int i;

        for(i=0;i<n;i++){
            k =a+j;
            a=j;
            j=k;
        }
        return k;
    }
}