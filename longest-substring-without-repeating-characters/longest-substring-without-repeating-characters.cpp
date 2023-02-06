class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        
        int n = str.size();
        
        int result = 0;
        
        int i = 0, j = 0;
        
        set<int> set;
        
        while (j < n) {
            
        //Release
            while (set.count(str[j]) != 0) {
                
                set.erase(str[i]);
                i++;
            }
            
            //Acquire
            set.insert(str[j]);
            
            //Update result
            result = max(result, j - i + 1);
            j++;
        }
        
        return result;
    }
};