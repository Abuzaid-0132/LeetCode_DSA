class Solution {
public:
    bool isPalindrome(int num) {
        
        stack<int> st;
        
        if(num < 0)
            return false;
        
        int y = num;
        
        while(num) {
            
            st.push(num % 10);
            
            num /= 10;
        }
        
        while(y) {
            
            if(st.top() != (y % 10))
               return false;
            
             st.pop();
            
             y /= 10;
        }
        
        return true;
    }
};