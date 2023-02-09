class Solution {
public:
    
    void mark_island(vector<vector<char>>& matrix, int i, int j, int row, int col) {
        
        if(i < 0 || i >= row || j < 0 || j >= col || matrix[i][j] != '1')
            return;
        
        // Mark current cell as visited.
        matrix[i][j] = 2;
        
        // Make Recursive call in all 4 directions.
        mark_island(matrix, i+1, j, row, col); // Down
        mark_island(matrix, i, j+1, row, col); // Right
        mark_island(matrix, i-1, j, row, col); // top
        mark_island(matrix, i, j-1, row, col); // left
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        if(row == 0)    // Empty grid -> Boundary Case.
            return 0;
        
        int no_of_island = 0;
        
        // iterate over the cells of the grid.
        
        for(int i=0; i<row; i++) {
            
            for(int j=0; j<col; j++) {
                
                if(grid[i][j] == '1') {
                    
                    mark_island(grid, i, j, row, col);
                    no_of_island += 1;
                }
                
            }
            
        }
        
        return no_of_island;
    }
};