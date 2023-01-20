//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     int countset(int n) {

         int c=0;
         
         while(n>0) {
             
             if(n%2==1) {

                 c++;
             }
             n=n/2;
         }
         return c;
     }
  
    int minVal(int a, int b) {
        // code here
        int c1=countset(a);
        int c2=countset(b);

        if(c1==c2)
            return a;

        else if(c1>c2) {

            int diff=c1-c2;

            while(diff) {
                
                a=a&(a-1);
                diff--;
            }
            return a;
        }
        else if(c2>c1) {

            int diff=c2-c1;
            while(diff) {
                
                a=a|(a+1);
                diff--;
            }
            return a;
    }
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends