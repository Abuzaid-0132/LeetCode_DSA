//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++.
class Solution {
  public:
    bool setbit(int i,int n) {
        return  (n & (1 << i));
    }
    
    int noConseBits(int &n) {
        
      for(int i=30; i>=2; i--) {
          if(setbit(i,n) && setbit(i-1,n) && setbit(i-2,n))
            n = n ^ (1 << (i-2));
      }
      
      return n;
    }
};

//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends