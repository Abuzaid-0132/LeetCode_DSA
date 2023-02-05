class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> Pascal(numRows);
        
        for(int i=0; i<numRows; i++) {
            
            Pascal[i].resize(i+1);
            Pascal[i][0] = Pascal[i][i] = 1;
            
            
            for(int j=1; j<i; j++)
                Pascal[i][j] = Pascal[i-1][j-1] + Pascal[i-1][j];
            
        }
        return Pascal;
    }
};