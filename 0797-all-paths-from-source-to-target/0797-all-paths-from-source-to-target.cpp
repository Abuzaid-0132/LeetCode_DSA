class Solution {
public:
    
    void dfs(vector<vector<int>> &graph,vector<vector<int>> &Paths, vector<int> &route, int curr_node) {
        
        route.push_back(curr_node);
        
        if(curr_node == graph.size()-1)
            Paths.push_back(route);
        
        else{
            for(auto neigbhor: graph[curr_node]) 
                dfs(graph,Paths,route,neigbhor);
        }
        
        route.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>> Paths;
        
        vector<int> route;
        
        dfs(graph,Paths,route,0);
        
        return Paths;
        
    }
};