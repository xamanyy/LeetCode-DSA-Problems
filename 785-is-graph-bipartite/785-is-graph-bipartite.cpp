class Solution {
    bool dfs(int node,vector<int> &color,vector<vector<int>>&  adj)
    {
        for(auto it: adj[node])
        {
            if(color[it] == -1)
            {
                color[it] = 1 - color[node];
                if(!dfs(it,color,adj)) return false;
            }
            else if(color[it] == color[node])
                return false;
        }
        
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
//         vector<int> adj[n];
        
//         for(int i = 0;i<n;i++)
//         {
//             int u,v;
//             u = graph[i][0];
//             v = graph[i][1];
            
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
        vector<int> color(n,-1);
        
        for(int i = 0;i<n;i++)
        {
            if(color[i] == -1)
            {
               color[i] = 1;
                if(!dfs(i,color,graph)) return false;
            }        
        }
        
        return true;
    }
};