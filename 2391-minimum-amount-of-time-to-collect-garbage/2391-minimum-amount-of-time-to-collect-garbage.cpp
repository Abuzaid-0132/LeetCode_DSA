class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& t) {
        
        int ans = 0;
        int lastM = 0, lastP = 0, lastG = 0;
        int countM = 0, countP = 0, countG = 0;
        
        vector<long long> prefix(t.size()+1);
        prefix.push_back(0);
        
        for(int i=1; i<= t.size(); i++) 
            prefix[i] = prefix[i-1] + t[i-1];
        
        for(int i=0; i<g.size(); i++) {
            
            string s = g[i];
            
            for(auto c: s) {
                
                if(c == 'M') {
                    countM++;
                    lastM = i;
                }
                
                if(c == 'P') {
                    countP++;
                    lastP = i;
                }
                
                if(c == 'G') {
                    countG++;
                    lastG = i;
                }
                
            }
            
        }
        
        if(countM)
            ans += (countM + prefix[lastM]);
        
        if(countP)
            ans += (countP + prefix[lastP]);
        
        if(countG)
            ans += (countG + prefix[lastG]);
        
        return ans;
    }
};