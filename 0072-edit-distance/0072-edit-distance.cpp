class Solution {
public:
    int minDistance(string str1, string str2) {
        
        int m = str1.length();
        int n = str2.length();
        
        int dp[m+1][n+1];
        
        for(int i = 0; i <= m; i++){
            
            for(int j = 0; j <=n; j++){
                
                if(i == 0)  // if str1 is empty
                    dp[i][j] = j;
                
                else if(j == 0)  // if str2 is empty
                    dp[i][j] = i;
                
                else if(str1[i-1] == str2[j-1])  // if last chars are same
                    dp[i][j] = dp[i-1][j-1];
                
                else
                    dp[i][j] = 1 + min({dp[i][j-1],       // insert
                                       dp[i-1][j],      // remove
                                       dp[i-1][j-1]});  // replace
            }
            
        }
        
        return dp[m][n];
    }
};