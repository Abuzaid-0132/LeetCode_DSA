class Solution {
public:
    
    int Stairs(int CurrStair, int TargetStair, unordered_map<int,int> &mp) {
        
        if(CurrStair == TargetStair)
            return 1;
        
        if(CurrStair > TargetStair)
            return 0;
        
        int CurrKey = CurrStair;
        
        if(mp.find(CurrKey) != mp.end())
            return mp[CurrKey];
        
        int One = Stairs(CurrStair+1, TargetStair, mp);
        
        int Two = Stairs(CurrStair+2, TargetStair, mp);
        
        mp[CurrStair] = One + Two;
        
        return One + Two;
        
    }
    
    int climbStairs(int n) {
        
        unordered_map<int,int> mp;
        
        int ans = Stairs(0,n,mp);
        
        return ans;
        
    }
};
