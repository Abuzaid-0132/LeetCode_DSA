class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int minSoFar = prices[0];
        
        for(int i=0; i<prices.size(); i++) {
            
            minSoFar = min(minSoFar,prices[i]);
            
            int temp_profit = prices[i] - minSoFar;
             
            profit = max(profit, temp_profit);
            
        }
        
        return profit;
    }
};

