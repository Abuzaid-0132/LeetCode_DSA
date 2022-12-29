class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        int count = 0;
        
        int n = intervals.size();
        
        int left = 0;
        int right = 1;
        
        while(right < n) {
            
            if(intervals[left][1] <= intervals[right][0]) {  // non-overlap 
                left = right;
                right++;
            }
            else if(intervals[left][1] <= intervals[right][1]) {
                count++;  // remove right interval.
                right++;
            }
            else if(intervals[left][1] > intervals[right][1]) {
                count++;
                left = right;
                right++;
            }
            
        }
        return count;
    }
};