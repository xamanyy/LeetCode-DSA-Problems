class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //prefix sum;
        int n = nums.size();
        
        vector<int> temp(n);
        temp[0] = nums[0];
        
        for(int i = 1;i<n;i++)
        {
            temp[i] = nums[i] + temp[i-1];
        }
        
        return temp;
    }
};