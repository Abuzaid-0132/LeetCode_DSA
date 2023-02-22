class Solution {
public:
    
    bool isPalindrome(string & s) {
        
        int i = 0;
        int j = s.size() - 1;
        
        while(i < j) {
            
            if(s[i] != s[j])
                return false;
            
            i++;
            j--;
            
        }
        
        return true;
    }
    
    
    bool isStrictlyPalindromic(int n) {
        
        for(int i=2; i<=n-2; i++) {
            
            string rep = "";
            int new_n = n;
            
            while(new_n) {
                
                rep += (to_string(new_n % i));
                new_n = new_n / i;
                
            }
            
            if(isPalindrome(rep) == false)
                return false;
            
        }
        
        return true;
    }
};