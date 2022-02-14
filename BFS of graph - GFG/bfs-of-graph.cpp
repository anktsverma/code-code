// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfsFun(int i,int V,vector<int>adj[],vector<int>&bfs,vector<int>&vis){
        queue<int>q;
        vis[i]=1;
        q.push(i);
        while(!q.empty()){
          int node=q.front();
          q.pop();
          bfs.push_back(node);
           for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                    
                   }
            }
 
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>bfs;
        vector<int>vis(V,0);
        bfsFun(0,V,adj,bfs,vis);
  
        
        return bfs;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends