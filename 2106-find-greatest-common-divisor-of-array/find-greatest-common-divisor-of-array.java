class Solution {
    public int findGCD(int[] nums) {
        int n = nums.length;
        int small = nums[0];
        int large = nums[0];
        for(int i=1;i<n;i++){
           if(nums[i]<small){
            small = nums[i];
           }
           if(nums[i]>large){
            large = nums[i];
           }
        }
         int gcd = 1;
        for(int i=1;i<=small;i++){
           if(small % i ==0 && large % i == 0){
            gcd = i;
           }
        }
            System.out.println(small);
            System.out.println(large);
        return gcd;

    }
}