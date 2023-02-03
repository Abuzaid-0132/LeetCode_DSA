class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int Min_price = prices[0];
        
        for(int i=0; i<prices.size(); i++) {
            
            Min_price = min(Min_price, prices[i]);
            
            int temp_profit = prices[i] - Min_price;
            
            profit = max(profit, temp_profit);
            
        }
        
        return profit;
    }
};