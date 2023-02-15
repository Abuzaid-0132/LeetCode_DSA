class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int result = 0;
        int left = 0;
        int right = height.size()-1;
        
        while(left <= right) {
            
            int min_height = min(height[left], height[right]);
            int index = right - left;
            
            result = max(min_height * index, result);
            
            if(height[left] < height[right])
                left++;
            else
                right--;
            
        }
        
        return result;
    }
};