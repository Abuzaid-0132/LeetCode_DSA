class Solution {
public:
    
    vector<string> res;
    unordered_map<string,int> map;
    
    int getMinInValid(string s) {
        
        stack<char> stk;
        int i = 0;
        
        while(i < s.size()) {
            
            if(s[i] == '(')
                stk.push('(');
            
            else if(s[i] == ')') {
                
                if(stk.size() > 0 && stk.top() == '(')
                    stk.pop();
                
                else
                    stk.push(')');
                
            }
            
            i++;
        }
        
        return stk.size();
    }
    
    
    
    void solve(string s, int minP) {
        
        if(map[s] != 0)
            return;
        
        else
            map[s]++;
        
        // base case.
        if(minP <  0)
            return;
        
        if(minP == 0) {
            
            if(getMinInValid(s) == 0)
                res.push_back(s);
         
            return;
        }
        
        for(int i=0; i<s.size(); i++) {
            
            string left = s.substr(0,i);
            
            string right = s.substr(i+1);
            
            solve(left+right, minP - 1);
            
        }
        
        return;
    }
    
    
    
    vector<string> removeInvalidParentheses(string s) {
        
        int minP = getMinInValid(s);
        
        solve(s, minP);
        
        return res;
        
    }
};