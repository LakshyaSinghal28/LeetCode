class Solution {
    public int[] plusOne(int[] digits) {
        int len = digits.length;
      //  List<Integer> l=new ArrayList<>();
       for(int i=len-1;i>=0;i--)
        {
            digits[i]++;  //=digits[i]+1;
          //  digits[i]=digits[i]%10;
            if(digits[i]<10){
                return digits;
            }
            digits[i] = 0;
        }
         int[] ans=new int[digits.length+1];
         ans[0]=1;
           return ans;
       }
    }