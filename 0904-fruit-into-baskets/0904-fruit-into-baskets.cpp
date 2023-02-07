class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        unordered_map<int, int> map;
        
        int i = 0;
        int j = 0;
        int ans = 0;
        
        while(j < fruits.size()) {
            
            map[fruits[j]]++;
            
            if(map.size() <= 2)
                ans = max(ans, j-i+1);
            
            else {
                
                map[fruits[i]]--;
                
                if(map[fruits[i]] == 0)
                    map.erase(fruits[i]);
                
                i++;
            }
            
            j++;
        }
        return ans;
    }
};