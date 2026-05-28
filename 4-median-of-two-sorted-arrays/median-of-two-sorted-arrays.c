double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int n = nums1Size + nums2Size;
    int merged[n];

    int i=0,j=0,k=0;

    while(i< nums1Size && j< nums2Size)
    {
        if(nums1[i]<= nums2[j])
        {
            merged[k]= nums1[i];
            k++;
            i++;
        }
        else{
            merged[k]=nums2[j];
            k++;
            j++;
          }
    }
    while(i< nums1Size)
    {
        merged[k]=nums1[i];
        k++;
        i++;
    }
    while(j< nums2Size)
    {
        merged[k]=nums2[j];
        k++;
        j++;
    }
    
if(n%2 == 0)
{
   // float median = 
    return (merged[n/2-1] + merged[n/2])/2.0;
   // return (median/2.0);
}
else{
return merged[n/2];
}

}