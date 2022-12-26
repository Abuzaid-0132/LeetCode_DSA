class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        int total_Sum = n * (n+1) / 2;
        
        for(int i=0; i<n; i++)
            total_Sum = total_Sum - nums[i];
        
        return total_Sum;
        
    }
};
