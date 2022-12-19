class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        unordered_map<int,vector<int>> mp;
        
        for(auto x: edges){
            vector<int> temp = x;
            
            int u = temp[0];
            int v = temp[1];
            
            mp[u].push_back(v);
            mp[v].push_back(u);
            
        }
        
        vector<bool> visited(n+1,false);
        
        queue<int> q;
        q.push(start);
        visited[start] = true;
        
        while(!q.empty()) {
            
            int v = q.front();
            q.pop();
                  
                vector<int> temp = mp[v];
                
                for(int i=0; i<temp.size(); i++) {
                    
                    int vertex = temp[i];
                    
                    if(visited[vertex] == false) {
                        
                        q.push(vertex);
                        
                        visited[vertex] = true;
                    }
                    
                }
                
        }
        
        return visited[end] == true ? true : false;
    }
};

