class Solution {
public: 
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int addRocks) {
        
        vector<int> diff;
        int n = rocks.size();
        
        for(int i=0; i<n; i++)
            diff.push_back(capacity[i] - rocks[i]);
        
        sort(diff.begin(), diff.end());
        
        int ans = 0;
        
        for(int i=0; i<diff.size(); i++) {
            
            if(diff[i] > 0 && addRocks - diff[i] >= 0) {
                
                addRocks = addRocks - diff[i];
                ans++;
                
            }
            else if(diff[i] == 0){
                ans++;
            }
            
        }
        return ans;
    }   
};  