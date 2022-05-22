// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    void dfs(int x,int y,int n,int m,vector<vector<char>>& grid)
    {
        if(x <0 || y< 0 || x>= n || y >= m || grid[x][y] == '0') return;
        
        grid[x][y] = '0';
        dfs(x+1,y,n,m,grid);
        dfs(x-1,y,n,m,grid);
        dfs(x,y+1,n,m,grid);
        dfs(x,y-1,n,m,grid);
        
        //diagonals
        dfs(x+1,y+1,n,m,grid);
        dfs(x-1,y-1,n,m,grid);
        dfs(x+1,y-1,n,m,grid);
        dfs(x-1,y+1,n,m,grid);
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(grid[i][j] == '1')
                {
                    ans++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends