void rotate(int* nums, int numsSize, int k) {
   /*
    int i,j;
    int temp;
    int t;

   k=k%numsSize;

for(i=1;i<=k;i++){
      t=nums[numsSize-1];
    for(j=numsSize-1;j>=1;j--){
       
  
     nums[j]=nums[j-1];
    }
     nums[0]=t;
    
    
}
for(i=0;i<numsSize-1;i++){
    printf("%d",nums[i]);
}


}
*/
//void rotate(int* nums, int numsSize, int k) {
    int i, j;
    int temp;
    int t;

    k = k % numsSize;
    if(k == 0) return;

    // Step 1: Reverse full array
    i = 0; j = numsSize - 1;
    while(i < j){
        t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
        i++; j--;
    }

    // Step 2: Reverse first k
    i = 0; j = k - 1;
    while(i < j){
        t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
        i++; j--;
    }

    // Step 3: Reverse remaining
    i = k; j = numsSize - 1;
    while(i < j){
        t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
        i++; j--;
    }

    for(i = 0; i < numsSize; i++){
        printf("%d ", nums[i]);
    }
}