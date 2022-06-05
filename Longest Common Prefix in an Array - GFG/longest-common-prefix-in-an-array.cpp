// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        sort(arr,arr+n);
        
        string str1 = arr[0];
        string str2 = arr[n-1];
        
        
        string ans = "";
        
        int len = min(str1.length(),str2.length());
        
        for(int i = 0;i<len;i++)
        {
            if(str1[i] == str2[i])
                ans += str1[i];
            else
                break;
        }
        
        if(ans.size() > 0) return ans;
        
        return "-1";
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends