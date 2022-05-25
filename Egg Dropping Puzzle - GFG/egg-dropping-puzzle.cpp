// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    
int dp[201][201];
int helper(int axe,int logs)
{
    //base condition
    if(logs == 0 || logs == 1) return logs;
    
    if(axe == 1) return logs;
    
    if(dp[axe][logs] != -1) return dp[axe][logs];
    int mn = INT_MAX;
    
    for(int k =  1;k<=logs;k++)
    {
        int temp = 1 + max(helper(axe-1,k-1) , helper(axe,logs-k));       
        mn  = min(temp,mn);
    }
    
    return dp[axe][logs]  = mn;
}
    int eggDrop(int n, int k) 
    {
       memset(dp,-1,sizeof dp);
       return helper(n,k);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends