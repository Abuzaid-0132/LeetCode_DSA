class Solution {
public:
    vector<string> ans;
    
    void dfs(string s, unordered_set<string> &set, string res){

        if(s.size()==0) 
            return;
		
        if(set.count(s) == true)
             ans.push_back(res+s);
        
		// we do not return from function as there might be some substring possible which         might be part of another answer.
        
		int n=s.size();

        for(int i=0; i<n; ++i){

            if(set.count(s.substr(0,i+1)) == true)
                dfs(s.substr(i+1), set, res + s.substr(0,i+1) + " ");
            
        }

        return ;
    }
	
    vector<string> wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> set(begin(wordDict), end(wordDict));

        dfs(s,set, "");
        
        return ans;
        
    }   
};
