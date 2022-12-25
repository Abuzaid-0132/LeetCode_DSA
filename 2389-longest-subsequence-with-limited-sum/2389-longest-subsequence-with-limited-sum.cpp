class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int m = queries.size();
        
        vector<long long> prefix(n+1);
        vector<int> ans(m);
        
        prefix[0] = 0;  
        
        for(int i=1; i<=n; i++)
            prefix[i] = nums[i-1] + prefix[i-1];
        
        for(int i=0; i<m; i++) {
            
            int lb = lower_bound(prefix.begin(),prefix.end(),queries[i]) - prefix.begin();
            
            if(lb == n+1) {
                ans[i] = n;
                continue;
            }
            
            if(prefix[lb] > queries[i])
                lb--;
            
            ans[i] = lb;
            
        }
        return ans;
    }
};
