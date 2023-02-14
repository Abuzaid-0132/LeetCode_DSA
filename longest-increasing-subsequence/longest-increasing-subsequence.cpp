class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> dp(n);
        
        dp[0]=1;
        
        for(int i = 1; i < n; i++){
            
            dp[i]=1;
            
            for(int j = 0;j < n; j++){
                
                if(nums[i] > nums[j] && dp[i] <= dp[j])
                    dp[i] = 1 + dp[j];
                
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};