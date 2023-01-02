class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        
        priority_queue<pair<int,int>> pq;
        
        for(auto it: mp) {
            
            pq.push({it.second,it.first});
            
        }
        
        vector<int> ans;
        
        while(k--) {
            
            auto temp = pq.top();
            pq.pop();
            
            ans.push_back(temp.second);
            
        }
        
        return ans;
    }
};