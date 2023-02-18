class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        int max_ele = -1;
        
        for(int i = n-1; i >= 0; i--) {
            
            int temp = arr[i];
            
            arr[i] = max_ele;
            
            max_ele = max(max_ele,  temp);
            
        }
        
        return arr;
    }
};