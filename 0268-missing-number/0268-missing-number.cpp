class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size()+1;
        
        vector<bool> hash(n+1,false);
        
        for(int i=0; i<nums.size(); i++) 
            hash[nums[i]] = true;
        
        
        for(int i=0; i<hash.size(); i++)
            if(hash[i] == false)
                return i;
        
        
        return -1;
        
    }
};