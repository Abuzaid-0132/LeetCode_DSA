class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int, int> map;
        
        for(int i=0; i<nums.size(); i++)
            map[nums[i]]++;
        
        priority_queue<pair<int,int>> pq;
        
        for(auto it: map) {
            
            pq.push({it.second, it.first});
        }
        
        while(k--) {
            
            auto temp = pq.top();
            pq.pop();
            
            ans.push_back(temp.second);
            
        }
        
        return ans;
    }
};