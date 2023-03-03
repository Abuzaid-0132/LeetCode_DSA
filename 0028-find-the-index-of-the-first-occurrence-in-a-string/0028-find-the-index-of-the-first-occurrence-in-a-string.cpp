class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int m = haystack.length();
        int n = needle.length();
        
        for(int i=0; i<m-n+1; i++) {
            
            string sub_string = haystack.substr(i,n);
            
            if(sub_string == needle)
                return i;
            
        }
        
        return -1;
    }
};