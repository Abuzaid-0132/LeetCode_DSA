//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++.
class Solution{
private:
    long long gcd(long long a, long long b){
        
        if(b == 0)
            return a;
            
        return gcd(b, a % b);   
    }
    
public:
    vector<long long int> minimumSquares(long long int L, long long int B) {
        
        long long g = gcd(max(L, B), min(L, B));
        long long p = (L/g) * (B/g);
        
        return {p, g};
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int L, B;
        cin>>L>>B;
        
        Solution ob;
        vector<long long int> ans = ob.minimumSquares(L, B);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends