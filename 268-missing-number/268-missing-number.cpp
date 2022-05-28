class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum = 0;
        
        int n = nums.size();
        
        for(int i = 0;i<=n;i++)
            sum += i;
        
        int temp = 0;
        
        for(int i = 0;i<n;i++)
        {
            temp += nums[i];
        }
        
        int res = 0;
        res = sum - temp;
        
        return res;
    }
};