class Solution {
public:
    int longestValidParentheses(string str) {
        
        stack<int> st;
        st.push(-1);

        int max_len = 0;

        for(int i=0; i<str.length(); i++) {

            if(str[i] == '(')
                st.push(i);

            else{

                st.pop();

                if(st.empty() == true) {
                    st.push(i);
                }
                else{
                    max_len = max(max_len,i - st.top());
                }

            }

        }
        return max_len;
    }
};
