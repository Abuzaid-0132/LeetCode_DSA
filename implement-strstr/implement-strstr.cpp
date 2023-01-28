class Solution {
public:
    int strStr(string haystack, string needle) {
     
        int m = haystack.length();
        int n = needle.length();
        
        for(int i=0; i<m-n+1; i++) {
            
            string str = haystack.substr(i,n);
            
            if(str == needle)
                return i;
            
        }
        
        return -1;
    }
};