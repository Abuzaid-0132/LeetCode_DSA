class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        vector<string> word;
        int i = 0;
        string temp = "";
        
        while(i < str.size()) {
            
            if(str[i] == ' '){
                
                word.push_back(temp);
                temp = "";
            }
            else{
                
                temp += str[i];
            }
            
            i++;
        }
        word.push_back(temp);
        
        if(word.size() != pattern.size())
            return false;
        
        unordered_map<char,string> mp;
        unordered_set<string> st;
        
        for(int i=0; i<pattern.size(); i++) {
            
            if(mp.find(pattern[i]) != mp.end()){
                
                if(mp[pattern[i]] != word[i]) {
                    return false;
                }
                
            }
            else{
                
                if(st.count(word[i]) == 1) {
                    return false;
                }
                
                mp[pattern[i]] = word[i];
                
                st.insert(word[i]);
            }
            
        }
        
        return true;
    }
};