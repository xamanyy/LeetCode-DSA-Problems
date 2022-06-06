// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int arr[], int n, int k)
    {
        long long int sum = 0;
        sort(arr,arr+n);
        
        for(long long int i = 0;i<n;i++)
        {
            if(arr[i] < 0 && k>0)
            {
                arr[i] = abs(arr[i]);
                k--;
            }
        }
        
        sort(arr,arr+n);
        
        if(k != 0 && k%2 == 1)
        {
            arr[0] = (-1)*arr[0];
        }
        
        for(int i = 0;i<n;i++)
        {
            sum += (arr[i]);
        }
        
        return sum;
    }
};

// { Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends