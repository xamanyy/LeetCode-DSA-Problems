// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    long long int ans = 0;
    
    sort(arr,arr+n);
    
    int low = 0;
    int high = n-1;
    
    while(low<high)
    {
        ans += abs(arr[low] - arr[high]) + abs(arr[low+1] - arr[high]);
        
        low++;
        high--;
    }
    
    
    ans += abs(arr[0] - arr[low]);
    
    return ans;
}