
class Solution {
  public: 
     void dfs(int node,vector<int> &vis, vector<int> adj[], vector<int> &v)
     {
         v.push_back(node);
         vis[node]=1;
         for(auto it:adj[node])
         {
             if(!vis[it])
             {
                dfs(it,vis,adj,v); 
             }
         }
         
     }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> v;
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj,v);
            }
        }
       return v; 
         
    }
};
