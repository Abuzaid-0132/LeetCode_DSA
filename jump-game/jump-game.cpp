class Solution {
public:
    
    bool helper(vector<int> &nums, int curr, unordered_map<int, int> &map) {
        
        if(curr >= nums.size()-1)
            return true;
        
        int currKey = curr;
        
        if(map.find(currKey) != map.end())
            return map[currKey];
        
        int currJump = nums[curr];
        
        if(currJump >= nums.size() - curr)
            return true;
        
        bool ans = false;
        
        for(int i=1; i<=currJump; i++) {
            
            bool tempAns = helper(nums, curr+i, map);
            ans = ans || tempAns;
            
        }
        
        return map[currKey] = ans;
    }
    
    bool canJump(vector<int>& nums) {
        
        unordered_map<int, int> map;
        return helper(nums, 0, map);
        
    }
};