class Solution {
private:
    void merge(vector<int>& nums, int l, int mid, int r) {
        
        vector<int> temp(r - l + 1);
        
        int i = l, j = mid +1, k =0;
        
        while(i <= mid && j <= r){
            
            if(nums[i] < nums[j])
                temp[k++] = nums[i++];
            
            else 
                temp[k++] = nums[j++];
            
        }
        
        while(i <= mid)
            temp[k++] = nums[i++];
        
        while(j <= r) 
            temp[k++] = nums[j++];
        
        for(int i =0; i< k; ++i){
            nums[l + i] = temp[i];
        }
    }
    
    
    void mergeS(vector<int>& nums, int l, int r){
        
        if( l>= r) 
            return;
        
        int mid = (l + r) >> 1;
        
        mergeS(nums, l, mid);
        
        mergeS(nums, mid + 1, r);
        
        merge(nums, l, mid, r);
        
    }
    
public:
    vector<int> sortArray(vector<int>& nums) {
        
        mergeS(nums, 0, nums.size() -1);
        return nums;
    }
};