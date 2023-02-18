class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int size = nums.size();
        
        unordered_set<int> set;
        
        sort(nums.begin(), nums.end());
        
        for(int i = size-1; i >= 0; i--) {
            
            set.insert(nums[i]);
            
            if(set.size() == 3)
                break;
        }
        
        if(set.size() < 3)
            return *max_element (nums.begin(), nums.end());
        
        else 
            return (*(set.begin()));
    }
};