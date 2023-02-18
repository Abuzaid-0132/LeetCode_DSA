class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int size = heights.size();
        
        vector<int> expected;
        expected = heights;
        
        // Cloning and sorting vector to compare with the original vector.
        
        sort(expected.begin(), expected.end());
        int count = 0;
        
        for(int i=0; i<size; i++) {
            
            if(heights[i] != expected[i])
                count++;
            
        }
        
        return count;
    }
};