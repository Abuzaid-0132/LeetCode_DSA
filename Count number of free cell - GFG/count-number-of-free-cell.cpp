//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      unordered_set<int> rows,cols;
      
      int rem = n*n;
      
      vector<long long int> ans;
      
      for(int i = 0; i<arr.size(); i++) {
          
          int temp = 0;
          
          if(!rows.count(arr[i][0])) {
              
              temp += n - cols.size();
              rows.insert(arr[i][0]);
              
          }
          
          if(!cols.count(arr[i][1])) {
              
              temp += n - rows.size();
              cols.insert(arr[i][1]);
              
          }
          
          rem -= temp;
          
          ans.push_back(rem);
      }
      
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends