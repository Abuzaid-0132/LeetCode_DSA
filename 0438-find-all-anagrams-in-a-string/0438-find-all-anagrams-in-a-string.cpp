class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> result;
        
        vector<int> s_hash(26,0);
        vector<int> p_hash(26,0);
        
        // Use Window Sliding Technique.
        
        int window = p.size();
        int len = s.size();
        
        if(len < window)
            return result;
        
        int left = 0;
        int right = 0;
        
        while(right < window) {
            
            p_hash[p[right] - 'a'] += 1;
            s_hash[s[right] - 'a'] += 1;
            
            right += 1;
        }
        
        right -= 1;
        
        while(right < len) {
            
            if(p_hash == s_hash)
                result.push_back(left);
            
            right += 1;
            
            if(right != len)
                s_hash[s[right] - 'a'] += 1;
            
            s_hash[s[left] - 'a'] -= 1;
            left += 1;
            
        }
        return result;
    }
};