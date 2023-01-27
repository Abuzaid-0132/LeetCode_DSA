class Solution {
public:
    bool dfs(string &s, unordered_map<string, int>&m, int idx) {
        
        if (idx == s.size()) 
            return true;
        
        string temp = "";
        for (int i = idx; i < s.size();i++) {
            
            temp += s[i];
            
            if (m[temp] > 0 && dfs(s, m, i+1)) 
                return true;
            
        }
        return false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        
        unordered_map<string, int>m;
        
        for (auto s : words) 
            m[s]++;
        

        vector<string>ans;
        
        for (auto s : words) {
            
            m[s]--;
            
            if (dfs(s, m, 0)) 
                ans.push_back(s);
            
            m[s]++;
        }
        return ans;
    }
};