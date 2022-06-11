// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int conquer(long long int arr[],long long int low,long long int high,long long int mid,long long int temp[])
    {
        long long int ans = 0;
        long long int i = low;
        long long int j = mid+1;
        long long int k = low;
        
        
        while(i<=mid && j<=high)
        {
            if(arr[i] <= arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
                
                ans += mid-i+1;
            }
        }
        
        while(i<=mid)
        {
            temp[k++] = arr[i++];
        }
        
        while(j<=high)
        {
            temp[k++] = arr[j++];
        }
        
        for(int z = low;z<=high;z++)
        {
            arr[z] = temp[z];
        }
        
        return ans;
    }
    
    long long int helper(long long int low,long long int high,long long int arr[],long long int temp[])
    {
        long long int ans = 0;
        long long int mid;
        if(low<high)
        {
            mid = (high+ low)/2;
            ans += helper(low,mid,arr,temp);
            ans += helper(mid+1,high,arr,temp);
            ans += conquer(arr,low,high,mid,temp);
        }
        
        return ans;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here

        long long int temp[n];
        return helper(0,n-1,arr,temp);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends