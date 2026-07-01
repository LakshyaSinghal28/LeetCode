class Solution {
    public int maxProfit(int[] prices) {
        int min = prices[0];
        int i = 1;
        int profit=0;
       while(i< prices.length){
            if(min>prices[i]){
                min = prices[i];
            }
             else{
                profit = Math.max(profit, prices[i]-min);
             }
          i++;
       }
       return profit;
    }
}