class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        if(nums.size() < 3)
            return false;
        
        int i = INT_MAX;
        int j = INT_MAX;
        
        for(int idx = 0; idx<nums.size(); idx++) {
            
            if(nums[idx] <= i)
                i = nums[idx];
            
            else if(nums[idx] <= j)
                j = nums[idx];
            
            else
                return true;
            
        }
        
        return false;
    }
};