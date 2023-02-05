class Solution {
public:
    bool isValid(string str) {
        
        stack<char> stk;

        for(int i=0; i<str.length(); i++) {

            if(str[i]=='(' || str[i]== '{' || str[i]=='['){
                
                stk.push(str[i]);
            }
            else{

                if(stk.empty()==true)
                    return false;
                    
                if((str[i]==')' && stk.top() != '(') || (str[i]=='}' && stk.top() != '{') ||                                            (str[i]==']' && stk.top() != '['))
                            return false;

                stk.pop();
            }

        }

        return (stk.empty() == true);
    }
};
