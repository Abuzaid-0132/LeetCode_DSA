class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        vector<vector<int>> ans;
        
        priority_queue<pair<int,int>> pq;
        
        for(int i=0; i<score.size(); i++) 
            pq.push({score[i][k], i});
        
        while(pq.empty() == false) {
            
            auto temp = pq.top();
            pq.pop();
            
            ans.push_back(score[temp.second]);
            
        }
        
        return ans;
    }
};