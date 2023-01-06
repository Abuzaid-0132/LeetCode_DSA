class Solution {
public:
    int maxIceCream(vector<int>& costs, int money) {
        
        sort(costs.begin(),costs.end());
        int count = 0;
        
        for(int i=0; i<costs.size(); i++) {
            
            if(money >= costs[i]) {
                
                count++;
                money -= costs[i];
            }
            
        }
        
        return count;
    }
};