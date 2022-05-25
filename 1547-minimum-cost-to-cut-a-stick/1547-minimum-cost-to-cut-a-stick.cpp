class Solution {

    int helper(int i,int j,vector<int>& cuts, vector<vector<int>> &dp)
    {
        if(i>j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int mn = INT_MAX;
        
        for(int k = i;k<=j;k++)
        {
            int temp = cuts[j+1] - cuts[i-1] + helper(i,k-1,cuts,dp) + helper(k+1,j,cuts,dp);
            
            mn = min(temp,mn);
        }
        
        return dp[i][j] = mn;
        
    }
public:
    int minCost(int n, vector<int>& cuts) {
        
        int m = cuts.size();

        cuts.push_back(0);
        cuts.push_back(n);
        
        sort(cuts.begin(),cuts.end());
        
        vector<vector<int>> dp(m+2,vector<int>(m+2,-1));
        

        return helper(1,m,cuts,dp);
    }
};