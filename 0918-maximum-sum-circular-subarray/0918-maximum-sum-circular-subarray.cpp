class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        
        int n = arr.size();
        int max_straight_sum = INT_MIN;
        int min_straight_sum = INT_MAX;
        int arraySum = 0;
        
        int temp_maxSum = 0;
        int temp_minSum = 0;
        
        for(int i=0; i<n; i++) {
            
            arraySum += arr[i];
            
            temp_maxSum += arr[i];
            max_straight_sum = max_straight_sum < temp_maxSum ? temp_maxSum : max_straight_sum;
            temp_maxSum = temp_maxSum < 0 ? 0 : temp_maxSum;
            
            temp_minSum += arr[i];
            min_straight_sum = min_straight_sum > temp_minSum ? temp_minSum : min_straight_sum;
            temp_minSum = temp_minSum > 0 ? 0 : temp_minSum;
            
            
        }
        
        if(arraySum == min_straight_sum)
            return max_straight_sum;
        
        return max(max_straight_sum,(arraySum - min_straight_sum));
        
    }
};