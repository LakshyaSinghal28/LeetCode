class Solution {
    public boolean isValid(String s) {
        Stack <Character> stack = new Stack<>();
        int i=0;
        while(i<s.length()){
        char ch = s.charAt(i);

        if(ch=='[' || ch =='(' || ch =='{'){
            stack.push(ch);
        }
        else { 
            if(stack.empty()){
                return false;
            }
        if(ch == ')' && stack.peek() == '(' || 
                ch == '}' && stack.peek()=='{' ||
                ch == ']' && stack.peek()== '['){
                    stack.pop();
                }
                else{
                    return false;
                }
        }
        i++;
        }
        if(stack.empty()){
            return true;
        }
        else return false;
    }
}