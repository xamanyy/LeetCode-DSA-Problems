// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        
        int z = -1;
        int t = n;
        int i = 0;
        
        
        while(i<t)
        {
            if(a[i] == 0)
            {
                z++;
                swap(a[i],a[z]);
                i++;
            }
            
            else if(a[i] == 1)
                i++;
                
            else if(a[i] == 2)
            {
                t--;
                swap(a[i],a[t]);
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends