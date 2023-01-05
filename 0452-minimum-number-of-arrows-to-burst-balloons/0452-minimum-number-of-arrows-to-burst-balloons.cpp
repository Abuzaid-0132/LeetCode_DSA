class Solution {
public:
    
    static bool comp(vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        
        if(points.size() == 0)
            return 0;
        
        sort(points.begin(),points.end(), comp);
        
        int Arrow = 1;
        int End = points[0][1];
        
        for(int i=1; i<points.size(); i++) {
            
            if(points[i][0] > End){
                
                Arrow += 1;
                End = points[i][1];
            }
            else
                continue;
            
        }
        
        return Arrow;
    }
};