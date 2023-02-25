class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);
        
        int pos = 0;
        int neg = 1;
        
        for(int ele: nums) {
            
            if(ele >= 0) {
                
                ans[pos] = ele;
                pos += 2;
            }
            else {
                
                ans[neg] = ele;
                neg += 2;
            }
            
        }
        
        return ans;
    }
};