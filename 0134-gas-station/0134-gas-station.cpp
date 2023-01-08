class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int total_fuel = 0;
        int total_cost = 0;
        
        for(int i=0; i<gas.size(); i++)
            total_fuel += gas[i];
        
        for(int i=0; i<cost.size(); i++)
            total_cost += cost[i];
        
        if(total_fuel < total_cost)
            return -1;
        
        int current_fuel = 0;
        int start = 0;
        
        for(int i=0; i<gas.size(); i++) {
            
            current_fuel += (gas[i] - cost[i]);
            
            if(current_fuel < 0) {
                
                start = i + 1;
                current_fuel = 0;
            }
            
        }
        
        return start;
    }
};