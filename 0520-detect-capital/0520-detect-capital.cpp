class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n = word.size();
        int capital = 0;
        
        for(int i=0; i<n; i++)
            if(word[i] >= 'A' && word[i] <= 'Z')
                capital++;
        
        if(capital == n)
            return true;
        
        else if(capital == 1 && word[0] >= 'A' && word[0] <= 'Z')
            return true;
        
        else if(capital == 0)
            return true;
        
        else
            return false;
        
    }
};