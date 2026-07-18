class Solution {
    public int[] arrayRankTransform(int[] arr) {

       int[] a = arr.clone();

       Arrays.sort(a);
        int m = 0;
       for(int i = 0;i<arr.length; i++){
        if(i==0 ||  a[i]!= a[i-1]){
            a[m]= a[i];
            m++;
        }
       }
        m=0;
       int[] ar = new int[arr.length];   
       for(int i=0;i<arr.length;i++){
        for(int j=0;j<a.length;j++){
        if(arr[i]==a[j]){
           ar[i] = j + 1;
           break;
        }
       }
       }
       return ar;
    }
}