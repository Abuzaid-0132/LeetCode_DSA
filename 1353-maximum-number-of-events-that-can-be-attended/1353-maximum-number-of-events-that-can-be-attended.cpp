class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        // sort the events using start day..
        sort(events.begin(),events.end());
        
        int ans=0;
        int day=0;
        
        int n=events.size();
        int i=0;
        
        // min heap.. stores the active events
        priority_queue<int, vector<int>, greater<int>> q;
        
        while(!q.empty() || i<n){
            
            // empty means that no active events is present .
            if(q.empty() == true)
                day = events[i][0];
            
            // add all the active events
            while(i<n && events[i][0] == day)
                q.push(events[i++][1]);
            
            // remove the active event having earliest ending day..
            q.pop();
            
            ++ans;
            ++day;
            
            // remove rest of the inactive eventss
            while(!q.empty() && q.top()<day)
                q.pop();
        }
       
        return ans;
    }
};
