class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] toreturn = new int[2];
         int flag=0;
        int start =0;
        int end = nums.length-1;
        int mid = start + end/2;

        while(start <= end){
             mid = (start + end)/2;
            if(nums[mid]>target){
                end =  mid - 1;
            }
            else if(nums[mid]<target){
                start = mid +1;
            }
            else if(nums[mid] == target){
                flag = 1;
                int a=mid;
                int b = mid;
             while(a >= 0 && nums[a] == target){
                a--;
                }
               toreturn[0]= ++a;
                while(b < nums.length && nums[b] == target){
                    b++;
                }
                    toreturn[1]= --b;
                    break;
                
            }
        }
        if(flag==0)
            {
                toreturn[0]=-1;
                toreturn[1]=-1;
            }
        
     return toreturn;

    }
}