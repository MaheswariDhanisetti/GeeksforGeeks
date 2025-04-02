//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    bool bfs(vector<vector<int>>&adj  , vector<int>&vis , int node){
        
        vis[node] = 1;
     
        queue<pair<int,int>>q;
        
        q.push({node , node}); // {node , parent}
        
        while(!q.empty()){
            
            int node = q.front().first;
            int parent = q.front().second;
            
            q.pop();
            
            for(int i=0;i<adj[node].size();i++){
                if(vis[adj[node][i]]==1 and adj[node][i]!=parent) return true;
                else if(vis[adj[node][i]]==0){
                    vis[adj[node][i]] =1;
                    q.push({adj[node][i] , node});
                }
            }
            
        }
        
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        vector<vector<int>>adj(V);
        
        for(int i=0;i<edges.size();i++){
            
            int u = edges[i][0];
            int v= edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        bool ans = false;
        
        vector<int>vis(V , 0);
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                vis[i] = 1;
                bool curr = bfs(adj , vis , i);
                ans = curr | ans;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V, E;
        cin >> V >> E;
        cin.ignore();
        vector<vector<int>> edges;
        for (int i = 1; i <= E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        bool ans = obj.isCycle(V, edges);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends