int maxArea(int* height, int heightSize) {
    int i =0;
    int max =0;
    int j = heightSize -1  ;

   // if(j = 1)
    for(i=0;i< j; i++)
    {   
        
        int k = j - i;

      if (height[j] > height[i])
      {
       int l = height[i]*k;
       if (max < l)
       {
        max = l;
       }
      }
      else {
          int l = height[j] *k;
          i--;
          j--;
          if(max < l)
          {
            max = l;
          }
      }
      
    }
    return max;
}