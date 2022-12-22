class Solution {
public:
    vector<string> ans;
    
    void solve(string s, unordered_set<string> &wordset, string res){

        if(s.size()==0) 
            return;
		
        if(wordset.count(s) == true)
             ans.push_back(res+s);
        
		// we do not return from function as there might be some substring possible which         might be part of another answer.
        
		int n=s.size();

        for(int i=0; i<n; ++i){

            if(wordset.count(s.substr(0,i+1)) == true)
                solve(s.substr(i+1), wordset, res + s.substr(0,i+1) + " ");
            
        }

        return ;
    }
	
    vector<string> wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> wordset(begin(wordDict), end(wordDict));

        solve(s,wordset, "");
        
        return ans;
        
    }   
};

