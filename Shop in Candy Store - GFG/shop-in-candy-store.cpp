//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution {
public:
    vector<int> candyStore(int candies[], int n, int k) {
        
        vector<int> ans;
        int i=0, j=n-1;
        sort(candies,candies+n);
        
        int minCost = 0;
        
        while(i<=j) {
            
            minCost += candies[i];
            i++;
            j = j-k;
            
        }
        ans.push_back(minCost);
        
        i=0; j=n-1;
        int maxCost = 0;
        
        while(i <= j) {
            
            maxCost += candies[j];
            j--;
            i = i+k;
            
        }
        
        ans.push_back(maxCost);
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends