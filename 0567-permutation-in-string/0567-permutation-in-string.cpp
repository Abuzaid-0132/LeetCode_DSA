class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int> s1_hash(26,0);
        vector<int> s2_hash(26,0);
        
        int m = s1.length();
        int n = s2.length();
        
        if(m > n)             // s1_length > s2_length , No permutaion exixts.
            return false;
        
        int left = 0;
        int right = 0;
        
        while(right < m) {
            
            s1_hash[s1[right] - 'a'] += 1;
            s2_hash[s2[right] - 'a'] += 1;
            
            right += 1;
            
        }
        
        right -= 1;         // to point right to the end of window.
        
        while(right < n) {
            
            if(s1_hash == s2_hash)
                return true;
            
            right += 1;
            
            if(right != n) 
                s2_hash[s2[right] - 'a'] += 1;
            
            s2_hash[s2[left] - 'a'] -= 1;
            left += 1;
            
        }
        
        return false;
    }
};