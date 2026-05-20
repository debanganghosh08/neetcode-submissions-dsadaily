class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int left = 0, right = n - 1;
        while(left < right){
            int profit = prices[right] - prices[left];
            if(prices[left] < prices[right]){
                left++;
            }else{
                left++;
            }
            right--;
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    }
};
