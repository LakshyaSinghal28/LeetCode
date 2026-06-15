class Solution {
    public void sortColors(int[] nums) {
        int len = nums.length;

        for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                if(nums[i]>nums[j]){
                    int temp= nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        for(int i=0;i<len;i++){
            System.out.println(nums[i]);
        }
    }
}