//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         vector<int> temp(r-l+1);
         int idx1 = l;
         int idx2 = m+1;
         int i = 0;
         
         while(idx1 <= m && idx2 <= r){
             if(arr[idx1] <= arr[idx2]){
                 temp[i++] = arr[idx1++];
             }
             else if(arr[idx1] > arr[idx2]){
                 temp[i++] = arr[idx2++];
             }
         }
         
         while(idx1 <= m){
             temp[i++] = arr[idx1++];
         }
         
         while(idx2 <= r){
             temp[i++] = arr[idx2++];
         }
         
         for(int i = 0,j = l;i<temp.size();i++,j++){
             arr[j] = temp[i];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){
            int m = l + (r-l)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends