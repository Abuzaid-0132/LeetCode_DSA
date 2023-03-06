class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // write your code here...
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        int missing_before_mid = 0;
        
        while (left <= right) {
            
            int mid = left + (right - left) / 2;
            
            missing_before_mid = arr[mid] - (mid + 1);
            
            if (missing_before_mid < k) 
                left = mid + 1;
            
             else 
                right = mid - 1;
            
        }
        
        return k + right + 1;
    }
};