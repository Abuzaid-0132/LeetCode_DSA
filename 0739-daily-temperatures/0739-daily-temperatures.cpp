class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        vector<int> ans;
        stack<int> st;
        
        int n = temp.size()-1;
        
        for(int i=n; i>=0; i--) {
            
            if(st.empty() == true){
                st.push(i);
                ans.push_back(0);
            }
            else{
                
                while(!st.empty() && temp[st.top()] <= temp[i] ){
                    st.pop();
                }
                
                if(st.empty() == true){
                    st.push(i);
                    ans.push_back(0);
                }
                else{
                    ans.push_back(st.top() - i);
                    st.push(i);
                }
                
            }
           
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

