class Solution {
public:
    int longestPath(vector<int>& parent, string s) {
        
        int n = parent.size();
        int ans=1; 
//at any way the minimum longest path that we can definitely get will be that particular node i.e 1
        vector<vector<int>>adj(n);
        
        for(int i=1;i<n;i++) adj[parent[i]].push_back(i);
            longestPathDfs(0,adj,s,ans);
        
        return ans;
    }
    
private:
    
    int longestPathDfs(int currentNode,vector<vector<int>>&adjacentNodes,string &stringInput,int &maxLength){
        
        int currentMax=0;
        
        int secondMax=0;
        
        for(auto nextNode:adjacentNodes[currentNode]){
            
            int result = longestPathDfs(nextNode,adjacentNodes,stringInput,maxLength);
            
            if(stringInput[currentNode] == stringInput[nextNode]){ // adjacent are same character
                continue;
            }
            
            if(result > currentMax){
                
                secondMax = currentMax;
                currentMax = result;
            }
            else if(result > secondMax){
                
                secondMax = result;
            }
        }
        
        maxLength = max(maxLength, 1 + currentMax + secondMax);
        
        return 1 + currentMax;
    }
};