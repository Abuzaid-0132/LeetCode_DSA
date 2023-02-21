class Solution {
public:
    int solve(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>> &dp){
        
        if(i == n-1 and j == m-1) 
            return grid[i][j];
        
        if(dp[i][j] != -1) 
            return dp[i][j];
        
        int down=INT_MAX,right=INT_MAX;
        
        if(i+1 < n) 
            down = solve(i+1,j,n,m,grid,dp);
        
        if(j+1 < m)
            right = solve(i,j+1,n,m,grid,dp);

        return dp[i][j]=grid[i][j]+min(down,right);
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
        return solve(0,0,n,m,grid,dp);
    }
};