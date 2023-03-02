class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();
        
        if (n == 1) 
            return 1;
        
        int write_idx = 0;
        int curr_idx = 0;
        
        while (curr_idx < n) {
            
            char curr_char = chars[curr_idx];
            
            int cnt = 0;
            
            while (curr_idx < n && chars[curr_idx] == curr_char) {
                
                curr_idx++;
                cnt++;
                
            }
            
            chars[write_idx++] = curr_char;
            
            if (cnt > 1) {
                
                string cnt_str = to_string(cnt);
                
                for (int i = 0; i < cnt_str.size(); i++) {
                    
                    chars[write_idx++] = cnt_str[i];
                    
                }
            }
        }
        
        return write_idx;
    }
};