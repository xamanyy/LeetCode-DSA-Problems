class Solution {
public:
    
    int dp[201][201];
    
    int helper(int x,int y,int n,int m,vector<vector<int>> &grid)
    {      
        if(x >= n || y >= m) return INT_MAX;
        
        else if(x  == n-1 && y == m-1)
            return grid[x][y];
        if(dp[x][y] != -1) return dp[x][y];
        
        return dp[x][y]  = grid[x][y]  + min(helper(x+1,y,n,m,grid), helper(x,y+1,n,m,grid));
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        memset(dp,-1,sizeof dp);
        return helper(0,0,n,m,grid);
    }
};