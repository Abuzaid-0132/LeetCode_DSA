class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>, greater<int>> MinHeap;
        
        for(int i=0; i<k; i++) 
            MinHeap.push(nums[i]);
        
        for(int i=k; i<nums.size(); i++) {
            
            if(nums[i] < MinHeap.top())
                continue;
            
            else{
                
                MinHeap.pop();
                MinHeap.push(nums[i]);
            }
                
        }
        
        return MinHeap.top();
    }
};