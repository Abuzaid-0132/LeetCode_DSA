class Solution {
public:
    
    bool isSafe(vector<string>& board,int x,int y,int n){
        
        // check if queen is alredy present in target row or not
        for(int row=0;row<x;row++)
            if(board[row][y]=='Q') 
                return false;
        
        //check if queen is alredy present in left side daigonal
        int row=x;
        int col=y;
        
        while(col>=0 && row>=0){
            
            if(board[row][col]=='Q') 
                return false;
            
            col--;
            row--;
        }
        
        //check if queen is alredy present in left daigonal
        row=x;
        col=y;
        
        while(col<n && row>=0){
            
            if(board[row][col]=='Q') 
                return false;
            
            col++;
            row--;
            
        } 
        
        //If you reach here it means current position is safe to place queen
        
        return true;
    }
    
    
    void dfs(vector<vector<string>>& ans,int x,int n,vector<string>& board){
        
        if(x>=n){
            ans.push_back(board);
            return;
        }
        
        for(int i=0;i<n;i++){
            
            //check is it safe to place queen at current position
            if(isSafe(board,x,i,n) == true){
                
                //placed queen at current 
                board[x][i]='Q';
                dfs(ans,x+1,n,board);
                
                //unplaced queen at current on bactracking for further check
                board[x][i]='.';
            }
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        
        dfs(ans,0,n,board);
       
        return ans;
    }
};

