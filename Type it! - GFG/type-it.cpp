//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
    bool chk(string str, string s)
    {
        str.append(str.begin(), str.end());

        if (s.find(str) != s.npos)
        {
            return true;
        }

        return false;
    }

public:
    int minOperation(string s)
    {
        // find largest string that is breakable into 2 parts
        int largestBreakable = 0;
        string str, temp;

        for (int j = 0; j < s.length(); j++)
        {
            // check if double possible
            string temp;
            temp.append(s.begin(), s.begin() + j);

            if (temp.length() > 0 && chk(temp, s))
            {
                // cout << temp << endl;
                int len = temp.length();
                largestBreakable = max(largestBreakable, len);
            }
        }
        
        if(largestBreakable > 0)
        {
            int ans = s.length()-largestBreakable+1;
            return ans;
        }

        return s.length();
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends