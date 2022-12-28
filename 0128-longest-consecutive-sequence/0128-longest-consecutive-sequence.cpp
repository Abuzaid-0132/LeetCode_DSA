class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int> set;
        
        for(int i=0; i<n; i++)
            set.insert(nums[i]);
        
        int ans = 0;
        
        for(int i=0; i<n; i++) {
            
            if(set.find(nums[i] - 1) != set.end())
                continue;
            else{
                int count = 0;
                int current = nums[i];
                
                while(set.find(current) != set.end()) {
                    count++;
                    current++;
                }
                
                ans = max(ans,count);
            }
            
        }
        return ans;
    }
};