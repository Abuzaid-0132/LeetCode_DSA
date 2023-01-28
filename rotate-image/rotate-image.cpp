class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int i=0; i<matrix.size(); i++)                       // Transpose of a matrix.
            for(int j=0; j<i; j++)
                swap(matrix[i][j], matrix[j][i]);
        
        for(int i=0; i<matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());      // reverse each row of a matrix.
        
    }
};