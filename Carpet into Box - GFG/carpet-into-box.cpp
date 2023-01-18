//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int carpetBox(int a, int b, int c, int d){
        //code here
        int temp = a;
        
        a = min(a, b);
        
        b = max(temp, b);
        
        temp = c;
        
        c = min(c, d);
        
        d = max(temp, d);
        
        int ans = 0;
        
        while(a > c || b > d) {
            
            if(a > d) {
                
                a /= 2;
                ans++;
            }
            
            else if(b > d) {
                
                b /= 2;
                ans++;
            }
            
            else if(a > c) {
                
                a /= 2;
                ans++;
            }
            
            else if(b > c) {
                
                b /= 2;
                ans++;
            }
            
            temp = a;
            
            a = min(a, b);
            
            b = max(temp, b);
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends