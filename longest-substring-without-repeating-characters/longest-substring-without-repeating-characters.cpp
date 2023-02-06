class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> vec(256,-1);
        
        int max_len = 0;
        int start = -1;
        
        for(int i=0;i<s.length();i++){
            
            if(vec[s[i]] > start)
                start = vec[s[i]];
            
            vec[s[i]] = i;
            
            max_len = max(max_len,i-start);
            
        }
        
        return max_len;
    }
};