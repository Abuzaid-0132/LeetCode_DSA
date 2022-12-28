class Solution {
public:
    
     void mark_current_island(vector<vector<char>> &matrix,int i,int j,int rows,int cols) {
         
        if(i<0 || i>=rows || j<0 || j>=cols || matrix[i][j]!='1')  //Boundary case for matrix
            return;
        
        //Mark current cell as visited
        matrix[i][j] = '2';
        
        //Make recursive call in all 4 adjacent directions
        mark_current_island(matrix,i+1,j,rows,cols);  //DOWN
        mark_current_island(matrix,i,j+1,rows,cols);  //RIGHT
        mark_current_island(matrix,i-1,j,rows,cols);  //TOP
        mark_current_island(matrix,i,j-1,rows,cols);  //LEFT
    }
    
    
        int numIslands(vector<vector<char>>& grid) {
        
            //For FAST I/O
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);

            int rows = grid.size();
            
            if(rows == 0)     //Empty grid boundary case
                return 0;
            
            int cols = grid[0].size();

            //Iterate for all cells of the array
            
            int no_of_islands = 0;
            
            for(int i=0; i<rows; ++i){
                
                for(int j=0; j<cols; ++j){
                    
                    if(grid[i][j] == '1'){
                        
                        mark_current_island(grid,i,j,rows,cols);
                        no_of_islands += 1;
                    }
                }
            }
            return no_of_islands;
    }
};