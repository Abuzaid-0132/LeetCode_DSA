//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    vector<vector<int>>path={{1,0},{-1,0},{0,1},{0,-1}};
    
    void dfs(vector<vector<int>> &mat,int n,int m,vector<vector<int>>&ocean,int prev,int i,int j){
        
        if(i<0 || i>=n || j<0 ||j>=m)
            return;
        
        if(prev>mat[i][j] || ocean[i][j])
            return;
        
        ocean[i][j]=1;
        
        for(int k=0;k<4;k++){
            
            int i1=i+path[k][0];
            
            int j1=j+path[k][1];
            
            dfs(mat,n,m,ocean,mat[i][j],i1,j1);
        }
    }
    
    
    int water_flow(vector<vector<int>> &mat,int n,int m){
    // Write your code here.
    
        vector<vector<int>>in(n,vector<int>(m,0));
        vector<vector<int>>a(n,vector<int>(m,0));
        
        for(int i=0;i<m;i++){//up down;
        
            dfs(mat,n,m,in,-1,0,i);
            dfs(mat,n,m,a,-1,n-1,i);
            
        }
        
        for(int j=0;j<n;j++){
            
            dfs(mat,n,m,in,-1,j,0);
            dfs(mat,n,m,a,-1,j,m-1);
            
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(a[i][j] && in[i][j]){
                    
                    ans++;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends