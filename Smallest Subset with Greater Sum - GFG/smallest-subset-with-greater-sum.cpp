// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &arr,int n){
            
            int ans = 0;
            long long int sum = 0;
            
            for(int i = 0;i<n;i++)
                sum += arr[i];
                
            sum = sum/2;
            
            sort(arr.begin(),arr.end(),greater<int>());
            long long int temp = 0;
            for(int i = 0;i<n;i++)
            {
                temp += arr[i];
                ans++;
                if(temp > sum)
                {
                    return ans;
                }
            }
            return ans;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends