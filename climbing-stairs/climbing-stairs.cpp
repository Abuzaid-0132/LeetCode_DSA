class Solution {
public:
    
    int totalWays(int currStair, int targetStair, unordered_map<int,int> &map) {
        
        if(currStair == targetStair)
            return 1;
        
        if(currStair > targetStair)
            return 0;
        
        int currKey = currStair;
        
        if(map.find(currKey) != map.end())
            return map[currKey];
        
        int oneStep = totalWays(currStair+1, targetStair, map);
        
        int twoStep = totalWays(currStair+2, targetStair, map);
        
        map[currKey] = oneStep + twoStep;
        
        return oneStep + twoStep;
        
    }
    
    int climbStairs(int n) {
        
        unordered_map<int,int> map;
        
        return totalWays(0,n,map);
        
    }
};