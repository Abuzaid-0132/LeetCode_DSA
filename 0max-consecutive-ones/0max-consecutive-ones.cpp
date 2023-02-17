class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ones = 0;
        int max_ones = 0;
        
        for(int i=0; i<nums.size(); i++) {
            
            if(nums[i] == 1)
                ones++;
            
            max_ones = max(max_ones, ones);
            
            if(nums[i] == 0)
                ones = 0;
            
        }
        
        return max_ones;
    }
};