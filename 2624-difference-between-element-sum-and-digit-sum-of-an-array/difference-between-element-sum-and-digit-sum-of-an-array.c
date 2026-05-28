int differenceOfSum(int* nums, int numsSize) {
    
    int i,j;
    int sum=0;
    int plus=0;

    for(i=0;i<numsSize;i++){
        sum=sum+nums[i];
    }

    for(i=0;i<numsSize;i++){
        if(nums[i]<10 ){
            plus =plus+nums[i];
        }
        else {
           while(nums[i]>10){
            int r=nums[i]%10;
            nums[i]=nums[i]/10;
            plus=plus+r;
           }
           if(nums[i]<10){
            plus=plus+nums[i];
           }
           else if(nums[i]==10){
            plus=plus+1;
           }
        }
    }
    if((sum-plus)>0){
        return (sum-plus);
    }
        else{
            return (plus-sum);
        }
    
}