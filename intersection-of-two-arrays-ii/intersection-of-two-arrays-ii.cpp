class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> map;
        vector<int> ans;
        
        for(int i=0; i<nums1.size(); i++)
            map[nums1[i]]++;
        
        for(int i=0; i<nums2.size(); i++) {
            
            auto it = map.find(nums2[i]);
            
            if(it != map.end() && it->second > 0) {
                
                ans.push_back(nums2[i]);
                
                it->second--;
                
            }
            
        }
        
        return ans;
    }
};