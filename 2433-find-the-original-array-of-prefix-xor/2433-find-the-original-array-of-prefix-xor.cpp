class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        
        int n = pref.size();
        
        vector<int> arr(n);
        
        for(int i=0; i<n; i++) {
            
            if(i == 0)
                arr[i] = pref[i];
            
            else
                arr[i] = pref[i] ^ pref[i-1];
            
        }
     
        return arr;
    }
};