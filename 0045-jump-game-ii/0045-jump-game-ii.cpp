class Solution {
public:
    
    int MinJump(vector<int>& nums, int currIndex, vector<int> &memo) {
        
        if(currIndex >= nums.size()-1)
            return 0;
        
        int currKey = currIndex;
        
        if(memo[currKey] != -1)
            return memo[currKey];
        
        int currJump = nums[currIndex];
        
        // For some large values.
        int ans = 10001;
        
        for(int i=1; i<=currJump; i++) {
            
            int temp_ans = 1 + MinJump(nums, currIndex+i, memo);
            ans = min(ans, temp_ans);
        }
        
        return memo[currKey] = ans;
    }
    
    int jump(vector<int>& nums) {
        
        vector<int> memo(nums.size()+1, -1);
        return MinJump(nums, 0, memo);
        
    }
};