class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
            return false;
        
        int count[256] = {0};  // no_of_char = 256.
        
        for(int i=0; i<s.length(); i++) {
            
            count[s[i]]++;
            count[t[i]]--;
            
        }
        
        for(int i=0; i<256; i++)
            if(count[i] != 0)
                return false;
        
        return true;
        
    }
};