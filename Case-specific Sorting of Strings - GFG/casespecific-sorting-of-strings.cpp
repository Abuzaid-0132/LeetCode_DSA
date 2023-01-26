//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n) {
        // your code here
        string upr="",lwr="";
        
        for(int i=0;i<n;i++) {
            
            if(str[i]>='a' && str[i]<='z')
                lwr+=str[i];
                
            else
                upr+=str[i];
        }
        
        sort(lwr.begin(),lwr.end());
        
        sort(upr.begin(),upr.end());
        
        string ans="";
        
        int a=0,b=0;
        
        for(int i=0;i<n;i++) {
            
            if(str[i]>='a' && str[i]<='z')
                ans+=lwr[a++];
                
            else
                ans+=upr[b++];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends