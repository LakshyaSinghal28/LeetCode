int searchInsert(int* nums, int numsSize, int target) {
    int k=0;
    for(int i=0;i<numsSize; )
    {
      if(target > nums[i])
      { 
        if(target >  nums[numsSize-1]){
            k = numsSize ;
            break;
        }
        i++;
        continue;
      }

      if(target < nums[i] || target == nums[i] ){
      k = i;
      break;
    }

   /*   else if (target > nums[numsSize])
     {
       k = numsSize;
      }
   // }
    }

    */
    }
    return k;
}
