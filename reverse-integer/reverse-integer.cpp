class Solution {
public:
    int reverse(int x) {
        // Convert into positive
        long long int t = abs(x);
        
        long long int rev = 0;
        
        // This is code for reversing the number
        while(t != 0){
            
            // Store Last didgit in -> a
            int a = t % 10;
            
            // Add it with * 10 so the number get's reversed
            rev = (rev * 10) + a;
            
            t = t/10;
            
        }
        
        // Condition given in the Question
        if(rev > INT_MAX || rev < INT_MIN)
            return 0;
        
        
        // Since we converted into positive before
        // Now check and result it appropriately
        if(x >= 0)
            return rev;
        
        else
            return -rev;
        
    }
};