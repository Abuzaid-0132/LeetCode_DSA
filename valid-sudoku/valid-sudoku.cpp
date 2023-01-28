class Solution {
public:
    
    bool isValid(vector<vector<char>> &board,int row,int col) {
        
        int c = board[row][col];
        board[row][col] = '.';
        
        for(int i=0; i<9; i++)   // row check
            if(board[row][i] == c) 
                return false;

        for(int i=0; i<9; i++)   // column check
            if(board[i][col] == c)
                return false;

        for(int i=0; i<3; i++)   // 3*3 sub-boxes check
            for(int j=0; j<3; j++)
                if(board[row/3*3+i][col/3*3+j] == c)
                    return false;

        board[row][col] = c;

        return true;
        
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
                if(board[i][j] != '.' && isValid(board,i,j) == false)
                    return false;
        
        return true;
    }
};