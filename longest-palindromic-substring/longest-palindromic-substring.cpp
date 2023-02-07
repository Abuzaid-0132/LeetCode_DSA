class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.length();
        int low, high;
        
        int st = 0;     // this will store starting index of longest palindrome substring.
        int len = 1;   //this will store length of longest palindrome substring.
        
        for(int i=1; i<n; i++) {
            
            //even case
            low = i;
            high = i-1;
            
            while(low >= 0 && high < n && s[low] == s[high]) {
                
                if(high-low+1 > len) {   //this condition is checking if we got better length of palindrome                                                 substring then store it.
                    st = low;
                    len = high - low + 1;
                }
                
                low--;
                high++;
            }
            
            //odd case
            low = i - 1;
            high = i + 1;
            
            while(low >= 0 && high < n && s[low] == s[high]) {
                
                if(high-low+1 > len){
                    
                    st = low;
                    len = high-low+1;
                }
                
                low--;
                high++;
            }
            
        }
        
        return s.substr(st,len);
    }
};