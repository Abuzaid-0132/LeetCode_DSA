class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        vector<int> ans;
        int n = temp.size()-1;
        
        stack<pair<int,int>> st;
        
        for(int i=n; i>=0; i--) {
            
            if(st.empty() == true){
                
                st.push({temp[i],i});
                ans.push_back(0);
            }
            
            else{
                
                while(!st.empty() && st.top().first <= temp[i]){
                    st.pop();
                }
                
                if(st.empty() == true){
                    
                    st.push({temp[i],i});
                    ans.push_back(0);
                }
                else{
                    
                    ans.push_back(st.top().second - i);
                    st.push({temp[i],i});
                }
                
            }
            
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

