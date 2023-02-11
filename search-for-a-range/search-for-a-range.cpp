class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int start_index = -1;
        int last_index = -1;
        
        if(nums.size() == 0) {
            
            ans.push_back(start_index);
            ans.push_back(last_index);
            return ans;
        }
        
        // apply binary_search for start_index.
        int low = 0;
        int high = nums.size()-1;
        
        while(low <= high) {
            
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target) {
                
                start_index = mid;
                
                high = mid - 1;
            }
            
            else if(nums[mid] < target) {
                
                low = mid + 1;
            }
            else{
                
                high = mid - 1;
            }
            
        }
        
        // apply binary_search for last_index.
        low = 0;
        high = nums.size()-1;
        
        while(low <= high) {
            
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target) {
                
                last_index = mid;
                
                low = mid + 1;
            }
            
            else if(nums[mid] < target){
                
                low = mid + 1;
            }
            else{
                
                high = mid - 1;
            }
            
        }
        
        ans.push_back(start_index);
        ans.push_back(last_index);
        
        return ans;
    }
};