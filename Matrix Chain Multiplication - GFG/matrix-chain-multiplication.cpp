// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    int dp[101][101];
    
    int helper( int arr[],int n,int i,int j)
    {
        int ans = INT_MAX;
        if(i>=j) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        for(int k = i;k<=j-1;k++)
        {
            int temp  = helper(arr,n,i,k) + helper(arr,n,k+1,j) + arr[k]*arr[j]*arr[i-1];
            ans = min(ans,temp);
        }
        
        return dp[i][j] = ans;
    }
    
public:
    int matrixMultiplication(int n, int arr[])
    {
            
            memset(dp,-1,sizeof dp);
            return helper(arr,n,1,n-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends