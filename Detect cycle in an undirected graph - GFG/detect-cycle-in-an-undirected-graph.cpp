// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
    bool dfs(int node,vector<int> &vis,vector<int> adj[],int parent)
    {
        vis[node] = 1;
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                if(dfs(it,vis,adj,node)) return true;
            }
            else if(it != parent) return true;
        }
        
        return false;
    }
    
  public:
    bool isCycle(int V, vector<int> adj[]) {
    
            // using dfs.
            vector<int> vis(V,0);
        
            
            for(int i = 0;i<V;i++)
            {
                if(!vis[i])
                {
                    if(dfs(i,vis,adj,-1))
                        return true;
                }
            }
            
            
            return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends