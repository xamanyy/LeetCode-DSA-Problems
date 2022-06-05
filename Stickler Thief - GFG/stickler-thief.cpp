// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    int dp[10001];
    int helper(int idx,int arr[],int n)
    {
        if(idx >= n) return 0;
        if(dp[idx] != -1) return dp[idx];
        
        int op1 = arr[idx] + helper(idx+2,arr,n);
        int op2 = 0 + helper(idx+1,arr,n);
        
        return dp[idx] = max(op1,op2);
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        memset(dp,-1,sizeof dp);
        return max(helper(0,arr,n),helper(1,arr,n));
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends