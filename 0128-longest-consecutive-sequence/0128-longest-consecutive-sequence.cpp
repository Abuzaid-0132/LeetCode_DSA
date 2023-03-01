class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int> set;
        
        for(int i=0; i<n; i++)
            set.insert(nums[i]);
        
        int ans = 0;
        
        for(int i=0; i<n; i++) {
            
            
            if(set.find(nums[i] -1) == set.end()) {
                
                int j = nums[i] + 1;
                
                while(set.find(j) != set.end())
                    j++;
                
                ans = max(ans, j - nums[i]);
                
            }
            
        }
        
        return ans;
    }
};