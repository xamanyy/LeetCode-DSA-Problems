// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    //binary search
    int low = 0;
    int high = n-1;
    
    //fisrt occurennece
    int firstOccur = -1;
    
    while(low<=high)
    {
        int mid  = low+ (high-low)/2;
        
        if(arr[mid] == x)
        {
            //left side to find first occurence
            firstOccur = mid;
            high = mid-1;
        }
        else if(arr[mid] > x)
        {
            high = mid-1;
        }
        else
            low = mid+1; 
    }
    
    int lastOccur = -1;
    //last occurence
    
    low = 0;
    high = n-1;
    while(low<=high)
    {
        int mid = low+(high - low)/2;
        
        if(arr[mid] == x)
        {
            lastOccur = mid;
            low = mid+1;
        }
        else if(arr[mid] > x)
            high  = mid-1;
        else
            low = mid+1;
    }
    
    return {firstOccur,lastOccur};
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends