class Solution {
public:
    
    int helper(vector<int> & nums, int currIndex, unordered_map<int,int> &map) {
        
        if(currIndex >= nums.size())
            return 0;
        
        int currKey = currIndex;
        
        if(map.find(currKey) != map.end())
            return map[currKey];
        
        int rob = nums[currKey] + helper(nums, currIndex+2, map);
        
        int noRob = helper(nums, currIndex+1, map);
        
        map[currIndex] = max(rob, noRob);
        
        return map[currIndex];
        
    }
    
    int rob(vector<int>& nums) {
        
        unordered_map<int,int> map;
        return helper(nums,0,map);
        
    }
};