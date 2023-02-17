//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        
        long long v[N];

        long long sum=0;

        for(int i=0;i<N;i++){

            if(i<K){

                sum+=GeekNum[i];

                v[i]=GeekNum[i];

            }

            if(i>=K){

                v[i]=sum;

                sum+=v[i]-v[i-K];

            }

        }

        return v[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends