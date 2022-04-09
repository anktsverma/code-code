// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    // bool detectCycleBfs(int i,vector<int>adj[],vector<int>&vis){
    //     queue<pair<int,int>>q;
    //     q.push({i,-1});
    //     vis[i]=1;
    //     while(!q.empty()){
    //         int node=q.front().first;
    //         int par=q.front().second;
    //         q.pop();
    //         for(auto it:adj[node]){
    //             if(!vis[it]){
    //                 q.push({it,node});
    //                 vis[it]=1;
    //             }
    //             else if(par!=it){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    
    // bool isCycle(int V, vector<int> adj[]) {
    //     // Code here
    //     vector<int>vis(V,0);
    //     for(int i=0;i<V;i++){
    //         if(!vis[i]){
    //             if(detectCycleBfs(i,adj,vis)) return true;
    //         }
    //     }
    //     return false;
    // }
    
     bool detectCycleDfs(int node,int par,vector<int>adj[],vector<int>&vis){
         vis[node]=1;
         for(auto it:adj[node]){
             if(!vis[it]){
                 if(detectCycleDfs(it,node,adj,vis))return true;
             }
             else if(par!=it){
                 return true;
             }
         }
         return false;
     }
     
     bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detectCycleDfs(i,-1,adj,vis)) return true;
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