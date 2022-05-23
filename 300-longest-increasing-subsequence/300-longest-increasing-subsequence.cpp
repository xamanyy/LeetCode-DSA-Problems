class Solution {
    
     int dp[2501][2502];
    int helper(vector<int> &nums,int n,int idx,int preIdx)
    {
        if(idx >= n) return 0;
        
        if(dp[idx][preIdx+1] != -1) return dp[idx][preIdx+1];
        //not take.
        int notTake = 0,take = 0;
        
        notTake = helper(nums,n,idx+1,preIdx);
        
        if(preIdx == -1 || nums[idx] > nums[preIdx])
            take = 1 + helper(nums,n,idx+1,idx);
        
        return dp[idx][preIdx+1] = max(take,notTake);
    }
    
public:
    int lengthOfLIS(vector<int>& nums) {
        
       
        memset(dp,-1,sizeof dp);
        
        int n = nums.size();
        return helper(nums,n,0,-1);
    }
};