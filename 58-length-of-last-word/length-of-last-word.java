class Solution {
    public int lengthOfLastWord(String s) {
        int len = s.length();
        int size=0;
        int i=len-1;
 
      if(s.charAt(len-1)==' '){
        while(s.charAt(i)==' '){
            i--;
            len--;
        }
      }
        while(i>=0&& s.charAt(i)!=' '){
            size++;
            i--;
        }
        
        return size;
    }
}