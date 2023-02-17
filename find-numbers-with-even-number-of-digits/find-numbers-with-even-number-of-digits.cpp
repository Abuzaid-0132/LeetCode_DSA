class Solution {
public:
    int findNumbers(vector<int>& arr) {
     
        int ans = 0;
        
        for(int i=0; i<arr.size(); i++) {
            
            int num = arr[i];
            
            if((num >= 10 && num <= 99) || (1000 <= num && num <= 9999) || (100000 <= num && num <= 999999))
                ans++;
        }
        
        return ans;
    }
};