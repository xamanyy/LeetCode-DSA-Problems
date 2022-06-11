class Solution {
public:
    int minOperations(vector<int>& arr, int x) {

        int n = arr.size();
        int sum = 0;
        
        for(int i = 0;i<n;i++)
        {
            sum += arr[i];
        }
        
        int needSum = sum - x;
        
        if(needSum < 0) return -1;
        
        //traversal.
        int currSum = 0;
        int ans = INT_MIN;
        
       
        int  j = 0;
        
        for(int i = 0;i<n;i++)
        {
            currSum += arr[i];
            
            while(currSum > needSum)
            {
                currSum -= arr[j];
                j++;
            }
            
            if(currSum == needSum)
                ans  = max(ans,(i-j+1));
        }
        
        return ans == INT_MIN? -1: n-ans;
    }
};