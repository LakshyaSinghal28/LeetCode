class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i;
        int j=0,k=0;
      
     ArrayList<Integer> list = new ArrayList<>();

      while (j < m && k < n){
        if(nums1[j]<=nums2[k]){
            list.add(nums1[j]);
            j++;
        }
       else {
            list.add(nums2[k]);
            k++;
       }
    }
      
   while(j<m){
        list.add(nums1[j]);
        j++;
    }
    while(k<n){
        list.add(nums2[k]);
        k++;
    }
      

        for (i = 0; i < m + n; i++) {
            nums1[i] = list.get(i);
        }
    }
}