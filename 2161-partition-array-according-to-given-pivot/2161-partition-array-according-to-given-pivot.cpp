class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> small;
        vector<int> equal;
        vector<int> large;
        
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++) {
            
            if(nums[i] < pivot)
                small.push_back(nums[i]);
            
            else if(nums[i] == pivot)
                equal.push_back(nums[i]);
            
            else
                large.push_back(nums[i]);
            
        }
        
        for(int i=0; i<small.size(); i++)
            ans.push_back(small[i]);
        
        for(int i=0; i<equal.size(); i++)
            ans.push_back(equal[i]);
        
        for(int i=0; i<large.size(); i++)
            ans.push_back(large[i]);
     
        
        return ans;
        
    }
};