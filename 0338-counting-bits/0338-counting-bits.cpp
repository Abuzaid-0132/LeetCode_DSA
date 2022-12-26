class Solution {
public:
    
    void Count_SetBits(int n, vector<int> &result) {
        
        int setBit = 0;
        
        while(n != 0) {
            
            n = n & (n-1);
            setBit++;
        
        }
        
        result.push_back(setBit);
    }
    
    vector<int> countBits(int n) {
        
        vector<int> result;
        
        for(int i=0; i<=n; i++) 
            Count_SetBits(i,result);
        
        
        return result;
    }
};