class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int water=0;
        int[] firstMax = new int[n];
        int[] secondMax = new int[n];

      firstMax[0]= height[0];
     for(int i=1;i<n;i++){
        if(height[i]>firstMax[i-1]){
            firstMax[i] = height[i];
        }
        else{
            firstMax[i]= firstMax[i-1];
        }
     }
    secondMax[n-1]= height[n-1];
    for(int i=n-2;i>=0;i--){
        if(height[i]>secondMax[i+1]){
            secondMax[i]= height[i];
        }
        else{
            secondMax[i]= secondMax[i+1];
        }
    }
  /*  for(int i=0;i<n;i++){
    System.out.print(firstMax[i]);
}

for(int i=0;i<n;i++){
    System.out.print(secondMax[i]);
}
  */

       for(int i=0;i<n;i++){
        if(firstMax[i]<secondMax[i]){
          water = water + (firstMax[i] - height[i]);
        }
        else{
           water = water + (secondMax[i] - height[i]);
        }
       }

  return water;
    }
}