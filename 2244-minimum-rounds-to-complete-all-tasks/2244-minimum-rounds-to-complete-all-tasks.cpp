class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       
        unordered_map<int,int> mp;
        
        for(int i=0; i<tasks.size(); i++)
            mp[tasks[i]]++;
        
        int min_task = 0;
        
        for(auto it: mp) {
            
            if(it.second == 1)
                return -1;
            
            int count = 0;
            
            while(it.second > 3) {
                
                it.second -= 3;
                count++;
            }
            
            if(it.second > 0)
                count++;
            
            min_task += count;
            
        }
        
        return min_task;
    }
};