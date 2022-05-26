// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    
    int PalinArray(int arr[], int n)
    {
    	// code here
    	
    	for(int i = 0;i<n;i++)
    	{
    	    int temp = arr[i];
        
            int rev = 0;
            while(temp > 0)
            {
                rev = rev*10 + temp%10;
                temp = temp/10;
            }
            
            if(arr[i] != rev)
                return false;
                
    	}
    	
    	return true;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends