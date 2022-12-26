class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> memo(n+1);
        
          // memo[i] = No. of 1s from 0 to i.
        
        memo[0] = 0;
        
        for(int i=0; i<=n; i++)
            memo[i] = memo[i/2] + i % 2;
        
        
        return memo;
    }
};
